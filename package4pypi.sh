rm --verbose --force dist/*.zip
rm --verbose --force --recursive dist/faster_than_csv/
rm --verbose --force --recursive dist/faster_than_csv/__pycache__/
cp --verbose --recursive faster_than_csv dist/
cd dist && zip -9 -T -v -r faster_than_csv.zip *
