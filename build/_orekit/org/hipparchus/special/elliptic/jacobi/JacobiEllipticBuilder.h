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
              mid_build_0c9af6e2d51a3f41,
              mid_build_be3d808bf3f13b03,
              mid_build_6d335e7d24da3092,
              mid_build_7d6acf72b7310d24,
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
