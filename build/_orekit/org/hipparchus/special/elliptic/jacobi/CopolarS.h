#ifndef org_hipparchus_special_elliptic_jacobi_CopolarS_H
#define org_hipparchus_special_elliptic_jacobi_CopolarS_H

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

          class CopolarS : public ::java::lang::Object {
           public:
            enum {
              mid_cs_dff5885c2c873297,
              mid_ds_dff5885c2c873297,
              mid_ns_dff5885c2c873297,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CopolarS(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CopolarS(const CopolarS& obj) : ::java::lang::Object(obj) {}

            jdouble cs() const;
            jdouble ds() const;
            jdouble ns() const;
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
          extern PyType_Def PY_TYPE_DEF(CopolarS);
          extern PyTypeObject *PY_TYPE(CopolarS);

          class t_CopolarS {
          public:
            PyObject_HEAD
            CopolarS object;
            static PyObject *wrap_Object(const CopolarS&);
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
