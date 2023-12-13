#ifndef org_orekit_gnss_antenna_PythonPhaseCenterVariationFunction_H
#define org_orekit_gnss_antenna_PythonPhaseCenterVariationFunction_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {
        class PhaseCenterVariationFunction;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        class PythonPhaseCenterVariationFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
            mid_value_99e3200dafc19573,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonPhaseCenterVariationFunction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonPhaseCenterVariationFunction(const PythonPhaseCenterVariationFunction& obj) : ::java::lang::Object(obj) {}

          PythonPhaseCenterVariationFunction();

          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          jdouble value(jdouble, jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {
        extern PyType_Def PY_TYPE_DEF(PythonPhaseCenterVariationFunction);
        extern PyTypeObject *PY_TYPE(PythonPhaseCenterVariationFunction);

        class t_PythonPhaseCenterVariationFunction {
        public:
          PyObject_HEAD
          PythonPhaseCenterVariationFunction object;
          static PyObject *wrap_Object(const PythonPhaseCenterVariationFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
