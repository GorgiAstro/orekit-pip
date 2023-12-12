#ifndef org_orekit_propagation_semianalytical_dsst_utilities_GammaMnsFunction_H
#define org_orekit_propagation_semianalytical_dsst_utilities_GammaMnsFunction_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            class GammaMnsFunction : public ::java::lang::Object {
             public:
              enum {
                mid_init$_894aca411c1a443a,
                mid_getDerivative_093995dc5657c18c,
                mid_getValue_093995dc5657c18c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit GammaMnsFunction(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              GammaMnsFunction(const GammaMnsFunction& obj) : ::java::lang::Object(obj) {}

              GammaMnsFunction(jint, jdouble, jint);

              jdouble getDerivative(jint, jint, jint) const;
              jdouble getValue(jint, jint, jint) const;
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
            extern PyType_Def PY_TYPE_DEF(GammaMnsFunction);
            extern PyTypeObject *PY_TYPE(GammaMnsFunction);

            class t_GammaMnsFunction {
            public:
              PyObject_HEAD
              GammaMnsFunction object;
              static PyObject *wrap_Object(const GammaMnsFunction&);
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
