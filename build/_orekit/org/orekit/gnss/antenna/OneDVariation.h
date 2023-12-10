#ifndef org_orekit_gnss_antenna_OneDVariation_H
#define org_orekit_gnss_antenna_OneDVariation_H

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
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        class OneDVariation : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3c8bd231e261fc0c,
            mid_value_824133ce4aec3505,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OneDVariation(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OneDVariation(const OneDVariation& obj) : ::java::lang::Object(obj) {}

          OneDVariation(jdouble, jdouble, const JArray< jdouble > &);

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
        extern PyType_Def PY_TYPE_DEF(OneDVariation);
        extern PyTypeObject *PY_TYPE(OneDVariation);

        class t_OneDVariation {
        public:
          PyObject_HEAD
          OneDVariation object;
          static PyObject *wrap_Object(const OneDVariation&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
