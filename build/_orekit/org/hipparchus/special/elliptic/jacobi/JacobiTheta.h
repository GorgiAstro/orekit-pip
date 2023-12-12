#ifndef org_hipparchus_special_elliptic_jacobi_JacobiTheta_H
#define org_hipparchus_special_elliptic_jacobi_JacobiTheta_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {
          class Theta;
        }
      }
    }
    namespace complex {
      class Complex;
    }
  }
}
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

          class JacobiTheta : public ::java::lang::Object {
           public:
            enum {
              mid_init$_10f281d777284cea,
              mid_getQ_557b8123390d8d0c,
              mid_values_2afa3af64630d764,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JacobiTheta(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JacobiTheta(const JacobiTheta& obj) : ::java::lang::Object(obj) {}

            JacobiTheta(jdouble);

            jdouble getQ() const;
            ::org::hipparchus::special::elliptic::jacobi::Theta values(const ::org::hipparchus::complex::Complex &) const;
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
          extern PyType_Def PY_TYPE_DEF(JacobiTheta);
          extern PyTypeObject *PY_TYPE(JacobiTheta);

          class t_JacobiTheta {
          public:
            PyObject_HEAD
            JacobiTheta object;
            static PyObject *wrap_Object(const JacobiTheta&);
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
