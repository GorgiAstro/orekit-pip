import os
import jcc
from jcc import cpp
import git
import tempfile
import shutil

orekit_py_artifacts_git_url = 'https://github.com/petrushy/orekit_python_artifacts.git'

def clone_orekit_py_artifacts(version):
    """
    :param version: list of size 4, for instance [11, 3, 3, 1] for Orekit version 11.3.3.1
    """
    tag = f"v{version[0]}_{version[1]}_{version[2]}_{version[3]}"
    temp_dir = tempfile.TemporaryDirectory()
    print(f"Cloning git repo {orekit_py_artifacts_git_url}, tag {tag} into temporary directory {temp_dir.name}")
    repo = git.Repo.clone_from(orekit_py_artifacts_git_url,
                               temp_dir.name,
                               branch=tag)
    print("Successfully cloned git repository")
    return temp_dir

"""
for instance [11, 3, 3, 1] for Orekit version 11.3.3.1
Check the release tags of https://github.com/petrushy/orekit_python_artifacts
"""
orekit_version = [12, 0, 1, 2]

n_cpp_files_split = '90' # Number (in string representation) of C++ files to split. Alternatively 'separate' will create a C++ file for each Java class, can be a lot.

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
reserved_keywords = ['INFINITE', 'ERROR', 'OVERFLOW', 'NO_DATA', 'NAN', 'min', 'max', 'mean', 'SNAN','get', 'PASCAL', 'PERCENT']
#classpath = [tools_jar_path]
classpath = []
classes_exclude = ['org.hipparchus.util.RosenNumberPartitionIterator', 'org.orekit.compiler.plugin.DefaultDataContextPlugin']

if __name__ == "__main__":
    if os.path.isdir("build"):
        # First remove existing build folder to start from scratch
        shutil.rmtree("build")
        print("Deleted old ./build folder")

    orekit_py_artifacts_tmp_dir = clone_orekit_py_artifacts(orekit_version)
    jar_folder = orekit_py_artifacts_tmp_dir.name
    py_src_dir = orekit_py_artifacts_tmp_dir.name

    args = [
        jcc.__file__,
        '--use_full_names',
        '--python', 'orekit',
        '--version', f"{orekit_version[0]}.{orekit_version[1]}.{orekit_version[2]}",
        '--wheel'
    ]

    for file in os.listdir(orekit_py_artifacts_tmp_dir.name):
        if file.endswith('.jar'):
            args.extend(['--jar', os.path.join(orekit_py_artifacts_tmp_dir.name, file)])

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

    orekit_py_artifacts_tmp_dir.cleanup()

    print("To compile the Orekit C++ extension and install the Python package locally, run 'pip install .'")
