#ifndef org_hipparchus_special_elliptic_carlson_CarlsonEllipticIntegral_H
#define org_hipparchus_special_elliptic_carlson_CarlsonEllipticIntegral_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      class Complex;
      class FieldComplex;
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
        namespace carlson {

          class CarlsonEllipticIntegral : public ::java::lang::Object {
           public:
            enum {
              mid_rC_600605bb97069728,
              mid_rC_c07eaa4a298b48d0,
              mid_rC_2268d18be49a6087,
              mid_rC_d5f58731bcb8a011,
              mid_rD_6156fa5f0dbd9ed3,
              mid_rD_97a60df2e559f4a4,
              mid_rD_8d02ba458f22e508,
              mid_rD_d181e731358aa045,
              mid_rF_6156fa5f0dbd9ed3,
              mid_rF_97a60df2e559f4a4,
              mid_rF_8d02ba458f22e508,
              mid_rF_d181e731358aa045,
              mid_rG_6156fa5f0dbd9ed3,
              mid_rG_97a60df2e559f4a4,
              mid_rG_8d02ba458f22e508,
              mid_rG_d181e731358aa045,
              mid_rJ_7d14c7027947a4b0,
              mid_rJ_bb0e7d413a12990c,
              mid_rJ_79d60f5d1a9d8623,
              mid_rJ_b36bbc15a8c16f64,
              mid_rJ_966a0b2762c4840a,
              mid_rJ_fdfcd218305d4c4f,
              mid_rJ_765cc6b7207cf0fc,
              mid_rJ_10a75391cb060c92,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CarlsonEllipticIntegral(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CarlsonEllipticIntegral(const CarlsonEllipticIntegral& obj) : ::java::lang::Object(obj) {}

            static ::org::hipparchus::complex::Complex rC(const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &);
            static ::org::hipparchus::complex::FieldComplex rC(const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &);
            static jdouble rC(jdouble, jdouble);
            static ::org::hipparchus::CalculusFieldElement rC(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
            static ::org::hipparchus::complex::Complex rD(const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &);
            static ::org::hipparchus::complex::FieldComplex rD(const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &);
            static jdouble rD(jdouble, jdouble, jdouble);
            static ::org::hipparchus::CalculusFieldElement rD(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
            static ::org::hipparchus::complex::Complex rF(const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &);
            static ::org::hipparchus::complex::FieldComplex rF(const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &);
            static jdouble rF(jdouble, jdouble, jdouble);
            static ::org::hipparchus::CalculusFieldElement rF(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
            static ::org::hipparchus::complex::Complex rG(const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &);
            static ::org::hipparchus::complex::FieldComplex rG(const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &);
            static jdouble rG(jdouble, jdouble, jdouble);
            static ::org::hipparchus::CalculusFieldElement rG(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
            static ::org::hipparchus::complex::Complex rJ(const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &);
            static ::org::hipparchus::complex::FieldComplex rJ(const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &);
            static jdouble rJ(jdouble, jdouble, jdouble, jdouble);
            static ::org::hipparchus::CalculusFieldElement rJ(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
            static ::org::hipparchus::complex::Complex rJ(const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &);
            static ::org::hipparchus::complex::FieldComplex rJ(const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &);
            static jdouble rJ(jdouble, jdouble, jdouble, jdouble, jdouble);
            static ::org::hipparchus::CalculusFieldElement rJ(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
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
        namespace carlson {
          extern PyType_Def PY_TYPE_DEF(CarlsonEllipticIntegral);
          extern PyTypeObject *PY_TYPE(CarlsonEllipticIntegral);

          class t_CarlsonEllipticIntegral {
          public:
            PyObject_HEAD
            CarlsonEllipticIntegral object;
            static PyObject *wrap_Object(const CarlsonEllipticIntegral&);
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
