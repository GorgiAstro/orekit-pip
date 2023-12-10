import os
import jcc
from jcc import cpp

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
#classpath = [tools_jar_path]
classpath = []
classes_exclude = ['org.hipparchus.util.RosenNumberPartitionIterator', 'org.orekit.compiler.plugin.DefaultDataContextPlugin']

if __name__ == "__main__":
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

    if len(classpath) > 0:
        for jar in classpath:
            args.extend(['--classpath', jar])

    args.extend([
        '--extra-setup-arg', 'sdist',
        '--files', n_cpp_files_split,
        '--build'
    ])

    cpp.jcc(args)
