#ifndef org_orekit_gnss_antenna_PythonPhaseCenterVariationFunction_H
#define org_orekit_gnss_antenna_PythonPhaseCenterVariationFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {
        class PhaseCenterVariationFunction;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
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
            mid_init$_0fa09c18fee449d5,
            mid_finalize_0fa09c18fee449d5,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
            mid_value_86ffecc08a63eff0,
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
