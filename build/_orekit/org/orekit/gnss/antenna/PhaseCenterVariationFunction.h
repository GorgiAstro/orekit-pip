#ifndef org_orekit_gnss_antenna_PhaseCenterVariationFunction_H
#define org_orekit_gnss_antenna_PhaseCenterVariationFunction_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        class PhaseCenterVariationFunction : public ::java::lang::Object {
         public:
          enum {
            mid_value_99e3200dafc19573,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PhaseCenterVariationFunction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PhaseCenterVariationFunction(const PhaseCenterVariationFunction& obj) : ::java::lang::Object(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(PhaseCenterVariationFunction);
        extern PyTypeObject *PY_TYPE(PhaseCenterVariationFunction);

        class t_PhaseCenterVariationFunction {
        public:
          PyObject_HEAD
          PhaseCenterVariationFunction object;
          static PyObject *wrap_Object(const PhaseCenterVariationFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
