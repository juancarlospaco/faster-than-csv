## Faster Than CSV
## ===============
##
## - Faster & simpler CSV replacement for Python, less options & more speed.
##
## API
## ---
##
## - ``faster_than_csv.csv2list()`` CSV to list of strings.
## - ``faster_than_csv.csv2dict()`` CSV to list of dictionaries.
## - ``faster_than_csv.csv2json()`` CSV to list of JSON.
## - ``faster_than_csv.csv2json_pretty()`` CSV to list of JSON Pretty-Printed.
## - ``faster_than_csv.csv2ndjson()`` CSV to NDJSON.
## - ``faster_than_csv.csv2htmltable()`` CSV to HTML Table.
## - ``faster_than_csv.csv2tsv()`` CSV to TSV.
## - ``faster_than_csv.tsv2csv()`` TSV to CSV.
## - ``faster_than_csv.csv2custom()`` CSV to Custom Separator (no  separator colission).
## - ``faster_than_csv.custom2csv()`` Custom Separator to CSV (no  separator colission).
## - Recommended way of importing is ``import faster_than_csv as csv``
import parsecsv, json, tables, strutils, nimpy
{.passL: "-s", passC: "-flto -ffast-math", optimization: speed.}

proc csv2list*(csv_file_path: string, has_header: bool = true, separator: char = ',',
  quote: char = '"', skipInitialSpace: bool = false): seq[string] {.inline, exportpy.} =
  ## Stream Read CSV to a list of strings.
  var parser: CsvParser
  parser.open(csv_file_path, separator, quote, skipInitialSpace=skipInitialSpace)
  if has_header:
    parser.readHeaderRow()
    while parser.readRow():
      for column in parser.headers.items:
        result.add parser.rowEntry(column)
  else:
    while parser.readRow():
      for value in parser.row.items:
        result.add $value
  parser.close()

proc csv2dict*(csv_file_path: string, has_header: bool = true, separator: char = ',',
  quote: char = '"', skipInitialSpace: bool = false): seq[Table[string, string]] {.inline, exportpy.} =
  ## Stream Read CSV to a list of dictionaries.
  var parser: CsvParser
  parser.open(csv_file_path, separator, quote, skipInitialSpace=skipInitialSpace)
  if has_header:
    parser.readHeaderRow()
    while parser.readRow():
      for column in parser.headers.items:
        result.add {$column: parser.rowEntry(column)}.toTable
  else:
    var counter: int
    while parser.readRow():
      for value in parser.row.items:
        result.add {$counter: $value}.toTable
  parser.close()

proc csv2json*(csv_file_path: string, has_header: bool = true, separator: char = ',',
  quote: char = '"', skipInitialSpace: bool = false): seq[string] {.inline, exportpy.} =
  ## Stream Read CSV to JSON.
  var
    parser: CsvParser
    temp: string
  parser.open(csv_file_path, separator, quote, skipInitialSpace=skipInitialSpace)
  if has_header:
    parser.readHeaderRow()
    while parser.readRow():
      temp = ""
      for column in parser.headers.items:
        temp.toUgly %*{$column: parser.rowEntry(column)}
        result.add temp
  else:
    var counter: int
    while parser.readRow():
      temp = ""
      for value in parser.row.items:
        temp.toUgly %*{$counter: $value}
        result.add temp
  parser.close()

proc csv2json_pretty*(csv_file_path: string, has_header: bool = true, separator: char = ',',
  quote: char = '"', skipInitialSpace: bool = false): seq[string] {.inline, exportpy.} =
  ## Stream Read CSV to JSON Pretty-printed.
  var parser: CsvParser
  parser.open(csv_file_path, separator, quote, skipInitialSpace=skipInitialSpace)
  if has_header:
    parser.readHeaderRow()
    while parser.readRow():
      for column in parser.headers.items:
        result.add pretty( %*{$column: parser.rowEntry(column)} )
  else:
    var counter: int
    while parser.readRow():
      for value in parser.row.items:
        result.add pretty( %*{$counter: $value} )
  parser.close()

proc csv2ndjson*(csv_file_path, ndjson_file_path: string, has_header: bool = true, separator: char = ',',
  quote: char = '"', skipInitialSpace: bool = false) {.inline, discardable, exportpy.} =
  ## Stream Read CSV to NDJSON https://github.com/ndjson/ndjson-spec
  var
    parser: CsvParser
    temp: string
    ndjson = open(ndjson_file_path, fmWrite)
  parser.open(csv_file_path, separator, quote, skipInitialSpace=skipInitialSpace)
  if has_header:
    parser.readHeaderRow()
    while parser.readRow():
      temp = ""
      for column in parser.headers.items:
        temp.toUgly %*{$column: parser.rowEntry(column)}
        ndjson.writeLine temp
  else:
    var counter: int
    while parser.readRow():
      temp = ""
      for value in parser.row.items:
        temp.toUgly %*{$counter: $value}
        ndjson.writeLine temp
  parser.close()

proc csv2htmltable*(csv_file_path: string, has_header: bool = true, separator: char = ',',
  quote: char = '"', skipInitialSpace: bool = false): string {.inline, exportpy.} =
  ## Stream Read CSV to JSON.
  var
    parser: CsvParser
    temp: string
  parser.open(csv_file_path, separator, quote, skipInitialSpace=skipInitialSpace)
  result.add "<table>"
  if has_header:
    parser.readHeaderRow()
    result.add "<thead><tr>"
    for column in parser.headers.items:
      result.add "<th>" & $column & "</th>"
    result.add "</tr></thead><tfoot><tr>"
    for column in parser.headers.items:
      result.add "<th>" & $column & "</th>"
    result.add "</tr></tfoot><tbody>"
    while parser.readRow():
      result.add "<tr>"
      for column in parser.headers.items:
        result.add "<td>" & parser.rowEntry(column) & "</td>"
      result.add "</tr>"
    result.add "</tbody>"
  else:
    while parser.readRow():
      result.add "<tbody>"
      for value in parser.row.items:
        result.add "<td>" & $value & "</td>"
      result.add "</tbody>"
  result.add "</table>"
  parser.close()

proc csv2tsv*(csv_file_path: string): string {.inline, exportpy.} =
  ## Stream Read CSV to TSV, simple replace of "," to "\t".
  for line in csv_file_path.lines:
    result.add line.replace(',', '\t')

proc tsv2csv*(csv_file_path: string): string {.inline, exportpy.} =
  ## Stream Read CSV to TSV, simple replace of "," to "\t".
  for line in csv_file_path.lines:
    result.add line.replace('\t', ',')

proc csv2custom*(csv_file_path: string, separator: char): string {.inline, exportpy.} =
  ## Stream Read CSV to TSV, simple replace of "," to "\t".
  for line in csv_file_path.lines:
    result.add line.replace(',', separator)

proc custom2csv*(csv_file_path: string, separator: char): string {.inline, exportpy.} =
  ## Stream Read CSV to TSV, simple replace of "," to "\t".
  for line in csv_file_path.lines:
    result.add line.replace(separator, ',')
