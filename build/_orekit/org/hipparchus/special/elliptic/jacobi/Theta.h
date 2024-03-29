#ifndef org_hipparchus_special_elliptic_jacobi_Theta_H
#define org_hipparchus_special_elliptic_jacobi_Theta_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace complex {
      class Complex;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          class Theta : public ::java::lang::Object {
           public:
            enum {
              mid_theta1_847706ebd9444ecb,
              mid_theta2_847706ebd9444ecb,
              mid_theta3_847706ebd9444ecb,
              mid_theta4_847706ebd9444ecb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Theta(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Theta(const Theta& obj) : ::java::lang::Object(obj) {}

            ::org::hipparchus::complex::Complex theta1() const;
            ::org::hipparchus::complex::Complex theta2() const;
            ::org::hipparchus::complex::Complex theta3() const;
            ::org::hipparchus::complex::Complex theta4() const;
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
          extern PyType_Def PY_TYPE_DEF(Theta);
          extern PyTypeObject *PY_TYPE(Theta);

          class t_Theta {
          public:
            PyObject_HEAD
            Theta object;
            static PyObject *wrap_Object(const Theta&);
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
