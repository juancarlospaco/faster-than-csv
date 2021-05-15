rm --verbose --force dist/*.zip
rm --verbose --force --recursive dist/faster_than_csv/
rm --verbose --force --recursive dist/faster_than_csv/__pycache__/
rm --verbose --force --recursive faster_than_csv/htmldocs/
cp --verbose --recursive faster_than_csv dist/
python setup.py sdist bdist_wheel
cd dist && zip -9 -T -v -r faster_than_csv.zip *
