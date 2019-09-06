import parsecsv, json, tables, streams, experimental/diff, nimpy
from strutils import replace
from osproc import execCmdEx


const html_table_header = """<!DOCTYPE html>
<html style="background-color:lightcyan">
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/bulma/0.7.5/css/bulma.min.css">
</head>
<body><br><br>
  <div class="container is-fluid">
    <table class="table is-bordered is-striped is-hoverable is-fullwidth">"""


proc csv2list*(csv_file_path: string, has_header: bool = true, separator: char = ',',
  quote: char = '"', skipInitialSpace: bool = false, verbose: bool = false): seq[string] {.exportpy.} =
  ## Stream Read CSV to a list of strings.
  var parser: CsvParser
  parser.open(csv_file_path, separator, quote, skipInitialSpace=skipInitialSpace)
  if has_header:
    parser.readHeaderRow()
    while parser.readRow():
      for column in parser.headers.items:
        result.add parser.rowEntry(column)
      if unlikely(verbose): echo parser.processedRows()
  else:
    while parser.readRow():
      for value in parser.row.items:
        result.add $value
      if unlikely(verbose): echo parser.processedRows()
  parser.close()


proc csv2dict*(csv_file_path: string, has_header: bool = true, separator: char = ',',
  quote: char = '"', skipInitialSpace: bool = false, verbose: bool = false): seq[Table[string, string]] {.exportpy.} =
  ## Stream Read CSV to a list of dictionaries. This is very similar to ``pandas.read_csv(filename)``.
  var parser: CsvParser
  parser.open(csv_file_path, separator, quote, skipInitialSpace=skipInitialSpace)
  if has_header:
    parser.readHeaderRow()
    while parser.readRow():
      for column in parser.headers.items:
        result.add {$column: parser.rowEntry(column)}.toTable
      if unlikely(verbose): echo parser.processedRows()
  else:
    var counter: int
    while parser.readRow():
      for value in parser.row.items:
        result.add {$counter: $value}.toTable
      if unlikely(verbose): echo parser.processedRows()
  parser.close()


proc read_clipboard*(has_header: bool = true, separator: char = ',',
  quote: char = '"', skipInitialSpace: bool = false, verbose: bool = false): seq[Table[string, string]] {.exportpy.} =
  ## Stream Read CSV to a list of dictionaries. This is very similar to ``pandas.read_clipboard()``.
  let (output, exitCode) = execCmdEx(
    when defined(linux):   "xclip -out"
    elif defined(macos):   "pbpaste"
    elif defined(windows): "Get-Clipboard"
    else: "")
  if likely(exitCode == 0):
    let csv = newStringStream()
    var parser: CsvParser
    parser.open(newStringStream(output), "read_clipboard", separator, quote, skipInitialSpace=skipInitialSpace)
    if has_header:
      parser.readHeaderRow()
      while parser.readRow():
        for column in parser.headers.items:
          result.add {$column: parser.rowEntry(column)}.toTable
        if unlikely(verbose): echo parser.processedRows()
    else:
      var counter: int
      while parser.readRow():
        for value in parser.row.items:
          result.add {$counter: $value}.toTable
        if unlikely(verbose): echo parser.processedRows()
    parser.close()


proc csv2json*(csv_file_path: string, has_header: bool = true,
  separator: char = ',', quote: char = '"', skipInitialSpace: bool = false,
  verbose: bool = false, indentation: int = 0): seq[string] {.exportpy.} =
  ## Stream Read CSV to JSON, Pretty-printed or Minified.
  var
    parser: CsvParser
    temp: string
  parser.open(csv_file_path, separator, quote, skipInitialSpace=skipInitialSpace)
  if has_header:
    parser.readHeaderRow()
    while parser.readRow():
      if unlikely(indentation != 0):
        for column in parser.headers.items:
          result.add json.pretty(%*{$column: parser.rowEntry(column)}, indentation)
      else:
        for column in parser.headers.items:
          temp = ""
          temp.toUgly %*{$column: parser.rowEntry(column)}
          result.add temp
      if unlikely(verbose): echo parser.processedRows()
  else:
    var counter: int
    while parser.readRow():
      if unlikely(indentation != 0):
        for value in parser.row.items:
          result.add json.pretty(%*{$counter: $value}, indentation)
      else:
        for value in parser.row.items:
          temp = ""
          temp.toUgly %*{$counter: $value}
          result.add temp
      if unlikely(verbose): echo parser.processedRows()
  parser.close()


proc csv2ndjson*(csv_file_path, ndjson_file_path: string, has_header: bool = true, separator: char = ',',
  quote: char = '"', skipInitialSpace: bool = false, verbose: bool = false) {.discardable, exportpy.} =
  ## Stream Read CSV to NDJSON https://github.com/ndjson/ndjson-spec
  var
    parser: CsvParser
    temp: string
    ndjson = open(ndjson_file_path, fmWrite)
  parser.open(csv_file_path, separator, quote, skipInitialSpace=skipInitialSpace)
  if has_header:
    parser.readHeaderRow()
    while parser.readRow():
      for column in parser.headers.items:
        temp = ""
        temp.toUgly %*{$column: parser.rowEntry(column)}
        ndjson.writeLine temp
      if unlikely(verbose): echo parser.processedRows()
  else:
    var counter: int
    while parser.readRow():
      for value in parser.row.items:
        temp = ""
        temp.toUgly %*{$counter: $value}
        ndjson.writeLine temp
      if unlikely(verbose): echo parser.processedRows()
  ndjson.close()
  parser.close()


proc csv2htmltable*(csv_file_path: string, has_header: bool = true, separator: char = ',',
  quote: char = '"', skipInitialSpace: bool = false, verbose: bool = false): string {.exportpy.} =
  ## Stream Read CSV to HTML Table string.
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
      if unlikely(verbose): echo parser.processedRows()
    result.add "</tbody>"
  else:
    while parser.readRow():
      result.add "<tbody>"
      for value in parser.row.items:
        result.add "<td>" & $value & "</td>"
      result.add "</tbody>"
      if unlikely(verbose): echo parser.processedRows()
  result.add "</table>"
  parser.close()


proc csv2htmlfile*(csv_file_path, html_file_path: string, has_header: bool = true, separator: char = ',',
  quote: char = '"', skipInitialSpace: bool = false, verbose: bool = false) {.discardable, exportpy.} =
  ## Stream Read CSV to HTML Table file.
  var
    parser: CsvParser
    html_content: string
  parser.open(csv_file_path, separator, quote, skipInitialSpace=skipInitialSpace)
  html_content.add html_table_header
  if has_header:
    parser.readHeaderRow()
    html_content.add "<thead class='thead'><tr>"
    for column in parser.headers.items:
      html_content.add "<th class='has-background-grey-light'>" & $column & "</th>"
    html_content.add "</tr></thead><tfoot class='tfoot has-text-primary'><tr>"
    for column in parser.headers.items:
      html_content.add "<th class='has-background-grey-light'>" & $column & "</th>"
    html_content.add "</tr></tfoot><tbody class='tbody'>"
    while parser.readRow():
      html_content.add "<tr>"
      for column in parser.headers.items:
        html_content.add "<td>" & parser.rowEntry(column) & "</td>"
      html_content.add "</tr>"
      if unlikely(verbose): echo parser.processedRows()
    html_content.add "</tbody>"
  else:
    while parser.readRow():
      html_content.add "<tbody>"
      for value in parser.row.items:
        html_content.add "<td>" & $value & "</td>"
      html_content.add "</tbody>"
      if unlikely(verbose): echo parser.processedRows()
  html_content.add "</table></div></body></html>"
  parser.close()
  writeFile(html_file_path , html_content)


proc csv2tsv*(csv_file_path: string): string {.exportpy.} =
  ## Stream Read CSV to TSV, simple replace of "," to "\t".
  for line in csv_file_path.lines:
    result.add line.replace(',', '\t')


proc tsv2csv*(csv_file_path: string): string {.exportpy.} =
  ## Stream Read CSV to TSV, simple replace of "," to "\t".
  for line in csv_file_path.lines:
    result.add line.replace('\t', ',')

proc csv2custom*(csv_file_path: string, separator: string): string {.exportpy.} =
  ## Stream Read CSV to TSV, simple replace of "," to "\t".
  for line in csv_file_path.lines:
    result.add line.replace(",", separator)


proc custom2csv*(csv_file_path: string, separator: string): string {.exportpy.} =
  ## Stream Read CSV to TSV, simple replace of "," to "\t".
  for line in csv_file_path.lines:
    result.add line.replace(separator, ",")


proc diff_csvs*(csv_file_path0, csv_file_path1: string): seq[Item] {.exportpy.} =
  ## Diff 2 CSV files.
  diffText(readFile(csv_file_path0), readFile(csv_file_path0))
