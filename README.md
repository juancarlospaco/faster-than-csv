# Faster-than-CSV

[![screenshot](https://source.unsplash.com/eH_ftJYhaTY/800x402)](https://youtu.be/QiKwnlyhKrk?t=5)

![](https://img.shields.io/github/languages/top/juancarlospaco/faster-than-csv?style=for-the-badge)
![](https://img.shields.io/github/languages/count/juancarlospaco/faster-than-csv?logoColor=green&style=for-the-badge)
![](https://img.shields.io/github/stars/juancarlospaco/faster-than-csv?style=for-the-badge "Star faster-than-csv on GitHub!")
![](https://img.shields.io/maintenance/yes/2019?style=for-the-badge "2019")
![](https://img.shields.io/github/languages/code-size/juancarlospaco/faster-than-csv?style=for-the-badge)
![](https://img.shields.io/github/issues-raw/juancarlospaco/faster-than-csv?style=for-the-badge "Bugs")
![](https://img.shields.io/github/issues-pr-raw/juancarlospaco/faster-than-csv?style=for-the-badge "PRs")
![](https://img.shields.io/github/commit-activity/y/juancarlospaco/faster-than-csv?style=for-the-badge)
![](https://img.shields.io/github/last-commit/juancarlospaco/faster-than-csv?style=for-the-badge "Commits")

| Library                       | Time (Speed) |
|-------------------------------|--------------|
| Pandas `read_csv()`           | `20.09`      |
| NumPy `fromfile()`            | `3.88`       |
| NumPy `genfromtxt()`          |  `4.00`      |
| NumPy `loadtxt()`             |  `1.26`      |
| csv (std lib)                 |  `0.40`      |
| csv (list)                    |  `0.38`      |
| csv (map)                     |  `0.37`      |
| Faster_than_csv               |  `0.09`      |

- This CSV Lib is ~200 Lines of Code.

<details>

- Benchmarks run on Docker from Dockerfile on this repo.
- Speed is IRL time to complete 10000 CSV Parsings.
- Lines Of Code counted using [CLOC](https://github.com/AlDanial/cloc).
- Direct dependencies of the package when ready to run.
- Benchmarks run on Docker from Dockerfile on this repo.
- Stats as of year 2019.
- x86_64 64Bit AMD, SSD, Arch Linux.

</details>


# Use

```python
import faster_than_csv as csv

csv.csv2list("example.csv")                     # See Docs for more info.
                                                # Custom Separators supported.
csv.csv2json("example.csv", indentation=4)      # CSV to JSON, Pretty-Printed.

csv.csv2htmltable("example.csv")                # CSV to HTML+CSS Table (No JavaScript).

csv.read_clipboard()                            # CSV from the Clipboard.

csv.diff_csvs("example.csv", "anotherfile.csv") # Diff optimized for CSVs.
```
- Input:  CSV, TSV, Clipboard, File, URL, PunyCode, Custom.
- Output: CSV, TSV, HTML, JSON, NDJSON, Diff, File, Custom.


# csv2dict()
<details>

**Description:**
Takes a path of a CSV file string, process CSV and returns a list of dictionaries.
This is very similar to `pandas.read_csv(filename)`.

**Arguments:**
- `csv_file_path` path of the CSV file, `str` type, required, must not be empty string.
- `has_header` Set to `True` for CSV with Header, `bool` type, optional, defaults to `True`.
- `separator` Separator character of the CSV data, `str` type, optional, defaults to `','`, must not be empty string.
- `quote` Quote character of the CSV data, `str` type, optional, defaults to `'"'`, must not be empty string.
- `skipInitialSpace` Set to `True` to ignore empty blank whitespace at the start of the CSV file, `bool` type, optional, defaults to `False` since is not technically valid.

**Returns:**
Data from the CSV, `dict` type.

</details>


# read_clipboard()
<details>

**Description:**
Reads CSV string from Clipboard, process CSV and returns a list of dictionaries.
This is very similar to `pandas.read_clipboard()`. This works on Linux, Mac, Windows.

**Arguments:**
- `has_header` Set to `True` for CSV with Header, `bool` type, optional, defaults to `True`.
- `separator` Separator character of the CSV data, `str` type, optional, defaults to `','`, must not be empty string.
- `quote` Quote character of the CSV data, `str` type, optional, defaults to `'"'`, must not be empty string.
- `skipInitialSpace` Set to `True` to ignore empty blank whitespace at the start of the CSV file, `bool` type, optional, defaults to `False` since is not technically valid.

**Returns:**
Data from the CSV, `dict` type.

</details>


# csv2json()
<details>

**Description:**
Takes a path of a CSV file string, process CSV and returns JSON.

**Arguments:**
- `csv_file_path` path of the CSV file, `str` type, required, must not be empty string.
- `has_header` Set to `True` for CSV with Header, `bool` type, optional, defaults to `True`.
- `separator` Separator character of the CSV data, `str` type, optional, defaults to `','`, must not be empty string.
- `quote` Quote character of the CSV data, `str` type, optional, defaults to `'"'`, must not be empty string.
- `skipInitialSpace` Set to `True` to ignore empty blank whitespace at the start of the CSV file, `bool` type, optional, defaults to `False` since is not technically valid.
- `indentation` Pretty-Printed or Minified JSON output, `int` type, optional, `0` is Minified, `4` is Pretty-Printed, you can use any integer to adjust the indentation.

**Returns:**
Data from the CSV as JSON Minified Single-line string computer-friendly, `str` type.

</details>


# csv2ndjson()
<details>

**Description:**
Takes a path of a CSV file string, process CSV and returns NDJSON.

**Arguments:**
- `csv_file_path` path of the CSV file, `str` type, required, must not be empty string.
- `ndjson_file_path` path of the NDJSON file, `str` type, required, must not be empty string.
- `has_header` Set to `True` for CSV with Header, `bool` type, optional, defaults to `True`.
- `separator` Separator character of the CSV data, `str` type, optional, defaults to `','`, must not be empty string.
- `quote` Quote character of the CSV data, `str` type, optional, defaults to `'"'`, must not be empty string.
- `skipInitialSpace` Set to `True` to ignore empty blank whitespace at the start of the CSV file, `bool` type, optional, defaults to `False` since is not technically valid.

**Returns:** None.
Data from the CSV as NDJSON https://github.com/ndjson/ndjson-spec, `str` type.

</details>


# csv2htmltable()
<details>

**Description:**
Takes a path of a CSV file string, process CSV and returns the data rendered on HTML Table.

**Arguments:**
- `csv_file_path` path of the CSV file, `str` type, required, must not be empty string, defaults to `""`, if its empty string then No file is written.
- `html_file_path` path of the CSV file, `str` type, optional, can be empty string.
- `has_header` Set to `True` for CSV with Header, `bool` type, optional, defaults to `True`.
- `separator` Separator character of the CSV data, `str` type, optional, defaults to `','`, must not be empty string.
- `quote` Quote character of the CSV data, `str` type, optional, defaults to `'"'`, must not be empty string.
- `skipInitialSpace` Set to `True` to ignore empty blank whitespace at the start of the CSV file, `bool` type, optional, defaults to `False` since is not technically valid.
- `header_html` HTML Header, `str` type, optional, defaults to Bulma CSS, can be empty string.

**Returns:**
Data from the CSV as HTML Table, `str` type, raw HTML (no style at all).

</details>


# csv2htmlfile()
<details>

**Description:**
Takes a path of a CSV file string, process CSV and returns the data rendered on HTML Table.

**Arguments:**
- `csv_file_path` path of the CSV file, `str` type, required, must not be empty string.
- `csv_file_path` path of the HTML file, `str` type, required, must not be empty string.
- `has_header` Set to `True` for CSV with Header, `bool` type, optional, defaults to `True`.
- `separator` Separator character of the CSV data, `str` type, optional, defaults to `','`, must not be empty string.
- `quote` Quote character of the CSV data, `str` type, optional, defaults to `'"'`, must not be empty string.
- `skipInitialSpace` Set to `True` to ignore empty blank whitespace at the start of the CSV file, `bool` type, optional, defaults to `False` since is not technically valid.

**Returns:**
Data from the CSV as HTML Table, `str` type, [human-friendly, ready for display (basic style so is usable).](http://htmlpreview.github.io/?https://raw.githubusercontent.com/juancarlospaco/faster-than-csv/master/example/sample.html)

</details>


# csv2xml()
<details>

**Description:**
Takes a path of a CSV file string, process CSV and returns a Valid XML string.
Output is guaranteed to be always Valid XML.

**Arguments:**
- `csv_file_path` path of the CSV file, `str` type, required, must not be empty string.
- `has_header` Set to `True` for CSV with Header, `bool` type, optional, defaults to `True`.
- `separator` Separator character of the CSV data, `str` type, optional, defaults to `','`, must not be empty string.
- `quote` Quote character of the CSV data, `str` type, optional, defaults to `'"'`, must not be empty string.
- `skipInitialSpace` Set to `True` to ignore empty blank whitespace at the start of the CSV file, `bool` type, optional, defaults to `False` since is not technically valid.
- `header_xml` XML Header of the XML string, `str` type, optional, can be empty string, defaults to `"<?xml version=\"1.0\" encoding=\"UTF-8\" ?>\n"`.

**Returns:** XML, `str` type.

</details>


# csv_punycode2dict()
<details>

**Description:**
Takes a path of a [PunyCode encoded](http://wikipedia.org/wiki/Punycode) CSV file string,
process CSV, Decodes [PunyCode](http://wikipedia.org/wiki/Punycode) and returns a list of dictionaries.
[PunyCode](http://wikipedia.org/wiki/Punycode) encodes Unicode as ASCII,
is used on system where Unicode is not fully supported (IoT, Legacy, Embebed, etc).

**Arguments:**
- `csv_file_path` path of the [PunyCode encoded](http://wikipedia.org/wiki/Punycode) CSV file, `str` type, required, must not be empty string.
- `has_header` Set to `True` for CSV with Header, `bool` type, optional, defaults to `True`.
- `separator` Separator character of the CSV data, `str` type, optional, defaults to `','`, must not be empty string.
- `quote` Quote character of the CSV data, `str` type, optional, defaults to `'"'`, must not be empty string.
- `skipInitialSpace` Set to `True` to ignore empty blank whitespace at the start of the CSV file, `bool` type, optional, defaults to `False` since is not technically valid.

**Returns:**
Data from the CSV, `dict` type.

</details>


# csv2tsv()
<details>

**Description:**
Takes a path of a CSV file string, process CSV and returns a TSV.

**Arguments:**
- `csv_file_path` path of the CSV file, `str` type, required, must not be empty string.
- `has_header` Set to `True` for CSV with Header, `bool` type, optional, defaults to `True`.
- `separator` Separator character of the CSV data, `str` type, optional, defaults to `','`, must not be empty string.
- `quote` Quote character of the CSV data, `str` type, optional, defaults to `'"'`, must not be empty string.
- `skipInitialSpace` Set to `True` to ignore empty blank whitespace at the start of the CSV file, `bool` type, optional, defaults to `False` since is not technically valid.
- `reversed` Set to `True` for the opposite behaviour TSV-to-CSV, `bool` type, optional, defaults to `False`.

**Returns:**
Data from the CSV as TSV, `str` type.

</details>


# csv2custom()
<details>

**Description:**
Takes a path of a CSV file string, process CSV and returns the data rendered as Custom formatted values.

**Arguments:**
- `csv_file_path` path of the CSV file, `str` type, required, must not be empty string.
- `has_header` Set to `True` for CSV with Header, `bool` type, optional, defaults to `True`.
- `separator` Separator character of the CSV data, `str` type, optional, defaults to `','`, must not be empty string.
- `quote` Quote character of the CSV data, `str` type, optional, defaults to `'"'`, must not be empty string.
- `skipInitialSpace` Set to `True` to ignore empty blank whitespace at the start of the CSV file, `bool` type, optional, defaults to `False` since is not technically valid.
- `reversed` Set to `True` for the opposite behaviour Custom-to-CSV, `bool` type, optional, defaults to `False`.

Examples:

- `csv2custom(separator="💩")` :arrow_right: Poo Separated Values.

**Returns:**
Data from the CSV as Custom formatted values, `str` type.

</details>


# diff_csvs()
<details>

**Description:**
Takes 2 paths of 2 CSV files, process CSV and returns the Diff of the 2 CSV.

**Arguments:**
- `csv_file_path0` path of the CSV file, `str` type, required, must not be empty string, file must exist.
- `csv_file_path1` path of the CSV file, `str` type, required, must not be empty string, file must exist.

**Returns:** Diff.

</details>


[**For more Examples check the Examples and Tests.**](https://github.com/juancarlospaco/faster-than-csv/blob/master/examples/example.py)

Instead of having a pair of functions with a lot of arguments that you should provide to make it work,
we have tiny functions with very few arguments that do one thing and do it as fast as possible.


# Install

- `pip install faster_than_csv`


# Docker

- Make a quick test drive on Docker!.

```bash
$ ./build-docker.sh
$ ./run-docker.sh
$ ./run-benchmark.sh  # Inside Docker.
```


# Dependencies

- **None**


# Platforms

- ✅ Linux
- ✅ Windows
- ✅ Mac
- ✅ Android
- ✅ Raspberry Pi
- ✅ BSD


# Requisites

- Python 3.
- GCC.
- 64 Bit.


# Windows

- If installation fails on Windows, just use the Source Code:

![win-compile](https://user-images.githubusercontent.com/1189414/63147831-b8bf6100-bfd5-11e9-9e6e-91d61040f139.png "Git Clone and Compile on Windows 10 with only Git and Nim installed, just 2 commands!")

- Git Clone and Compile on Windows 10 on just 2 commands!.
- [Alternatively you can try Docker for Windows.](https://docs.docker.com/docker-for-windows)
- **The file extension must be `.pyd`, NOT `.dll`.**


# Stars

![Star faster-than-csv on GitHub](https://starchart.cc/juancarlospaco/faster-than-csv.svg "Star faster-than-csvon GitHub!")


# FAQ

- Whats the idea, inspiration, reason, etc ?.

[Feel free to Fork, Clone, Download, Improve, Reimplement, Play with this Open Source. Make it 10 times faster, 10 times smaller.](http://tonsky.me/blog/disenchantment)

- This requires Cython ?.

No.

- This runs on PyPy ?.

No.

- This runs on Python2 ?.

I dunno. (Not supported)

- Developer Documentation ?.

[Yes.](https://github.com/juancarlospaco/faster-than-csv/raw/master/faster_than_csv_DOCS.zip)
(Zip because GitHub marks the Repo as being JavaScript)

- How can I Install it ?.

https://github.com/juancarlospaco/faster-than-csv/releases

If you dont understand how to install it, you can just download, extract, put the files on the same folder as your `*.py` file and you are good to go.

- How can be faster than NumPy ?.

I dunno.

- How can be faster than Pandas ?.

I dunno.

- Why needs 64Bit ?.

Maybe it works on 32Bit, but is not supported, integer sizes are too small, and performance can be worse.

- Why needs Python 3 ?.

Maybe it works on Python 2, but is not supported, and performance can be worse, we suggest to migrate to Python3.

- Can I wrap the functions on a `try: except:` block ?.

Functions do not have internal `try: except:` blocks,
so you can wrap them inside `try: except:` blocks if you need very resilient code.

- PIP fails to install or fails build the wheel ?.

Add at the end of the PIP install command:

` --isolated --disable-pip-version-check --no-cache-dir --no-binary :all: `

Not my Bug.

- How to Build the project ?.

`build.sh`

- How to Package the project ?.

`package.sh`

- This requires Nimble ?.

No.

- Whats the unit of measurement for speed ?.

Unmmodified raw output of Python `timeit` module.

Please send Pull Request to Python to improve the output of `timeit`.
