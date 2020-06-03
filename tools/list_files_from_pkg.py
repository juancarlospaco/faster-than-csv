from importlib.metadata import distribution
from pprint import pprint
pprint(distribution("faster-than-csv").files)
