#ifndef org_orekit_propagation_semianalytical_dsst_utilities_CjSjCoefficient_H
#define org_orekit_propagation_semianalytical_dsst_utilities_CjSjCoefficient_H

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

            class CjSjCoefficient : public ::java::lang::Object {
             public:
              enum {
                mid_init$_1d715fa3b7b756e1,
                mid_getCj_b772323fc98b7293,
                mid_getDcjDh_b772323fc98b7293,
                mid_getDcjDk_b772323fc98b7293,
                mid_getDsjDh_b772323fc98b7293,
                mid_getDsjDk_b772323fc98b7293,
                mid_getSj_b772323fc98b7293,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CjSjCoefficient(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CjSjCoefficient(const CjSjCoefficient& obj) : ::java::lang::Object(obj) {}

              CjSjCoefficient(jdouble, jdouble);

              jdouble getCj(jint) const;
              jdouble getDcjDh(jint) const;
              jdouble getDcjDk(jint) const;
              jdouble getDsjDh(jint) const;
              jdouble getDsjDk(jint) const;
              jdouble getSj(jint) const;
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
            extern PyType_Def PY_TYPE_DEF(CjSjCoefficient);
            extern PyTypeObject *PY_TYPE(CjSjCoefficient);

            class t_CjSjCoefficient {
            public:
              PyObject_HEAD
              CjSjCoefficient object;
              static PyObject *wrap_Object(const CjSjCoefficient&);
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
