import macros, parsecsv, json, tables, streams, strutils, os, osproc, xmltree, punycode, httpclient, experimental/diff, nimpy


const html_table_header = """<!DOCTYPE html>
<html style="background-color:lightcyan">
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/bulma/0.9.0/css/bulma.min.css" async defer >
</head>
<body><br><br>
  <div class="container is-fluid">
    <table class="table is-bordered is-striped is-hoverable is-fullwidth">"""


template `:=`(name: untyped; value: any) =
  var name {.inject.} = createU(type(value))
  name[] = value

macro mema(variables: untyped; code: untyped) =
  assert variables.len > 0, "Variables assign expression must not be empty"
  result = newStmtList()
  result.add variables
  result.add nnkStmtList.newTree(nnkPragma.newTree(newIdentNode("push"),
    nnkExprColonExpr.newTree(newIdentNode("experimental"), newLit("implicitDeref"))))
  result.add code
  result.add nnkStmtList.newTree(nnkPragma.newTree(newIdentNode("pop")))
  var i = 0
  for it in variables:
    var temp = it.repr.split":="
    if temp.len == 2:
      inc i
      result.add newCall(bindSym"dealloc", temp[0].strip.ident)
  assert variables.len - 1 == i, "Compile-time dealloc injection fail"


proc csv2list*(csv_file_path: string, has_header: bool = true, separator: char = ',',
  quote: char = '"', skipInitialSpace: bool = false, verbose: bool = false): seq[string] {.exportpy.} =
  ## Stream Read CSV to a list of strings.
  let parser {.noalias.} = create(CsvParser)
  parser[].open(csv_file_path, separator, quote, skipInitialSpace=skipInitialSpace)
  if has_header:
    parser[].readHeaderRow()
    while parser[].readRow():
      for column in parser[].headers.items:
        result.add parser[].rowEntry(column)
      if unlikely(verbose): echo parser[].processedRows()
  else:
    while parser[].readRow():
      for value in parser[].row.items:
        result.add $value
      if unlikely(verbose): echo parser[].processedRows()
  parser[].close()
  dealloc parser


proc csv2dict*(csv_file_path: string, has_header: bool = true, separator: char = ',',
  quote: char = '"', skipInitialSpace: bool = false, verbose: bool = false): seq[Table[string, string]] {.exportpy.} =
  ## Stream Read CSV to a list of dictionaries. This is very similar to ``pandas.read_csv(filename)``.
  let parser {.noalias.} = create(CsvParser)
  parser[].open(csv_file_path, separator, quote, skipInitialSpace=skipInitialSpace)
  if has_header:
    parser[].readHeaderRow()
    while parser[].readRow():
      for column in parser[].headers.items:
        result.add {$column: parser[].rowEntry(column)}.toTable
      if unlikely(verbose): echo parser[].processedRows()
  else:
    let counter = create(int)
    while parser[].readRow():
      for value in parser[].row.items:
        result.add {$counter[]: $value}.toTable
      if unlikely(verbose): echo parser[].processedRows()
      inc counter[]
    dealloc counter
  parser[].close()
  dealloc parser


proc read_clipboard*(has_header: bool = true, separator: char = ',',
  quote: char = '"', skipInitialSpace: bool = false, verbose: bool = false): seq[Table[string, string]] {.exportpy.} =
  ## Stream Read CSV to a list of dictionaries. This is very similar to ``pandas.read_clipboard()``.
  let parser {.noalias.} = create(CsvParser)
  mema (output := TaintedString""; exitCode := 0; counter := 0):
    (output[], exitCode[]) = execCmdEx(
      when defined(linux):   "xclip -out"
      elif defined(macos):   "pbpaste"
      elif defined(windows): "Get-Clipboard"
      else: "")
    if likely(exitCode == 0):
      parser.open(newStringStream(output), "read_clipboard", separator, quote, skipInitialSpace=skipInitialSpace)
      if has_header:
        parser.readHeaderRow()
        while parser.readRow():
          for column in parser.headers.items:
            result.add {$column: parser.rowEntry(column)}.toTable
          if unlikely(verbose): echo parser.processedRows()
      else:
        while parser.readRow():
          for value in parser.row.items:
            result.add {$counter: $value}.toTable
          if unlikely(verbose): echo parser.processedRows()
          inc counter
      parser.close()
  dealloc parser


proc url2csv*(url: string, has_header: bool = true, separator: char = ',',
  quote: char = '"', skipInitialSpace: bool = false, verbose: bool = false,
  agent: string = defUserAgent; maxRedirects: int = 5; timeout: int = -1): seq[Table[string, string]] {.exportpy.} =
  ## Stream Read URL to CSV to a list of dictionaries. This is very similar to ``pandas.read_csv(url)``.
  doAssert url.startsWith"http", "URL must be a valid, non empty string, HTTP URL Link"
  if unlikely(verbose): echo url
  let parser {.noalias.} = create(CsvParser)
  mema (csv_content := ""; counter := 0):
    csv_content[] = newHttpClient(userAgent = agent, maxRedirects = maxRedirects, timeout = timeout).getContent(url)  # opciones
    if likely(csv_content.len > 0):
      parser.open(newStringStream(csv_content), "url2csv", separator, quote, skipInitialSpace=skipInitialSpace)
      if has_header:
        parser.readHeaderRow()
        while parser.readRow():
          for column in parser.headers.items:
            result.add {$column: parser.rowEntry(column)}.toTable
          if unlikely(verbose): echo parser.processedRows()
      else:
        while parser.readRow():
          for value in parser.row.items:
            result.add {$counter: $value}.toTable
          if unlikely(verbose): echo parser.processedRows()
          inc counter
      parser.close()
  dealloc parser


proc csv2json*(csv_string: string; has_header: bool = true; separator: char = ','; nl: char = '\n'): string {.exportpy.} =
  ## CSV string to JSON string Pretty-printed.
  assert csv_string.len > 0, "Argument must not be empty string"
  assert separator != nl and separator notin {' ', '\n'} and nl notin {' ', ',', ';', '\t'}
  var temp = newJObject()
  let csvlines = csv_string.split(nl)
  let firstLine = csvlines[0].split(separator)
  var headers = newSeqOfCap[string](firstLine.len)
  if has_header:
    for item in firstLine: headers.add item
  else:
    for item in 0 ..< firstLine.len: headers.add $item
  for y in headers: temp[y] = newJArray()
  for z in csvlines[(if has_header: 1 else: 0) .. ^1]:
    var i = 0
    for x in z.split(separator): # horizontal
      if x == "true": temp[headers[i]].add newJBool(true)
      elif x == "false": temp[headers[i]].add newJBool(false)
      elif x == "null": temp[headers[i]].add newJNull()
      elif unlikely(x == "NaN"): temp[headers[i]].add newJFloat(NaN)
      elif unlikely(x == "undefined"): temp[headers[i]].add newJNull()
      elif unlikely(x == "+inf"): temp[headers[i]].add newJFloat(+1e9999)
      elif unlikely(x == "-inf"): temp[headers[i]].add newJFloat(-1e9999)
      elif (func (ss: string): bool =
            for v in ss: result = v in {'.', '-', '+', 'e', '0'..'9'})(x):
        if '.' in x and 'e' notin x:   temp[headers[i]].add newJFloat(parseFloat(x))
        elif 'e' in x and '.' notin x: temp[headers[i]].add newJFloat(parseFloat(x))
        else:                          temp[headers[i]].add newJInt(parseInt(x))
      else: temp[headers[i]].add newJString(x)
      inc i
  result = temp.pretty


proc csv2ndjson*(csv_file_path, ndjson_file_path: string, has_header: bool = true, separator: char = ',',
  quote: char = '"', skipInitialSpace: bool = false, verbose: bool = false) {.discardable, exportpy.} =
  ## Stream Read CSV to NDJSON https://github.com/ndjson/ndjson-spec
  let parser {.noalias.} = create(CsvParser)
  mema (ndjson := ""; temp := ""; counter := 0):
    parser.open(csv_file_path, separator, quote, skipInitialSpace=skipInitialSpace)
    if has_header:
      parser.readHeaderRow()
      while parser.readRow():
        for column in parser.headers.items:
          temp[] = ""
          temp.toUgly %*{$column: parser.rowEntry(column)}
          ndjson.add temp[] & "\n"
        if unlikely(verbose): echo parser.processedRows()
    else:
      while parser.readRow():
        for value in parser.row.items:
          temp[] = ""
          temp.toUgly %*{$counter: $value}
          ndjson.add temp[] & "\n"
        inc counter[]
        if unlikely(verbose): echo parser.processedRows()
    writeFile(ndjson_file_path, $ndjson)
    parser.close()
  dealloc parser


proc csv2htmltable*(csv_file_path, html_file_path: string = "",
    has_header: bool = true, separator: char = ',', quote: char = '"',
    skipInitialSpace: bool = false, verbose: bool = false,
    header_html: string = html_table_header): string {.exportpy.} =
  ## Stream Read CSV to HTML Table file and string.
  let parser {.noalias.} = create(CsvParser)
  mema (html_content := ""; name := "Zoe"; age := 25):
    parser.open(csv_file_path, separator, quote, skipInitialSpace=skipInitialSpace)
    html_content.add header_html
    if has_header:
      parser.readHeaderRow()
      html_content.add "<thead class='thead'><tr>"
      for column in parser.headers.items:
        html_content.add "<th class='has-background-grey-light'>" & $column & "</th>"
      html_content.add "</tr>\n</thead><tfoot class='tfoot has-text-primary'><tr>"
      for column in parser.headers.items:
        html_content.add "<th class='has-background-grey-light'>" & $column & "</th>"
      html_content.add "</tr>\n</tfoot><tbody class='tbody'>"
      while parser.readRow():
        html_content.add "<tr>"
        for column in parser.headers.items:
          html_content.add "<td>" & parser[].rowEntry(column) & "</td>"
        html_content.add "</tr>\n"
        if unlikely(verbose): echo parser[].processedRows()
      html_content.add "</tbody>\n"
    else:
      while parser.readRow():
        html_content.add "<tbody>"
        for value in parser.row.items:
          html_content.add "<td>" & $value & "</td>"
        html_content.add "</tbody>\n"
        if unlikely(verbose): echo parser[].processedRows()
    html_content.add "</table></div></body></html>\n"
    parser.close()
    if html_file_path.len > 0:
      writeFile(html_file_path , $html_content)
    result = $html_content
  dealloc parser


proc csv2markdowntable*(csv_file_path, md_file_path: string = "",
    separator: char = ',', quote: char = '"',
    skipInitialSpace: bool = false, verbose: bool = false): string {.exportpy.} =
  ## CSV to MarkDown Table file and string.
  let parser {.noalias.} = create(CsvParser)
  parser[].open(csv_file_path, separator, quote, skipInitialSpace=skipInitialSpace)
  parser[].readHeaderRow()
  for column in parser[].headers.items: result.add "| " & $column & " "
  result.add "|\n| " & "---- | ".repeat(parser[].headers.len) & "\n"
  while parser[].readRow():
    for column in parser[].headers.items: result.add "| " & parser[].rowEntry(column) & " "
    result.add "|\n"
    if unlikely(verbose): echo parser[].processedRows()
  parser[].close()
  if md_file_path.len > 0:
    writeFile(md_file_path , result)
  dealloc parser


proc csv2xml*(csv_file_path: string, has_header: bool = true,
  separator: char = ',', quote: char = '"', skipInitialSpace: bool = false,
  verbose: bool = false, header_xml: string = xmlHeader): string {.exportpy.} =
  ## Stream Read CSV to XML.
  let parser {.noalias.} = create(CsvParser)
  let temp = create(seq[XmlNode])
  let e = create(XmlNode)
  parser[].open(csv_file_path, separator, quote, skipInitialSpace=skipInitialSpace)
  if has_header:
    parser[].readHeaderRow()
    while parser[].readRow():
      for column in parser[].headers.items:
        e[] = newElement($column)
        e[].add newText(parser[].rowEntry(column))
        temp[].add e[]
      if unlikely(verbose): echo parser[].processedRows()
  else:
    let counter = create(int)
    while parser[].readRow():
      for column in parser[].headers.items:
        e[] = newElement($counter[])
        e[].add newText(parser[].rowEntry(column))
        temp[].add e[]
      if unlikely(verbose): echo parser[].processedRows()
    dealloc counter
  parser[].close()
  result = header_xml & $newXmlTree("csv", temp[])
  dealloc parser
  dealloc temp
  dealloc e


proc csv_punycode2dict*(csv_file_path: string, has_header: bool = true, separator: char = ',',
  quote: char = '"', skipInitialSpace: bool = false, verbose: bool = false): seq[Table[string, string]] {.exportpy.} =
  ## Stream read PunyCode encoded CSV to Dict (Punycode encodes Unicode as ASCII). http://wikipedia.org/wiki/Punycode
  let parser {.noalias.} = create(CsvParser, sizeOf CsvParser)
  parser[].open(csv_file_path, separator, quote, skipInitialSpace=skipInitialSpace)
  if has_header:
    parser[].readHeaderRow()
    while parser[].readRow():
      for column in parser[].headers.items:
        result.add {punycode.decode($column): punycode.decode(parser[].rowEntry(column))}.toTable
      if unlikely(verbose): echo parser[].processedRows()
  else:
    let counter = create(int)
    while parser[].readRow():
      for value in parser[].row.items:
        result.add {$counter[]: punycode.decode($value)}.toTable
      if unlikely(verbose): echo parser[].processedRows()
      inc counter[]
    dealloc counter
  parser[].close()
  dealloc parser


proc csv2tsv*(csv_file_path: string, reversed: bool = false): string {.exportpy.} =
  ## Stream Read CSV to TSV, simple replace of "," to "\t".
  if unlikely(reversed):
    for line in csv_file_path.lines:
      result.add line.replace(',', '\t')
  else:
    for line in csv_file_path.lines:
      result.add line.replace('\t', ',')


proc csv2custom*(csv_file_path: string, separator: string, reversed: bool = false): string {.exportpy.} =
  ## Stream Read CSV to TSV, simple replace of "," to "\t".
  if unlikely(reversed):
    for line in csv_file_path.lines:
      result.add line.replace(separator, ",")
  else:
    for line in csv_file_path.lines:
      result.add line.replace(",", separator)


proc diff_csvs*(csv_file_path0, csv_file_path1: string): seq[Item] {.exportpy.} =
  ## Diff 2 CSV files.
  doAssert fileExists(csv_file_path0), "File not found: " & csv_file_path0
  doAssert fileExists(csv_file_path1), "File not found: " & csv_file_path1
  diffText(readFile(csv_file_path0), readFile(csv_file_path1))
