#ifndef org_orekit_propagation_semianalytical_dsst_utilities_PythonInterpolationGrid_H
#define org_orekit_propagation_semianalytical_dsst_utilities_PythonInterpolationGrid_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            class InterpolationGrid;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            class PythonInterpolationGrid : public ::java::lang::Object {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                mid_finalize_0640e6acf969ed28,
                mid_getGridPoints_0699cadabd57760f,
                mid_pythonDecRef_0640e6acf969ed28,
                mid_pythonExtension_9e26256fb0d384a2,
                mid_pythonExtension_3cd6a6b354c6aa22,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonInterpolationGrid(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonInterpolationGrid(const PythonInterpolationGrid& obj) : ::java::lang::Object(obj) {}

              PythonInterpolationGrid();

              void finalize() const;
              JArray< jdouble > getGridPoints(jdouble, jdouble) const;
              void pythonDecRef() const;
              jlong pythonExtension() const;
              void pythonExtension(jlong) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            extern PyType_Def PY_TYPE_DEF(PythonInterpolationGrid);
            extern PyTypeObject *PY_TYPE(PythonInterpolationGrid);

            class t_PythonInterpolationGrid {
            public:
              PyObject_HEAD
              PythonInterpolationGrid object;
              static PyObject *wrap_Object(const PythonInterpolationGrid&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
