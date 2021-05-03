import parsecsv, json, tables, streams, strutils, os, osproc, xmltree, httpclient, terminal, experimental/diff, nimpy


const html_table_header = """<!DOCTYPE html>
<html style="background-color:lightcyan">
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/bulma/0.9.2/css/bulma.min.css" async defer >
</head>
<body><br><br>
  <div class="container is-fluid">
    <table class="table is-bordered is-striped is-hoverable is-fullwidth">"""

const karax_header = """
include karax/prelude  # nimble install karax http://github.com/pragmagic/karax

proc createDom(): VNode {.discardable.} =
  result = buildHtml(table):
    thead(class="thead"):
      tr(class="has-background-grey-light"):
"""


proc csv2list*(csv_file_path: string; columns: Natural = 9; rows: Natural = 9; separator: char = ',';
    quote: char = '"'; escape: char = '\x00'; skipInitialSpace: bool = false): seq[string] {.exportpy, noinit.} =
  ## Stream Read CSV to a list of strings.
  result = newSeqOfCap[string](columns * rows)
  let parser {.noalias.} = create CsvParser
  parser[].open(csv_file_path, separator, quote, escape, skipInitialSpace)
  parser[].readHeaderRow()
  while parser[].readRow(columns):
    for column in parser[].headers.items:
      result.add parser[].rowEntry(column)
  parser[].close()
  if parser != nil: dealloc parser


proc csv2dict*(csv_file_path: string; columns: Natural = 0; separator: char = ',';
  quote: char = '"'; escape: char = '\x00'; skipInitialSpace: bool = false): seq[Table[string, string]] {.exportpy.} =
  ## Stream Read CSV to a list of dictionaries. This is very similar to ``pandas.read_csv(filename)``.
  let parser {.noalias.} = create CsvParser
  parser[].open(csv_file_path, separator, quote, escape, skipInitialSpace)
  parser[].readHeaderRow()
  while parser[].readRow(columns):
    for column in parser[].headers.items:
      result.add {$column: parser[].rowEntry(column)}.toTable
  parser[].close()
  if parser != nil: dealloc parser


proc read_clipboard*(columns: Natural = 0; has_header: bool = true, separator: char = ',',
  quote: char = '"', escape: char = '\x00'; skipInitialSpace: bool = false): seq[Table[string, string]] {.exportpy.} =
  ## Stream Read CSV to a list of dictionaries. This is very similar to ``pandas.read_clipboard()``.
  let parser {.noalias.} = create(CsvParser)
  let (output, exitCode) = execCmdEx(
    when defined(linux):   "xclip -out"
    elif defined(macos):   "pbpaste"
    elif defined(windows): "Get-Clipboard"
    else:                  "")
  if likely(exitCode == 0):
    parser[].open(newStringStream(output), "read_clipboard", separator, quote, escape, skipInitialSpace)
    if has_header:
      parser[].readHeaderRow()
      while parser[].readRow(columns):
        for column in parser[].headers.items: result.add {$column: parser[].rowEntry(column)}.toTable
    else:
      var counter = 0
      while parser[].readRow(columns):
        for value in parser[].row.items: result.add {$counter: $value}.toTable
        inc counter
  parser[].close()
  if parser != nil: dealloc parser


proc url2csv*(url: string; columns: Natural = 0; separator: char = ','; quote: char = '"'; escape: char = '\x00'; skipInitialSpace: bool = false;
  agent: string = defUserAgent; maxRedirects: int = 5; timeout: int = -1; http_method: string = "GET", body: string = ""): seq[Table[string, string]] {.exportpy.} =
  ## Stream Read URL to CSV to a list of dictionaries. This is very similar to ``pandas.read_csv(url)``.
  assert url.startsWith"http", "URL must be a valid, non empty string, HTTP URL Link"
  let parser {.noalias.} = create(CsvParser)
  parser[].open(newStringStream(newHttpClient(userAgent = agent, maxRedirects = maxRedirects, timeout = timeout).request(url, http_method, body).body), "url2csv", separator, quote, escape, skipInitialSpace)
  parser[].readHeaderRow()
  while parser[].readRow(columns):
    for column in parser.headers.items: result.add {$column: parser[].rowEntry(column)}.toTable
  parser[].close()
  if parser != nil: dealloc parser


proc csv2json*(csv_string: string; separator: char = ','; nl: char = '\n'): string {.exportpy.} =
  ## CSV string to JSON string Pretty-printed.
  assert csv_string.len > 0, "Argument must not be empty string"
  assert separator != nl and separator notin {' ', '\n'} and nl notin {' ', ',', ';', '\t'}
  var temp = newJObject()
  let csvlines = csv_string.split(nl)
  let firstLine = csvlines[0].split(separator)
  var headers = newSeqOfCap[string](firstLine.len)
  for item in firstLine: headers.add item
  for y in headers: temp[y] = newJArray()
  for z in csvlines[1 .. ^1]:
    var i = 0
    for x in z.split(separator): # horizontal
      if x == "true": temp[headers[i]].add newJBool(true)
      elif x == "false": temp[headers[i]].add newJBool(false)
      elif x == "null": temp[headers[i]].add newJNull()
      elif unlikely(x == "NaN"): temp[headers[i]].add newJFloat(NaN)
      elif unlikely(x == "undefined"): temp[headers[i]].add newJNull()
      elif unlikely(x == "+inf"): temp[headers[i]].add newJFloat(+1e9999)
      elif unlikely(x == "-inf"): temp[headers[i]].add newJFloat(-1e9999)
      elif (func (ss: string): bool = (for v in ss: result = v in {'.', '-', '+', 'e', '0'..'9'}))(x):
        if '.' in x and 'e' notin x:
          temp[headers[i]].add newJFloat(parseFloat(x))
        elif 'e' in x and '.' notin x:
          temp[headers[i]].add newJFloat(parseFloat(x))
        else:
          temp[headers[i]].add newJInt(parseInt(x))
      else:
        temp[headers[i]].add newJString(x)
      inc i
  result = temp.pretty


proc csv2ndjson*(csv_file_path, ndjson_file_path: string, columns: Natural = 0; separator: char = ',',
  quote: char = '"', escape: char = '\x00'; skipInitialSpace: bool = false) {.discardable, exportpy.} =
  ## Stream Read CSV to NDJSON https://github.com/ndjson/ndjson-spec
  let parser {.noalias.} = create(CsvParser)
  var ndjson, temp: string
  parser[].open(csv_file_path, separator, quote, escape, skipInitialSpace)
  parser[].readHeaderRow()
  while parser[].readRow(columns):
    for column in parser[].headers.items:
      temp = ""
      temp.toUgly %*{$column: parser[].rowEntry(column)}
      ndjson.add temp
      ndjson.add '\n'
  writeFile(ndjson_file_path, $ndjson)
  parser[].close()
  if parser != nil: dealloc parser


proc csv2htmltable*(csv_file_path, html_file_path: string = "",
    columns: Natural = 0; separator: char = ',', quote: char = '"', escape: char = '\x00';
    skipInitialSpace: bool = false, header_html: string = html_table_header): string {.exportpy, noinit.} =
  ## Stream Read CSV to HTML Table file and string.
  result = newStringOfCap(int16.high)
  result.add header_html
  result.add "<thead class='thead'>\n<tr>\n"
  let parser {.noalias.} = create(CsvParser)
  parser[].open(csv_file_path, separator, quote, escape, skipInitialSpace)
  parser[].readHeaderRow()
  for column in parser[].headers.items:
    result.add "<th class='has-background-grey-light'>"
    result.add $column
    result.add "</th>"
  result.add "</tr>\n</thead>\n<tfoot class='tfoot has-text-primary'>\n<tr>\n"
  for column in parser[].headers.items:
    result.add "<th class='has-background-grey-light'>"
    result.add $column
    result.add "</th>"
  result.add "</tr>\n</tfoot>\n<tbody class='tbody'>\n"
  while parser[].readRow(columns):
    result.add "<tr>"
    for column in parser[].headers.items:
      result.add "<td>"
      result.add parser[].rowEntry(column)
      result.add "</td>"
    result.add "</tr>\n"
  result.add "</tbody>\n</table>\n</div>\n</body>\n</html>\n"
  parser[].close()
  if html_file_path.len > 0: writeFile(html_file_path , result)
  if parser != nil: dealloc parser


proc csv2markdowntable*(csv_file_path, md_file_path: string = "",
    separator: char = ',', quote: char = '"', escape: char = '\x00'; columns: Natural = 0;
    skipInitialSpace: bool = false): string {.exportpy.} =
  ## CSV to MarkDown Table file and string.
  result = newStringOfCap(int16.high)
  let parser {.noalias.} = create(CsvParser)
  parser[].open(csv_file_path, separator, quote, escape, skipInitialSpace)
  parser[].readHeaderRow()
  for column in parser[].headers.items:
    result.add '|'
    result.add ' '
    result.add $column
    result.add ' '
  result.add "|\n| "
  result.add "---- | ".repeat(parser[].headers.len)
  result.add '\n'
  while parser[].readRow(columns):
    for column in parser[].headers.items:
      result.add '|'
      result.add ' '
      result.add parser[].rowEntry(column)
      result.add ' '
    result.add '|'
    result.add '\n'
  parser[].close()
  if md_file_path.len > 0: writeFile(md_file_path , result)
  if parser != nil: dealloc parser


proc csv2terminal*(csv_file_path: string; column_width: Natural; columns: Natural = 0; separator: char = ',';
    quote: char = '"'; escape: char = '\x00'; skipInitialSpace: bool = false) {.exportpy.} =
  ## CSV to pretty-printed colored terminal table.
  let parser {.noalias.} = create(CsvParser)
  parser[].open(csv_file_path, separator, quote, escape, skipInitialSpace)
  parser[].readHeaderRow()
  const colors = [fgRed, fgGreen, fgYellow, fgBlue, fgDefault, fgMagenta, fgCyan, fgWhite, fg8Bit]
  var i = 0
  for column in parser[].headers.items:
    stdout.styledWrite bgBlack, styleUnderscore, "| " & $column & " ".repeat(column_width - len($column) + 1)
  stdout.styledWrite bgBlack, styleUnderscore, "|\n"
  while parser[].readRow(columns):
    var c = colors[i]
    for col in parser[].headers.items:
      stdout.styledWrite bgBlack, c, styleUnderscore, "| " & alignLeft(parser[].rowEntry(col), column_width + 1)
    stdout.styledWrite bgBlack, c, styleUnderscore, "|\n"
    if i > 7: i = 0 else: inc i
  resetAttributes()
  parser[].close()
  if parser != nil: dealloc parser


proc csv2karax*(csv_file_path: string = "", columns: Natural = 0; separator: char = ',',
  quote: char = '"', escape: char = '\x00'; skipInitialSpace: bool = false): string {.exportpy, noinit.} =
  ## CSV to Karax HTML Table.
  result = newStringOfCap(int16.high)
  result.add karax_header
  let parser {.noalias.} = create(CsvParser)
  parser[].open(csv_file_path, separator, quote, escape, skipInitialSpace)
  parser[].readHeaderRow()
  for column in parser[].headers.items:
    result.add "        th:\n          text(\"\"\"" & $column & "\"\"\")\n"
  result.add "    tfoot(class=\"tfoot has-text-primary\"):\n      tr(class=\"has-background-grey-light\"):\n"
  for column in parser[].headers.items:
    result.add "        th:\n         text(\"\"\"" & $column & "\"\"\")\n"
  result.add "    tbody(class=\"tbody\"):\n"
  while parser[].readRow(columns):
    result.add "      tr:\n"
    for column in parser[].headers.items:
      result.add "        td:\n          text(\"\"\"" & parser[].rowEntry(column) & "\"\"\")\n"
  result.add "\n\nsetRenderer(createDom)\n"
  parser[].close()
  if parser != nil: dealloc parser


proc csv2xml*(csv_file_path: string, columns: Natural = 0;
  separator: char = ',', quote: char = '"', escape: char = '\x00'; skipInitialSpace: bool = false,
  header_xml: string = xmlHeader): string {.exportpy.} =
  ## Stream Read CSV to XML.
  result = newStringOfCap(int16.high)
  result.add header_xml
  let parser {.noalias.} = create(CsvParser)
  let temp = create(seq[XmlNode])
  let e = create(XmlNode)
  parser[].open(csv_file_path, separator, quote, escape, skipInitialSpace)
  parser[].readHeaderRow()
  while parser[].readRow(columns):
    for column in parser[].headers.items:
      e[] = newElement($column)
      e[].add newText(parser[].rowEntry(column))
      temp[].add e[]
  parser[].close()
  result.add $newXmlTree("csv", temp[])
  if parser != nil: dealloc parser
  if temp != nil: dealloc temp
  if e != nil: dealloc e


proc tsv2csv*(csv_file_path: string; separator1: char = '\t'; separator2: char = ','): string {.exportpy.} =
  ## Stream Read TSV to CSV, or any custom format to CSV, simple replace of "," to "\t".
  result = newStringOfCap(int16.high)
  for line in csv_file_path.lines: result.add line.replace(separator1, separator2)


proc diff_csvs*(csv_file_path0, csv_file_path1: string): seq[Item] {.exportpy.} =
  ## Diff 2 CSV files.
  doAssert fileExists(csv_file_path0), "File not found: " & csv_file_path0
  doAssert fileExists(csv_file_path1), "File not found: " & csv_file_path1
  diffText(readFile(csv_file_path0), readFile(csv_file_path1))
