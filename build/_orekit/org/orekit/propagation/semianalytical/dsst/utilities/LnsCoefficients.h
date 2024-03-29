#ifndef org_orekit_propagation_semianalytical_dsst_utilities_LnsCoefficients_H
#define org_orekit_propagation_semianalytical_dsst_utilities_LnsCoefficients_H

#include "java/lang/Object.h"

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
namespace java {
  namespace util {
    class SortedMap;
  }
  namespace lang {
    class Class;
    class Double;
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
                mid_init$_91456eeebdcf9dcd,
                mid_getLns_6d920aab27f0a3d2,
                mid_getdLnsdGamma_6d920aab27f0a3d2,
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
