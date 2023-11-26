#!/usr/bin/env python
# This setup is was created with Apache JCC 3.13 on 2023-11-26 17:08:56
from setuptools import setup, Extension


import jdk
from pathlib import Path
import os

def search_jdk_tools_jar(jdk_dir: str):
    """
    Checks that the folder exists and that it contains tools.jar
    """
    if os.path.exists(jdk_dir):
        for path in Path(jdk_dir).rglob('*.jar'):
            if path.name == 'tools.jar':
                return path
    return None

_USER_DIR = os.path.expanduser("~")
jdk_root_dir = os.path.join(_USER_DIR, ".jdk")

def locate_or_download_jdk_tools():
    """
    With search for a JDK folder in $HOME/.jdk containing tools.jar.
    If it is not found, it will download JDK 8 in this folder.
    :return: str, path to tools.jar if successful, None otherwise.
    """
    jdk_version = '8'

    jdk_dir = os.path.join(jdk_root_dir, f'jdk-{jdk_version}')
    # Look for tools.jar
    tools_jar_path = search_jdk_tools_jar(jdk_dir=jdk_dir)

    if tools_jar_path is not None:
        print(f'Successfully found {tools_jar_path}')
    else:
        print(f'the file tools.jar was not found in JDK directory {jdk_dir}, or the JDK directory does not exist yet, downloading')
        jdk_dir = jdk.install(jdk_version)
        tools_jar_path = search_jdk_tools_jar(jdk_dir=jdk_dir)

    if tools_jar_path is None:
        print(f'the file tools.jar was still not found in JDK directory {jdk_dir}, exiting')

    return tools_jar_path.absolute().as_posix()

tools_jar_path = locate_or_download_jdk_tools()

import os
import jcc

orekit_version = '12.0'
jar_folder = '/media/ssd/git/orekit_python_artifacts'
hipparchus_version = '3.0'
rugged_version = '3.0'
py_src_dir = '/media/ssd/git/orekit_python_artifacts' # pure Python additions, for instance pyhelpers.py
n_cpp_files_split = '99' # Number (in string representation) of C++ files to split. Alternatively 'separate' will create a C++ file for each Java class, can be a lot.

hipparchus_modules = ['core', 'fitting', 'filtering', 'geometry', 'ode', 'optim', 'stat']
packages = ['java.io', 'java.util', 'java.text', 'org.orekit', 'org.orekit.rugged']
vanilla_java_classes = [
    'java.io.BufferedReader',
    'java.io.FileInputStream',
    'java.io.FileOutputStream',
    'java.io.InputStream',
    'java.io.InputStreamReader',
    'java.io.ObjectInputStream',
    'java.io.ObjectOutputStream',
    'java.io.PrintStream',
    'java.io.StringReader',
    'java.io.StringWriter',
    'java.lang.System',
    'java.text.DecimalFormat',
    'java.text.DecimalFormatSymbols',
    'java.util.ArrayDeque',
    'java.util.ArrayList',
    'java.util.Arrays',
    'java.util.Collection',
    'java.util.Collections',
    'java.util.Date',
    'java.util.HashMap',
    'java.util.HashSet',
    'java.util.List',
    'java.util.Locale',
    'java.util.Map',
    'java.util.Set',
    'java.util.TreeSet',
    'java.util.stream.Collectors',
    'java.util.stream.Stream',
    'java.util.stream.DoubleStream',
    'java.util.function.LongConsumer',
    'java.util.function.IntConsumer',
    'java.util.function.DoubleConsumer',
    'java.util.function.Supplier',
]
py_src_files = ['pyhelpers.py']
reserved_keywords = ['INFINITE', 'ERROR', 'OVERFLOW', 'NO_DATA', 'NAN', 'min', 'max', 'mean', 'SNAN','get']
classpath = [tools_jar_path]
classes_exclude = ['org.hipparchus.util.RosenNumberPartitionIterator']

args = [
    jcc.__file__,
    '--use_full_names',
    '--python', 'orekit',
    '--version', orekit_version,
    '--wheel'
]

args.extend(['--jar', os.path.join(jar_folder, f'orekit-{orekit_version}.jar')])

for hipparchus_module in hipparchus_modules:
    args.extend(['--jar', os.path.join(jar_folder, f'hipparchus-{hipparchus_module}-{hipparchus_version}.jar')])

args.extend(['--jar', os.path.join(jar_folder, f'rugged-{rugged_version}.jar')])

for package in packages:
    args.extend(['--package', package])

for java_class in vanilla_java_classes:
    args.append(java_class)

for py_src_file in py_src_files:
    args.extend(['--module', os.path.join(py_src_dir, py_src_file)])

for keyword in reserved_keywords:
    args.extend(['--reserved', keyword])

for class_to_exclude in classes_exclude:
    args.extend(['--exclude', class_to_exclude])

for jar in classpath:
    args.extend(['--classpath', jar])

args.extend([
    '--extra-setup-arg', 'sdist',
    '--files', n_cpp_files_split,
    '--build',
    '--install'
])

from jcc import cpp
setup_args = cpp.jcc(args)
print(setup_args)

setup(setup_args)
