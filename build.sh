#!/bin/bash
nim compileToC --compileOnly -d:release -d:danger --app:lib --opt:speed --gc:markAndSweep --listFullPaths:off --excessiveStackTrace:off --nimcache:. --out:faster_than_csv.so src/faster_than_csv.nim

cp --verbose --force ~/.choosenim/toolchains/nim-1.0.4/lib/nimbase.h nimbase.h

rm --verbose --force faster_than_csv.json
