#!/usr/bin/env python3
# -*- coding: utf-8 -*-

from setuptools import Extension
from setuptools import setup


sources = """faster_than_csv_faster_than_csv.c
nimpy_py_utils.c
stdlib_dynlib.c
stdlib_macros.c
stdlib_parsecsv.c
stdlib_streams.c
stdlib_tables.c
nimpy_nimpy.c
stdlib_algorithm.c
stdlib_hashes.c
stdlib_math.c
stdlib_parsejson.c
stdlib_strscans.c
stdlib_typetraits.c
nimpy_py_lib.c
stdlib_bitops.c
stdlib_json.c
stdlib_options.c
stdlib_parseutils.c
stdlib_strutils.c
stdlib_unicode.c
nimpy_py_types.c
stdlib_complex.c
stdlib_lexbase.c
stdlib_ospaths.c
stdlib_sequtils.c
stdlib_system.c""".splitlines()


setup(
    ext_modules = [
        Extension(
            name               = "faster_than_csv",
            sources            = sources,
            extra_compile_args = ["-flto", "-ffast-math", "-march=native", "-O3"],
            extra_link_args    = ["-flto", "-ffast-math", "-march=native", "-O3"],
            include_dirs       = ["."],
        )
    ]
)
