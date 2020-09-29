import parsecsv, json, tables, streams, strutils, os, osproc, xmltree, punycode, httpclient, experimental/diff, nimpy


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


proc csv2list*(csv_file_path: string, has_header: bool = true, separator: char = ',',
  quote: char = '"', skipInitialSpace: bool = false, verbose: bool = false): seq[string] {.exportpy.} =
  ## Stream Read CSV to a list of strings.
  let parser {.noalias.} = create(CsvParser, sizeOf CsvParser)
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
  let parser {.noalias.} = create(CsvParser, sizeOf CsvParser)
  parser[].open(csv_file_path, separator, quote, skipInitialSpace=skipInitialSpace)
  if has_header:
    parser[].readHeaderRow()
    while parser[].readRow():
      for column in parser[].headers.items:
        result.add {$column: parser[].rowEntry(column)}.toTable
      if unlikely(verbose): echo parser[].processedRows()
  else:
    let counter = create(int, sizeOf int)
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
  let output = create(string, sizeOf string)
  let exitCode = create(int, sizeOf int)
  (output[], exitCode[]) = execCmdEx(
    when defined(linux):   "xclip -out"
    elif defined(macos):   "pbpaste"
    elif defined(windows): "Get-Clipboard"
    else: "")
  if likely(exitCode[] == 0):
    let parser {.noalias.} = create(CsvParser, sizeOf CsvParser)
    parser[].open(newStringStream(output[]), "read_clipboard", separator, quote, skipInitialSpace=skipInitialSpace)
    if has_header:
      parser[].readHeaderRow()
      while parser[].readRow():
        for column in parser[].headers.items:
          result.add {$column: parser[].rowEntry(column)}.toTable
        if unlikely(verbose): echo parser[].processedRows()
    else:
      let counter = create(int, sizeOf int)
      while parser[].readRow():
        for value in parser[].row.items:
          result.add {$counter[]: $value}.toTable
        if unlikely(verbose): echo parser[].processedRows()
        inc counter[]
      dealloc counter
    parser[].close()
    dealloc parser
  dealloc output
  dealloc exitCode


proc url2csv*(url: string, has_header: bool = true, separator: char = ',',
  quote: char = '"', skipInitialSpace: bool = false, verbose: bool = false,
  agent: string = defUserAgent; maxRedirects: int = 5; timeout: int = -1): seq[Table[string, string]] {.exportpy.} =
  ## Stream Read URL to CSV to a list of dictionaries. This is very similar to ``pandas.read_csv(url)``.
  doAssert url.startsWith"http", "URL must be a valid, non empty string, HTTP URL Link"
  if unlikely(verbose): echo url
  let csv_content = create(string, sizeOf string)
  csv_content[] = newHttpClient(userAgent = agent, maxRedirects = maxRedirects, timeout = timeout).getContent(url)  # opciones
  if likely(csv_content[].len > 0):
    let parser {.noalias.} = create(CsvParser, sizeOf CsvParser)
    parser[].open(newStringStream(csv_content[]), "url2csv", separator, quote, skipInitialSpace=skipInitialSpace)
    if has_header:
      parser[].readHeaderRow()
      while parser[].readRow():
        for column in parser[].headers.items:
          result.add {$column: parser[].rowEntry(column)}.toTable
        if unlikely(verbose): echo parser[].processedRows()
    else:
      let counter = create(int, sizeOf int)
      while parser[].readRow():
        for value in parser[].row.items:
          result.add {$counter[]: $value}.toTable
        if unlikely(verbose): echo parser[].processedRows()
        inc counter[]
      dealloc counter
    parser[].close()
    dealloc parser
  dealloc csv_content


proc csv2json*(csv_file_path: string, has_header: bool = true,
  separator: char = ',', quote: char = '"', skipInitialSpace: bool = false,
  verbose: bool = false, indentation: Natural = 0): seq[string] {.exportpy.} =
  ## Stream Read CSV to JSON, Pretty-printed or Minified.
  let parser {.noalias.} = create(CsvParser, sizeOf CsvParser)
  let temp = create(string, sizeOf string)
  parser[].open(csv_file_path, separator, quote, skipInitialSpace=skipInitialSpace)
  if has_header:
    parser[].readHeaderRow()
    while parser[].readRow():
      if unlikely(indentation != 0):
        for column in parser[].headers.items:
          result.add json.pretty(%*{$column: parser[].rowEntry(column)}, indentation)
      else:
        for column in parser[].headers.items:
          temp[] = ""
          temp[].toUgly %*{$column: parser[].rowEntry(column)}
          result.add temp[]
      if unlikely(verbose): echo parser[].processedRows()
  else:
    let counter = create(int, sizeOf int)
    while parser[].readRow():
      if unlikely(indentation != 0):
        for value in parser[].row.items:
          result.add json.pretty(%*{$counter[]: $value}, indentation)
      else:
        let temp = create(string, sizeOf string)
        for value in parser[].row.items:
          temp[] = ""
          temp[].toUgly %*{$counter[]: $value}
          result.add temp[]
      inc counter[]
      if unlikely(verbose): echo parser[].processedRows()
    dealloc counter
  parser[].close()
  dealloc temp
  dealloc parser


proc csv2ndjson*(csv_file_path, ndjson_file_path: string, has_header: bool = true, separator: char = ',',
  quote: char = '"', skipInitialSpace: bool = false, verbose: bool = false) {.discardable, exportpy.} =
  ## Stream Read CSV to NDJSON https://github.com/ndjson/ndjson-spec
  let parser {.noalias.} = create(CsvParser, sizeOf CsvParser)
  let ndjson = create(string, sizeOf string)
  let temp = create(string, sizeOf string)
  parser[].open(csv_file_path, separator, quote, skipInitialSpace=skipInitialSpace)
  if has_header:
    parser[].readHeaderRow()
    while parser[].readRow():
      for column in parser[].headers.items:
        temp[] = ""
        temp[].toUgly %*{$column: parser[].rowEntry(column)}
        ndjson[].add temp[] & "\n"
      if unlikely(verbose): echo parser[].processedRows()
  else:
    let counter = create(int, sizeOf int)
    while parser[].readRow():
      for value in parser[].row.items:
        temp[] = ""
        temp[].toUgly %*{$counter[]: $value}
        ndjson[].add temp[] & "\n"
      inc counter[]
      if unlikely(verbose): echo parser[].processedRows()
    dealloc counter
  writeFile(ndjson_file_path, ndjson[])
  parser[].close()
  dealloc temp
  dealloc ndjson
  dealloc parser


proc csv2htmltable*(csv_file_path, html_file_path: string = "",
    has_header: bool = true, separator: char = ',', quote: char = '"',
    skipInitialSpace: bool = false, verbose: bool = false,
    header_html: string = html_table_header): string {.exportpy.} =
  ## Stream Read CSV to HTML Table file and string.
  let parser {.noalias.} = create(CsvParser, sizeOf CsvParser)
  let html_content = create(string, sizeOf string)
  parser[].open(csv_file_path, separator, quote, skipInitialSpace=skipInitialSpace)
  html_content[].add header_html
  if has_header:
    parser[].readHeaderRow()
    html_content[].add "<thead class='thead'><tr>"
    for column in parser[].headers.items:
      html_content[].add "<th class='has-background-grey-light'>" & $column & "</th>"
    html_content[].add "</tr>\n</thead><tfoot class='tfoot has-text-primary'><tr>"
    for column in parser[].headers.items:
      html_content[].add "<th class='has-background-grey-light'>" & $column & "</th>"
    html_content[].add "</tr>\n</tfoot><tbody class='tbody'>"
    while parser[].readRow():
      html_content[].add "<tr>"
      for column in parser[].headers.items:
        html_content[].add "<td>" & parser[].rowEntry(column) & "</td>"
      html_content[].add "</tr>\n"
      if unlikely(verbose): echo parser[].processedRows()
    html_content[].add "</tbody>\n"
  else:
    while parser[].readRow():
      html_content[].add "<tbody>"
      for value in parser[].row.items:
        html_content[].add "<td>" & $value & "</td>"
      html_content[].add "</tbody>\n"
      if unlikely(verbose): echo parser[].processedRows()
  html_content[].add "</table></div></body></html>\n"
  parser[].close()
  if html_file_path.len > 0:
    writeFile(html_file_path , html_content[])
  result = html_content[]
  dealloc html_content
  dealloc parser


proc csv2markdowntable*(csv_file_path, md_file_path: string = "",
    separator: char = ',', quote: char = '"',
    skipInitialSpace: bool = false, verbose: bool = false): string {.exportpy.} =
  ## CSV to MarkDown Table file and string.
  let parser {.noalias.} = create(CsvParser, sizeOf CsvParser)
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
  let parser {.noalias.} = create(CsvParser, sizeOf CsvParser)
  let temp = create(seq[XmlNode], sizeOf seq[XmlNode])
  let e = create(XmlNode, sizeOf XmlNode)
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
    let counter = create(int, sizeOf int)
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
    let counter = create(int, sizeOf int)
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
