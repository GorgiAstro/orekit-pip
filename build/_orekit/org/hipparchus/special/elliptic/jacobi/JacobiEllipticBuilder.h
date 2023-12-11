#ifndef org_hipparchus_special_elliptic_jacobi_JacobiEllipticBuilder_H
#define org_hipparchus_special_elliptic_jacobi_JacobiEllipticBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      class Complex;
      class FieldComplex;
    }
    namespace special {
      namespace elliptic {
        namespace jacobi {
          class JacobiElliptic;
          class FieldJacobiElliptic;
        }
      }
    }
    class CalculusFieldElement;
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

          class JacobiEllipticBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_build_a9e75c3d28bb6859,
              mid_build_a2640730ea54017e,
              mid_build_cab39f0850be82fb,
              mid_build_f03624483fe3790d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JacobiEllipticBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JacobiEllipticBuilder(const JacobiEllipticBuilder& obj) : ::java::lang::Object(obj) {}

            static ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic build(const ::org::hipparchus::complex::Complex &);
            static ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic build(const ::org::hipparchus::complex::FieldComplex &);
            static ::org::hipparchus::special::elliptic::jacobi::JacobiElliptic build(jdouble);
            static ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic build(const ::org::hipparchus::CalculusFieldElement &);
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
          extern PyType_Def PY_TYPE_DEF(JacobiEllipticBuilder);
          extern PyTypeObject *PY_TYPE(JacobiEllipticBuilder);

          class t_JacobiEllipticBuilder {
          public:
            PyObject_HEAD
            JacobiEllipticBuilder object;
            static PyObject *wrap_Object(const JacobiEllipticBuilder&);
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
