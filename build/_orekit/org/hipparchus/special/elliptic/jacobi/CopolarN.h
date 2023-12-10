#ifndef org_hipparchus_special_elliptic_jacobi_CopolarN_H
#define org_hipparchus_special_elliptic_jacobi_CopolarN_H

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

          class CopolarN : public ::java::lang::Object {
           public:
            enum {
              mid_cn_456d9a2f64d6b28d,
              mid_dn_456d9a2f64d6b28d,
              mid_sn_456d9a2f64d6b28d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CopolarN(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CopolarN(const CopolarN& obj) : ::java::lang::Object(obj) {}

            jdouble cn() const;
            jdouble dn() const;
            jdouble sn() const;
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
          extern PyType_Def PY_TYPE_DEF(CopolarN);
          extern PyTypeObject *PY_TYPE(CopolarN);

          class t_CopolarN {
          public:
            PyObject_HEAD
            CopolarN object;
            static PyObject *wrap_Object(const CopolarN&);
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
