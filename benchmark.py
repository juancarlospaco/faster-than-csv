#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import timeit
import time
import string
import argparse
import csv
import pandas as pd


# Dead abandoned Python2 Lib https://github.com/draftcode/fastcsv
csv_reader = """
data = []
with open('$filename') as csvfile:
    csvreader = csv.reader(csvfile)
    for row in csvreader:
        data.append(row)"""

csv_list = """
data = []
with open('$filename') as csvfile:
    csvreader = csv.reader(csvfile)
    data = list(csvreader)"""

numpy_loadtxt = """
numpy.loadtxt(open('$filename'), delimiter=",", skiprows=1)"""

numpy_genfromtxt = """
numpy.genfromtxt('$filename', delimiter=',', names=True, case_sensitive=True)"""

pandas_read_csv = """
pandas.read_csv('$filename', sep=',').values"""


def run_test(library, filename, repetitions, setup_test, run_test, timer=None):
    TIMER = timeit.default_timer
    if timer and timer.lower() == 'cpu':
        TIMER = time.clock
    run_cmd = string.Template(run_test).substitute(filename=filename)
    setup_cmd = string.Template(setup_test).substitute(filename=filename)
    mytime = timeit.timeit(stmt=run_cmd, setup=setup_cmd, number=repetitions, timer=TIMER)
    print(f"{library.upper()} =\t{round(mytime, 4)}\n")
    result = [library, repetitions, mytime]
    return result


def run_all_benchmarks(filename='', repetitions=1_000, output_file="results.csv", **kwargs):
    results = []
    tests = []
    timer_type = kwargs.get('timer')

    tests.append(('pandas_read_csv', 'import pandas', pandas_read_csv))
    tests.append(('numpy_fromfile', 'import numpy, os, warnings', numpy_genfromtxt))
    tests.append(('numpy_loadtxt', 'import numpy', numpy_loadtxt))
    tests.append(('numpy_genfromtxt', 'import numpy', numpy_genfromtxt))
    tests.append(('csv', 'import csv', csv_reader))
    tests.append(('csv_list', 'import csv', csv_list))
    tests.append(('faster_than_csv', 'import faster_than_csv', "faster_than_csv.csv2list('$filename')"))

    for test in tests:
        my_result = run_test(test[0], filename, repetitions, test[1], test[2], timer=timer_type)
        results.append((test[0], my_result[-1]))

    if output_file:
        with open(output_file, 'w') as csvfile:
            outwriter = csv.writer(csvfile, dialect=csv.excel)
            outwriter.writerow(('library', 'time'))
            for result in results:
                outwriter.writerow(result)
    return


def plot_benchmark_results(in_path="results.csv", output_path="results_graph.png"):
    data = pd.read_csv(in_path)
    chart = data.plot.bar(x='library', y='time', figsize=(10, 4))
    chart.figure.tight_layout()
    chart.figure.savefig(output_path)
    return


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description="Benchmarks for CSV libs")
    parser.add_argument('--filename', metavar='u', type=str, default='sample.csv', help="filename")
    parser.add_argument('--repetitions', metavar='c', type=int, default=1_000, help="Repetitions")
    parser.add_argument('--timer', type=str, default="real", choices=('real','cpu'), help="Timer type: real [default] or cpu")
    args = vars(parser.parse_args())
    assert args.get('filename') is not None, "filename must not be an empty string."
    assert args.get('repetitions') > 100, "Repetitions must be > 100."
    print(args)
    run_all_benchmarks(**args)
    plot_benchmark_results()
