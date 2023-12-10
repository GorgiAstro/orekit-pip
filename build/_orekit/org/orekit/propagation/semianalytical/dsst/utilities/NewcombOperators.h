#ifndef org_orekit_propagation_semianalytical_dsst_utilities_NewcombOperators_H
#define org_orekit_propagation_semianalytical_dsst_utilities_NewcombOperators_H

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

            class NewcombOperators : public ::java::lang::Object {
             public:
              enum {
                mid_getValue_abd3941c73dbe95a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit NewcombOperators(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              NewcombOperators(const NewcombOperators& obj) : ::java::lang::Object(obj) {}

              static jdouble getValue(jint, jint, jint, jint);
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
            extern PyType_Def PY_TYPE_DEF(NewcombOperators);
            extern PyTypeObject *PY_TYPE(NewcombOperators);

            class t_NewcombOperators {
            public:
              PyObject_HEAD
              NewcombOperators object;
              static PyObject *wrap_Object(const NewcombOperators&);
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
