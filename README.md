# orekit-pip

This is an attempt at providing the [Orekit Python Wrapper](https://gitlab.orekit.org/orekit-labs/python-wrapper/-/wikis/home) on PyPi.

## Requirements

* A C++ compiler
* `pip`

## Installation

Local installation: `pip install .`

## Limitations

* The `org.orekit.compiler.plugin.DefaultDataContextPlugin` class is excluded, because it requires `JAVA_HOME/../lib/tools.jar`, which is not always available: https://www.orekit.org/site-orekit-development/apidocs/org/orekit/compiler/plugin/DefaultDataContextPlugin.html