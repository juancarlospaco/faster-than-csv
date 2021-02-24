from faster_than_csv import *

echo = print
path = "covid.csv"
with open(path) as f:
  contents = f.read()

echo(csv2dict(path))

echo(csv2list(path, columns = 10, rows = 53590))

csv2ndjson(path, "out.ndjson")

csv2htmltable(path, "out.html")

csv2markdowntable(path, "out.md")

echo(csv2karax(path))

echo(csv2xml(path))

# csv2terminal(path, 80)
