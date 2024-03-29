#!/usr/bin/env python
# This setup is was created with Apache JCC 3.13 on 2024-02-01 16:26:24
from setuptools import setup, Extension
from pathlib import Path
from jcc import config as jcc_conf
import jcc

setup(
name='orekit',
packages=['orekit'],
package_dir={'orekit': 'build/orekit'},
package_data={'orekit': ['hipparchus-optim-3.0.jar', 'rugged-3.0.jar', 'hipparchus-stat-3.0.jar', 'hipparchus-filtering-3.0.jar', 'rugged-3.0-python-wrapper.jar', 'hipparchus-ode-3.0.jar', 'hipparchus-fitting-3.0.jar', 'orekit-12.0.1-python-wrapper.jar', 'orekit-12.0.1.jar', 'hipparchus-geometry-3.0.jar', 'hipparchus-core-3.0.jar']},
ext_modules=[
    Extension(
        py_limited_api=False,
        name='orekit._orekit',
        sources=['build/_orekit/functions.cpp', 'build/_orekit/JArray.cpp', 'build/_orekit/jcc.cpp', 'build/_orekit/JCCEnv.cpp', 'build/_orekit/JObject.cpp', 'build/_orekit/orekit.cpp', 'build/_orekit/types.cpp', 'build/_orekit/__init__.cpp', 'build/_orekit/__wrap01__.cpp', 'build/_orekit/__wrap02__.cpp', 'build/_orekit/__wrap03__.cpp', 'build/_orekit/__wrap04__.cpp', 'build/_orekit/__wrap05__.cpp', 'build/_orekit/__wrap06__.cpp', 'build/_orekit/__wrap07__.cpp', 'build/_orekit/__wrap08__.cpp', 'build/_orekit/__wrap09__.cpp', 'build/_orekit/__wrap10__.cpp', 'build/_orekit/__wrap11__.cpp', 'build/_orekit/__wrap12__.cpp', 'build/_orekit/__wrap13__.cpp', 'build/_orekit/__wrap14__.cpp', 'build/_orekit/__wrap15__.cpp', 'build/_orekit/__wrap16__.cpp', 'build/_orekit/__wrap18__.cpp', 'build/_orekit/__wrap19__.cpp', 'build/_orekit/__wrap20__.cpp', 'build/_orekit/__wrap21__.cpp', 'build/_orekit/__wrap22__.cpp', 'build/_orekit/__wrap23__.cpp', 'build/_orekit/__wrap24__.cpp', 'build/_orekit/__wrap25__.cpp', 'build/_orekit/__wrap26__.cpp', 'build/_orekit/__wrap27__.cpp', 'build/_orekit/__wrap28__.cpp', 'build/_orekit/__wrap29__.cpp', 'build/_orekit/__wrap30__.cpp', 'build/_orekit/__wrap31__.cpp', 'build/_orekit/__wrap32__.cpp', 'build/_orekit/__wrap33__.cpp', 'build/_orekit/__wrap34__.cpp', 'build/_orekit/__wrap36__.cpp', 'build/_orekit/__wrap37__.cpp', 'build/_orekit/__wrap38__.cpp', 'build/_orekit/__wrap39__.cpp', 'build/_orekit/__wrap40__.cpp', 'build/_orekit/__wrap41__.cpp', 'build/_orekit/__wrap42__.cpp', 'build/_orekit/__wrap43__.cpp', 'build/_orekit/__wrap44__.cpp', 'build/_orekit/__wrap45__.cpp', 'build/_orekit/__wrap46__.cpp', 'build/_orekit/__wrap47__.cpp', 'build/_orekit/__wrap48__.cpp', 'build/_orekit/__wrap49__.cpp', 'build/_orekit/__wrap50__.cpp', 'build/_orekit/__wrap51__.cpp', 'build/_orekit/__wrap52__.cpp', 'build/_orekit/__wrap54__.cpp', 'build/_orekit/__wrap55__.cpp', 'build/_orekit/__wrap56__.cpp', 'build/_orekit/__wrap57__.cpp', 'build/_orekit/__wrap58__.cpp', 'build/_orekit/__wrap59__.cpp', 'build/_orekit/__wrap60__.cpp', 'build/_orekit/__wrap61__.cpp', 'build/_orekit/__wrap62__.cpp', 'build/_orekit/__wrap63__.cpp', 'build/_orekit/__wrap64__.cpp', 'build/_orekit/__wrap65__.cpp', 'build/_orekit/__wrap66__.cpp', 'build/_orekit/__wrap67__.cpp', 'build/_orekit/__wrap68__.cpp', 'build/_orekit/__wrap69__.cpp', 'build/_orekit/__wrap70__.cpp', 'build/_orekit/__wrap17__.cpp', 'build/_orekit/__wrap35__.cpp', 'build/_orekit/__wrap53__.cpp', 'build/_orekit/__wrap71__.cpp', 'build/_orekit/__wrap72__.cpp', 'build/_orekit/__wrap73__.cpp', 'build/_orekit/__wrap74__.cpp', 'build/_orekit/__wrap75__.cpp', 'build/_orekit/__wrap76__.cpp', 'build/_orekit/__wrap77__.cpp', 'build/_orekit/__wrap78__.cpp', 'build/_orekit/__wrap79__.cpp', 'build/_orekit/__wrap80__.cpp', 'build/_orekit/__wrap81__.cpp', 'build/_orekit/__wrap82__.cpp', 'build/_orekit/__wrap83__.cpp', 'build/_orekit/__wrap84__.cpp', 'build/_orekit/__wrap85__.cpp', 'build/_orekit/__wrap86__.cpp', 'build/_orekit/__wrap87__.cpp', 'build/_orekit/__wrap88__.cpp', 'build/_orekit/__wrap89__.cpp', 'build/_orekit/__wrap90__.cpp', 'build/_orekit/__wrap91__.cpp', 'build/_orekit/__wrap92__.cpp'],
        include_dirs=jcc_conf.INCLUDES + ['build/_orekit', jcc.__path__[0] + '/sources'],
        define_macros=[('PYTHON', None), ('JCC_VER', '"3.13"'), ('_java_generics', None)],
        undef_macros=[],
        library_dirs=[],
        libraries=[],
        runtime_library_dirs=[],
        extra_objects=[],
        extra_compile_args=jcc_conf.CFLAGS,
        extra_link_args=jcc_conf.LFLAGS,
        export_symbols=[],
        swig_opts=[],
        depends=[],
        language=None,
        optional=None
)],
)