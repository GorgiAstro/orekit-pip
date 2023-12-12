#include <Python.h>
#include "macros.h"
#include "jccfuncs.h"

PyObject *initJCC(PyObject *module);
void __install__(PyObject *module);
extern PyTypeObject *PY_TYPE(JObject), *PY_TYPE(ConstVariableDescriptor), *PY_TYPE(FinalizerClass), *PY_TYPE(FinalizerProxy);
extern PyType_Def PY_TYPE_DEF(JObject);
extern void _install_jarray(PyObject *);

extern "C" {
  static struct PyModuleDef _orekit_def = {
    PyModuleDef_HEAD_INIT,
    "_orekit",
    "_orekit module",
    0,
    jcc_funcs,
  };

  PyObject *PyInit__orekit(void)
  {
    PyObject *module = PyModule_Create(&_orekit_def);

    initJCC(module);

    INSTALL_STATIC_TYPE(JObject, module);
    PY_TYPE_DEF(JObject).type = PY_TYPE(JObject);
    INSTALL_STATIC_TYPE(ConstVariableDescriptor, module);
    INSTALL_STATIC_TYPE(FinalizerClass, module);
    INSTALL_STATIC_TYPE(FinalizerProxy, module);
    __install__(module);
    _install_jarray(module);

    return module;
  }
}
