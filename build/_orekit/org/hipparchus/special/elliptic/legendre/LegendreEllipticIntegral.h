#ifndef org_hipparchus_special_elliptic_legendre_LegendreEllipticIntegral_H
#define org_hipparchus_special_elliptic_legendre_LegendreEllipticIntegral_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      class ComplexUnivariateIntegrator;
      class Complex;
      class FieldComplexUnivariateIntegrator;
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
        namespace legendre {

          class LegendreEllipticIntegral : public ::java::lang::Object {
           public:
            enum {
              mid_bigD_4e63ff3bda7c322e,
              mid_bigD_285633f17a3543fe,
              mid_bigD_7e960cd6eee376d8,
              mid_bigD_6672ad854985cb64,
              mid_bigD_600605bb97069728,
              mid_bigD_c07eaa4a298b48d0,
              mid_bigD_2268d18be49a6087,
              mid_bigD_d5f58731bcb8a011,
              mid_bigE_4e63ff3bda7c322e,
              mid_bigE_285633f17a3543fe,
              mid_bigE_7e960cd6eee376d8,
              mid_bigE_6672ad854985cb64,
              mid_bigE_600605bb97069728,
              mid_bigE_c07eaa4a298b48d0,
              mid_bigE_2268d18be49a6087,
              mid_bigE_d5f58731bcb8a011,
              mid_bigE_092ab04c4a8aed0e,
              mid_bigE_79d4cab42d424679,
              mid_bigF_600605bb97069728,
              mid_bigF_c07eaa4a298b48d0,
              mid_bigF_2268d18be49a6087,
              mid_bigF_d5f58731bcb8a011,
              mid_bigF_092ab04c4a8aed0e,
              mid_bigF_79d4cab42d424679,
              mid_bigK_4e63ff3bda7c322e,
              mid_bigK_285633f17a3543fe,
              mid_bigK_7e960cd6eee376d8,
              mid_bigK_6672ad854985cb64,
              mid_bigKPrime_4e63ff3bda7c322e,
              mid_bigKPrime_285633f17a3543fe,
              mid_bigKPrime_7e960cd6eee376d8,
              mid_bigKPrime_6672ad854985cb64,
              mid_bigPi_600605bb97069728,
              mid_bigPi_c07eaa4a298b48d0,
              mid_bigPi_2268d18be49a6087,
              mid_bigPi_d5f58731bcb8a011,
              mid_bigPi_6156fa5f0dbd9ed3,
              mid_bigPi_97a60df2e559f4a4,
              mid_bigPi_8d02ba458f22e508,
              mid_bigPi_d181e731358aa045,
              mid_bigPi_989fa4e31612fca8,
              mid_bigPi_1514104f460aef00,
              mid_nome_7e960cd6eee376d8,
              mid_nome_6672ad854985cb64,
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
