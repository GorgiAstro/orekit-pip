#ifndef org_hipparchus_special_elliptic_legendre_LegendreEllipticIntegral_H
#define org_hipparchus_special_elliptic_legendre_LegendreEllipticIntegral_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      class ComplexUnivariateIntegrator;
      class Complex;
      class FieldComplex;
      class FieldComplexUnivariateIntegrator;
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
        namespace legendre {

          class LegendreEllipticIntegral : public ::java::lang::Object {
           public:
            enum {
              mid_bigD_48ac0ef047162b30,
              mid_bigD_44ec11f3ee7128be,
              mid_bigD_bf28ed64d6e8576b,
              mid_bigD_a3b854adede8eaaa,
              mid_bigD_2d58bd4896edb1e2,
              mid_bigD_52ba3d392dc930c6,
              mid_bigD_82f92590f4247da1,
              mid_bigD_b5ecd7df9e053968,
              mid_bigE_48ac0ef047162b30,
              mid_bigE_44ec11f3ee7128be,
              mid_bigE_bf28ed64d6e8576b,
              mid_bigE_a3b854adede8eaaa,
              mid_bigE_2d58bd4896edb1e2,
              mid_bigE_52ba3d392dc930c6,
              mid_bigE_82f92590f4247da1,
              mid_bigE_b5ecd7df9e053968,
              mid_bigE_65318e1a4d2285d3,
              mid_bigE_c7ad730eb592aff3,
              mid_bigF_2d58bd4896edb1e2,
              mid_bigF_52ba3d392dc930c6,
              mid_bigF_82f92590f4247da1,
              mid_bigF_b5ecd7df9e053968,
              mid_bigF_65318e1a4d2285d3,
              mid_bigF_c7ad730eb592aff3,
              mid_bigK_48ac0ef047162b30,
              mid_bigK_44ec11f3ee7128be,
              mid_bigK_bf28ed64d6e8576b,
              mid_bigK_a3b854adede8eaaa,
              mid_bigKPrime_48ac0ef047162b30,
              mid_bigKPrime_44ec11f3ee7128be,
              mid_bigKPrime_bf28ed64d6e8576b,
              mid_bigKPrime_a3b854adede8eaaa,
              mid_bigPi_2d58bd4896edb1e2,
              mid_bigPi_52ba3d392dc930c6,
              mid_bigPi_82f92590f4247da1,
              mid_bigPi_b5ecd7df9e053968,
              mid_bigPi_373272692db3c8df,
              mid_bigPi_232ee5b9d52b0bf0,
              mid_bigPi_db06d8c3fc3d9670,
              mid_bigPi_3130e338b3b4d904,
              mid_bigPi_41b6dc3375b24d53,
              mid_bigPi_da40dcd5961779ff,
              mid_nome_bf28ed64d6e8576b,
              mid_nome_a3b854adede8eaaa,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LegendreEllipticIntegral(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LegendreEllipticIntegral(const LegendreEllipticIntegral& obj) : ::java::lang::Object(obj) {}

            static ::org::hipparchus::complex::Complex bigD(const ::org::hipparchus::complex::Complex &);
            static ::org::hipparchus::complex::FieldComplex bigD(const ::org::hipparchus::complex::FieldComplex &);
            static jdouble bigD(jdouble);
            static ::org::hipparchus::CalculusFieldElement bigD(const ::org::hipparchus::CalculusFieldElement &);
            static ::org::hipparchus::complex::Complex bigD(const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &);
            static ::org::hipparchus::complex::FieldComplex bigD(const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &);
            static jdouble bigD(jdouble, jdouble);
            static ::org::hipparchus::CalculusFieldElement bigD(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
            static ::org::hipparchus::complex::Complex bigE(const ::org::hipparchus::complex::Complex &);
            static ::org::hipparchus::complex::FieldComplex bigE(const ::org::hipparchus::complex::FieldComplex &);
            static jdouble bigE(jdouble);
            static ::org::hipparchus::CalculusFieldElement bigE(const ::org::hipparchus::CalculusFieldElement &);
            static ::org::hipparchus::complex::Complex bigE(const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &);
            static ::org::hipparchus::complex::FieldComplex bigE(const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &);
            static jdouble bigE(jdouble, jdouble);
            static ::org::hipparchus::CalculusFieldElement bigE(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
            static ::org::hipparchus::complex::Complex bigE(const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::ComplexUnivariateIntegrator &, jint);
            static ::org::hipparchus::complex::FieldComplex bigE(const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplexUnivariateIntegrator &, jint);
            static ::org::hipparchus::complex::Complex bigF(const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &);
            static ::org::hipparchus::complex::FieldComplex bigF(const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &);
            static jdouble bigF(jdouble, jdouble);
            static ::org::hipparchus::CalculusFieldElement bigF(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
            static ::org::hipparchus::complex::Complex bigF(const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::ComplexUnivariateIntegrator &, jint);
            static ::org::hipparchus::complex::FieldComplex bigF(const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplexUnivariateIntegrator &, jint);
            static ::org::hipparchus::complex::Complex bigK(const ::org::hipparchus::complex::Complex &);
            static ::org::hipparchus::complex::FieldComplex bigK(const ::org::hipparchus::complex::FieldComplex &);
            static jdouble bigK(jdouble);
            static ::org::hipparchus::CalculusFieldElement bigK(const ::org::hipparchus::CalculusFieldElement &);
            static ::org::hipparchus::complex::Complex bigKPrime(const ::org::hipparchus::complex::Complex &);
            static ::org::hipparchus::complex::FieldComplex bigKPrime(const ::org::hipparchus::complex::FieldComplex &);
            static jdouble bigKPrime(jdouble);
            static ::org::hipparchus::CalculusFieldElement bigKPrime(const ::org::hipparchus::CalculusFieldElement &);
            static ::org::hipparchus::complex::Complex bigPi(const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &);
            static ::org::hipparchus::complex::FieldComplex bigPi(const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &);
            static jdouble bigPi(jdouble, jdouble);
            static ::org::hipparchus::CalculusFieldElement bigPi(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
            static ::org::hipparchus::complex::Complex bigPi(const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &);
            static ::org::hipparchus::complex::FieldComplex bigPi(const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &);
            static jdouble bigPi(jdouble, jdouble, jdouble);
            static ::org::hipparchus::CalculusFieldElement bigPi(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
            static ::org::hipparchus::complex::Complex bigPi(const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::ComplexUnivariateIntegrator &, jint);
            static ::org::hipparchus::complex::FieldComplex bigPi(const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplexUnivariateIntegrator &, jint);
            static jdouble nome(jdouble);
            static ::org::hipparchus::CalculusFieldElement nome(const ::org::hipparchus::CalculusFieldElement &);
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
        namespace legendre {
          extern PyType_Def PY_TYPE_DEF(LegendreEllipticIntegral);
          extern PyTypeObject *PY_TYPE(LegendreEllipticIntegral);

          class t_LegendreEllipticIntegral {
          public:
            PyObject_HEAD
            LegendreEllipticIntegral object;
            static PyObject *wrap_Object(const LegendreEllipticIntegral&);
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
