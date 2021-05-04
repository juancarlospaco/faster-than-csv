import faster_than_csv as csv

print(csv.csv2list("sample.csv"))  # CSV to list of dictionaries.

print(csv.csv2dict("sample.csv"))  # CSV to list of dictionaries.

csv.csv2ndjson("sample.csv", "other.ndjson")  # CSV to NDJSON.

print(csv.csv2htmltable("sample.csv"))  # CSV to HTML Table.

print(csv.tsv2csv("sample.csv"))  # TSV to CSV.
