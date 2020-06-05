#!/usr/bin/env nim
import os, strutils
const
  gccWin32 = system.findExe("x86_64-w64-mingw32-gcc")
  sourcePath = system.paramStr(2)
  packageName = splitFile(sourcePath).name
assert gccWin32.len > 0, "x86_64-w64-mingw32-gcc not found"
const setupCfg = """# See: https://setuptools.readthedocs.io/en/latest/setuptools.html#metadata
[metadata]
name             = $1
keywords         = python3, cpython, speed, cython, c, performance, compiled, native, fast, nim
license          = MIT
platforms        = Linux, Darwin, Windows
version          = 0.0.1
license_file     = LICENSE
long_description = file: README.md
long_description_content_type = text/markdown
classifiers =
  Environment :: Other Environment
  Intended Audience :: Other Audience
  Operating System :: OS Independent
  Programming Language :: Python

[options]
zip_safe = True
include_package_data = True
python_requires = >=3.8
packages = find:

[options.package_data]
* = *.c, *.h

[options.exclude_package_data]
* = *.py, *.pyc, *.nim, *.so, *.dll, *.zip, *.js, *.tests, *.tests.*, tests.*, tests

[options.packages.find]
include = *.c, *.h
exclude = *.py, *.pyc, *.nim, *.so, *.dll, *.zip, *.js, *.tests, *.tests.*, tests.*, tests
""".format(packageName)

const setupPy = """import os, sys, pathlib, setuptools
if sys.platform.startswith("lin"):
  folder = "lin" # OS is Linux
elif sys.platform.startswith("win"):
  folder = "win" # OS is Windows
else:
  folder = "mac" # OS is Mac (Manual compile and copy of C files required)
sources = []
for c_source_file in os.listdir(folder): # Walk the folder with C files.
  if c_source_file.endswith(".c"):       # Collect all C files.
    sources.append(str(pathlib.Path(folder) / c_source_file))

setuptools.setup(ext_modules = [setuptools.Extension(
  extra_compile_args = ["-flto", "-ffast-math", "-march=native", "-mtune=native", "-O3", "-fsingle-precision-constant"],
  name = "$1", sources = sources, extra_link_args = ["-s"], include_dirs = [folder])]) """.format(packageName)

--app:lib
--opt:speed
--cpu:amd64
--forceBuild
--define:ssl
--threads:on
--compileOnly
--define:danger
--define:release
--exceptions:goto
--gc:markAndSweep
--tlsEmulation:off
--define:noSignalHandler
--excessiveStackTrace:off
--outdir:getTempDir() # Save the *.so to /tmp, so is not on the package

rmDir(packageName)
mkDir(packageName)
writeFile("upload2pypi.sh", "twine upload " & packageName / "*.zip\n")
withDir(packageName):
  mkDir("lin") # C for Linux, compile for Linux, save C files to lin/*.c
  mkDir("win") # C for Windows, compile for Windows, save C files to win/*.c
  mkDir("mac") # C for Mac OSX, manual compile, manual copy C files to mac/*.c
  writeFile("setup.py", setupPy)   # C Extension compilation with Python stdlib
  writeFile("setup.cfg", setupCfg) # Metadata
  withDir("lin"):
    selfExec "compileToC --nimcache:. " & sourcePath
    rmFile(packageName & ".json")
    cpFile(getHomeDir() / ".choosenim/toolchains/nim-" & NimVersion / "lib/nimbase.h", "nimbase.h")
  withDir("win"):
    selfExec "compileToC --nimcache:. --os:windows --gcc.exe:" & gccWin32 & " --gcc.linkerexe:" & gccWin32 & " " & sourcePath
    rmFile(packageName & ".json")
    cpFile(getHomeDir() / ".choosenim/toolchains/nim-" & NimVersion / "lib/nimbase.h", "nimbase.h")
  echo "Apple Mac OSX: Compile manually and copy all the .c files to 'mac/' folder, see https://github.com/foxlet/macOS-Simple-KVM"
  exec "zip -9 -T -v -r " & packageName & ".zip *"
