# orekit-pip

This is an attempt at providing the [Orekit Python Wrapper](https://gitlab.orekit.org/orekit-labs/python-wrapper/-/wikis/home) on PyPi.

## Requirements

* A C++ compiler
* `pip`

## Installation

Local installation: `pip install .`. This can take a couple of minutes because it single-threadingly compiles the Orekit C++ bindings.

## Code generation

This doesn't need to be done by the normal user, it is mostly done by the package publishers when a new version of Orekit is available for example.

This calls `jcc` to generate Orekit's C++ bindings and the `setup.py` script which configures the compilation of the Orekit C++ extension.

## Limitations

* The `org.orekit.compiler.plugin.DefaultDataContextPlugin` class is excluded, because it requires `JAVA_HOME/../lib/tools.jar`, which is not always available. But this plugin should not be needed by Orekit Python users: https://www.orekit.org/site-orekit-development/apidocs/org/orekit/compiler/plugin/DefaultDataContextPlugin.html
