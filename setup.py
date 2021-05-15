import setuptools

with open('README.md') as readme_file:
    readme = readme_file.read()

setuptools.setup(
    long_description=readme,
    long_description_content_type="text/markdown",
    name="faster_than_csv",
    author="Juan_Carlos.nim",
    download_url="https://github.com/juancarlospaco",
    author_email="UNKNOWN",
    url="https://github.com/juancarlospaco/faster-than-csv",
    project_urls={
      'Homepage': 'https://nim-lang.org',
      'For Python Devs': 'https://github.com/nim-lang/Nim/wiki/Nim-for-Python-Programmers',
      'For TypeScript Devs': 'https://github.com/nim-lang/Nim/wiki/Nim-for-TypeScript-Programmers',
      'Forum': 'https://nim-lang.org',
      'Twitter': 'https://twitter.com/nim_lang',
      'Reddit': 'https://reddit.com/r/nim',
      'StackOverflow': 'https://stackoverflow.com/questions/tagged/nim-lang',
      'Discord': 'https://discord.gg/ezDFDw2',
      'Telegram': 'https://t.me/nim_lang',
      'Matrix': 'https://matrix.to/#/#freenode_#nim:matrix.org',
      'Argentina Chat Spanish': 'https://t.me/NimArgentina',
      'Dev Documentation Index': 'https://nim-lang.github.io/Nim/theindex.html',
      'Tutorial': 'https://nim-lang.github.io/Nim/tut1.html',
    },
    platforms=['Linux', 'Windows', 'Darwin'],
    package_data={"": ["*.nim", "*.nims", "*.cfg", "*.dll", "*.so", "*.h", "*.hpp"]},
)
