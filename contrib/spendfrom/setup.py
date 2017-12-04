from distutils.core import setup
setup(name='utbspendfrom',
      version='1.0',
      description='Command-line utility for sagbit "coin control"',
      author='Gavin Andresen',
      author_email='gavin@sagbitfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
