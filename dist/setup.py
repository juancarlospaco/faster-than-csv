import os, sys, pathlib, setuptools, sysconfig, platform, subprocess
from setuptools.command.build_ext import build_ext

assert platform.architecture()[0] == "64bit", "ERROR: Python must be 64 Bit!. OS must be 64 Bit!."
assert "x86" in platform.machine(), "ERROR: Hardware Architecture must be x86!. For ARM compile manually."

if sys.platform.startswith("lin"):
  folder = "lin" # OS is Linux
  custom_commands = ["echo 'Powered by Nim'"]
elif sys.platform.startswith("win"):
  folder = "win" # OS is Windows
  custom_commands = ["echo 'Powered by Nim'"]
else:
  folder = "mac" # OS is Mac
  custom_commands = ["echo 'Powered by Nim'"]

sources = []
for c_source_file in os.listdir(folder): # Walk the folder with C files.
  if c_source_file.endswith(".c"):       # Collect all C files.
    sources.append(str(pathlib.Path(folder) / c_source_file))

class NoSuffixBuilder(build_ext):
  def get_ext_filename(self, ext_name): # NO Suffix
    filename = super().get_ext_filename(ext_name)
    return filename.replace(sysconfig.get_config_var('EXT_SUFFIX'), "") + pathlib.Path(filename).suffix

class CustomCommands(setuptools.Command):
  """Setuptools Command class to run custom arbitrary non-interactive OS-native commands."""
  def run(self):
    if len(custom_commands) > 0:
      for cmd in custom_commands:
        p = subprocess.Popen(cmd, stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
        stdout_data, _ = p.communicate()
        if p.returncode != 0:
          raise RuntimeError(f"Command { cmd } failed: exit code: { p.returncode }")
        else:
          print(stdout_data)  

setuptools.setup(
  cmdclass = {"build_ext": NoSuffixBuilder, "build": CustomCommands},
  ext_modules = [
    setuptools.Extension(
      name = "faster_than_csv",
      sources = sources,
      include_dirs = [folder],
      extra_link_args = ["-s"],
      extra_compile_args = ["-flto", "-ffast-math", "-march=native", "-mtune=native", "-O3", "-fsingle-precision-constant"],
    )
  ]
)
