#ifndef org_orekit_gnss_antenna_TwoDVariation_H
#define org_orekit_gnss_antenna_TwoDVariation_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
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

        class TwoDVariation : public ::java::lang::Object {
         public:
          enum {
            mid_init$_2b694b5e2fbd217b,
            mid_value_99e3200dafc19573,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TwoDVariation(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TwoDVariation(const TwoDVariation& obj) : ::java::lang::Object(obj) {}

          TwoDVariation(jdouble, jdouble, jdouble, const JArray< JArray< jdouble > > &);

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
        extern PyType_Def PY_TYPE_DEF(TwoDVariation);
        extern PyTypeObject *PY_TYPE(TwoDVariation);

        class t_TwoDVariation {
        public:
          PyObject_HEAD
          TwoDVariation object;
          static PyObject *wrap_Object(const TwoDVariation&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
