#ifndef org_hipparchus_special_elliptic_jacobi_CopolarD_H
#define org_hipparchus_special_elliptic_jacobi_CopolarD_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          class CopolarD : public ::java::lang::Object {
           public:
            enum {
              mid_cd_456d9a2f64d6b28d,
              mid_nd_456d9a2f64d6b28d,
              mid_sd_456d9a2f64d6b28d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CopolarD(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CopolarD(const CopolarD& obj) : ::java::lang::Object(obj) {}

            jdouble cd() const;
            jdouble nd() const;
            jdouble sd() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {
          extern PyType_Def PY_TYPE_DEF(CopolarD);
          extern PyTypeObject *PY_TYPE(CopolarD);

          class t_CopolarD {
          public:
            PyObject_HEAD
            CopolarD object;
            static PyObject *wrap_Object(const CopolarD&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
