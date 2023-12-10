
import os
import sys
if sys.platform == 'win32':
  from .windows import add_jvm_dll_directory_to_path
  add_jvm_dll_directory_to_path('client')
from . import _orekit

__module_dir__ = os.path.abspath(os.path.dirname(__file__))

class JavaError(Exception):
  def getJavaException(self):
    return self.args[0]
  def __str__(self):
    writer = StringWriter()
    self.getJavaException().printStackTrace(PrintWriter(writer))
    return "\n".join((str(super(JavaError, self)), "    Java stacktrace:", str(writer)))

class InvalidArgsError(Exception):
  pass

_orekit._set_exception_types(JavaError, InvalidArgsError)

VERSION = "12.0"
CLASSPATH = [os.path.join(__module_dir__, "orekit-12.0.jar"), os.path.join(__module_dir__, "hipparchus-core-3.0.jar"), os.path.join(__module_dir__, "hipparchus-fitting-3.0.jar"), os.path.join(__module_dir__, "hipparchus-filtering-3.0.jar"), os.path.join(__module_dir__, "hipparchus-geometry-3.0.jar"), os.path.join(__module_dir__, "hipparchus-ode-3.0.jar"), os.path.join(__module_dir__, "hipparchus-optim-3.0.jar"), os.path.join(__module_dir__, "hipparchus-stat-3.0.jar"), os.path.join(__module_dir__, "rugged-3.0.jar")]
CLASSPATH = os.pathsep.join(CLASSPATH)
_orekit.CLASSPATH = CLASSPATH
_orekit._set_function_self(_orekit.initVM, _orekit)

from ._orekit import *
from java.io import PrintWriter, StringWriter
