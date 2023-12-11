#ifndef org_orekit_propagation_semianalytical_dsst_utilities_LnsCoefficients_H
#define org_orekit_propagation_semianalytical_dsst_utilities_LnsCoefficients_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Double;
    class Class;
  }
  namespace util {
    class SortedMap;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            class CoefficientsFactory$NSKey;
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

            class LnsCoefficients : public ::java::lang::Object {
             public:
              enum {
                mid_init$_75c0bd93df30ee67,
                mid_getLns_21b81d54c06b64b0,
                mid_getdLnsdGamma_21b81d54c06b64b0,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LnsCoefficients(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LnsCoefficients(const LnsCoefficients& obj) : ::java::lang::Object(obj) {}

              LnsCoefficients(jint, jint, const JArray< JArray< jdouble > > &, const ::java::util::SortedMap &, jdouble);

              jdouble getLns(jint, jint) const;
              jdouble getdLnsdGamma(jint, jint) const;
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
            extern PyType_Def PY_TYPE_DEF(LnsCoefficients);
            extern PyTypeObject *PY_TYPE(LnsCoefficients);

            class t_LnsCoefficients {
            public:
              PyObject_HEAD
              LnsCoefficients object;
              static PyObject *wrap_Object(const LnsCoefficients&);
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
