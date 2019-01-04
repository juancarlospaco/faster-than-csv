#!/usr/bin/env python3
# -*- coding: utf-8 -*-

from setuptools import Extension
from setuptools import setup


sources = """
""".splitlines()


setup(
    ext_modules = [
        Extension(
            name               = "faster_than_requests",
            sources            = sources,
            extra_compile_args = ["-flto", "-ffast-math", "-march=native", "-O3"],
            extra_link_args    = ["-flto", "-ffast-math", "-march=native", "-O3"],
            include_dirs       = ["."],
        )
    ]
)
