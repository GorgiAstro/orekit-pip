#ifndef org_hipparchus_special_elliptic_jacobi_JacobiEllipticBuilder_H
#define org_hipparchus_special_elliptic_jacobi_JacobiEllipticBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      class FieldComplex;
      class Complex;
    }
    class CalculusFieldElement;
    namespace special {
      namespace elliptic {
        namespace jacobi {
          class FieldJacobiElliptic;
          class JacobiElliptic;
        }
      }
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

          class JacobiEllipticBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_build_fec4e665deb28f28,
              mid_build_00ba82734bfbeb6e,
              mid_build_b7a786fccc7ec71c,
              mid_build_823b53f843669fcc,
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
