#ifndef org_hipparchus_special_elliptic_legendre_LegendreEllipticIntegral_H
#define org_hipparchus_special_elliptic_legendre_LegendreEllipticIntegral_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      class FieldComplex;
      class Complex;
      class FieldComplexUnivariateIntegrator;
      class ComplexUnivariateIntegrator;
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
              mid_bigD_db05c4121ab4cf9b,
              mid_bigD_324fe1e1d007a3ed,
              mid_bigD_dcbc7ce2902fa136,
              mid_bigD_a4b1871f4d29e58b,
              mid_bigD_6e0cdbc797c242a1,
              mid_bigD_a3c292738a9833b6,
              mid_bigD_86ffecc08a63eff0,
              mid_bigD_6746cc1cd9210d54,
              mid_bigE_db05c4121ab4cf9b,
              mid_bigE_324fe1e1d007a3ed,
              mid_bigE_dcbc7ce2902fa136,
              mid_bigE_a4b1871f4d29e58b,
              mid_bigE_6e0cdbc797c242a1,
              mid_bigE_a3c292738a9833b6,
              mid_bigE_86ffecc08a63eff0,
              mid_bigE_6746cc1cd9210d54,
              mid_bigE_61cc8be847c55fb3,
              mid_bigE_59d9c2f758348fb7,
              mid_bigF_6e0cdbc797c242a1,
              mid_bigF_a3c292738a9833b6,
              mid_bigF_86ffecc08a63eff0,
              mid_bigF_6746cc1cd9210d54,
              mid_bigF_61cc8be847c55fb3,
              mid_bigF_59d9c2f758348fb7,
              mid_bigK_db05c4121ab4cf9b,
              mid_bigK_324fe1e1d007a3ed,
              mid_bigK_dcbc7ce2902fa136,
              mid_bigK_a4b1871f4d29e58b,
              mid_bigKPrime_db05c4121ab4cf9b,
              mid_bigKPrime_324fe1e1d007a3ed,
              mid_bigKPrime_dcbc7ce2902fa136,
              mid_bigKPrime_a4b1871f4d29e58b,
              mid_bigPi_6e0cdbc797c242a1,
              mid_bigPi_a3c292738a9833b6,
              mid_bigPi_86ffecc08a63eff0,
              mid_bigPi_6746cc1cd9210d54,
              mid_bigPi_f8bf5c113fa9cbc9,
              mid_bigPi_d361fa1b878f879c,
              mid_bigPi_8c19bdea212fe058,
              mid_bigPi_ff4594b9dc2244a3,
              mid_bigPi_6fd50c02e5b79ed3,
              mid_bigPi_55db7eefcb28a55c,
              mid_nome_dcbc7ce2902fa136,
              mid_nome_a4b1871f4d29e58b,
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
