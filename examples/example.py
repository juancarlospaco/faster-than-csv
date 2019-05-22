import faster_than_csv as csv

 print(csv.csv2list("sample.csv"))  # CSV to list of dictionaries.

print(csv.csv2dict("sample.csv"))  # CSV to list of dictionaries.

print(csv.csv2json("sample.csv"))  # CSV to list of JSON.

print(csv.csv2json_pretty("sample.csv"))  # CSV to list of JSON Pretty-Printed.

print(csv.csv2ndjson("sample.csv", "sample.ndjson",))  # CSV to NDJSON.

print(csv.csv2htmltable("sample.csv"))  # CSV to HTML Table.

print(csv.csv2htmlfile("sample.csv", "sample.html"))  # CSV to HTML Table.

print(csv.csv2tsv("sample.csv"))  # CSV to TSV.

print(csv.csv2custom("sample.csv", "|"))  # CSV to Custom Separator (no  separator colission).

# print(csv.custom2csv("sample.csv", "|"))  # Custom Separator to CSV (no  separator colission).

# print(csv.tsv2csv("sample.csv"))  # TSV to CSV.
