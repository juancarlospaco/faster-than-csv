#!/bin/bash
nim compileToC --compileOnly -d:release -d:ssl --app:lib --opt:speed --gc:markAndSweep --nimcache:. --out:faster_than_csv.so src/faster_than_csv.nim

cp --verbose --force ~/.choosenim/toolchains/nim-0.19.6/lib/nimbase.h nimbase.h

rm --verbose --force faster_than_csv.json
