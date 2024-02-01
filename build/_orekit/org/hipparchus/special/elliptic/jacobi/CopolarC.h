#ifndef org_hipparchus_special_elliptic_jacobi_CopolarC_H
#define org_hipparchus_special_elliptic_jacobi_CopolarC_H

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

          class CopolarC : public ::java::lang::Object {
           public:
            enum {
              mid_dc_9981f74b2d109da6,
              mid_nc_9981f74b2d109da6,
              mid_sc_9981f74b2d109da6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CopolarC(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CopolarC(const CopolarC& obj) : ::java::lang::Object(obj) {}

            jdouble dc() const;
            jdouble nc() const;
            jdouble sc() const;
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
          extern PyType_Def PY_TYPE_DEF(CopolarC);
          extern PyTypeObject *PY_TYPE(CopolarC);

          class t_CopolarC {
          public:
            PyObject_HEAD
            CopolarC object;
            static PyObject *wrap_Object(const CopolarC&);
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
