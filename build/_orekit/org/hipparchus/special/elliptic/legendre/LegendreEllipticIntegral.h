#ifndef org_hipparchus_special_elliptic_legendre_LegendreEllipticIntegral_H
#define org_hipparchus_special_elliptic_legendre_LegendreEllipticIntegral_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      class ComplexUnivariateIntegrator;
      class FieldComplexUnivariateIntegrator;
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
        namespace legendre {

          class LegendreEllipticIntegral : public ::java::lang::Object {
           public:
            enum {
              mid_bigD_b074c62aaddfbbb2,
              mid_bigD_e335ffa535ec807c,
              mid_bigD_0ba5fed9597b693e,
              mid_bigD_d3398190482814dc,
              mid_bigD_b90fd2ae3b76ce9e,
              mid_bigD_85c7af728c9b8762,
              mid_bigD_824133ce4aec3505,
              mid_bigD_75c7ce7d33e7324b,
              mid_bigE_b074c62aaddfbbb2,
              mid_bigE_e335ffa535ec807c,
              mid_bigE_0ba5fed9597b693e,
              mid_bigE_d3398190482814dc,
              mid_bigE_b90fd2ae3b76ce9e,
              mid_bigE_85c7af728c9b8762,
              mid_bigE_824133ce4aec3505,
              mid_bigE_75c7ce7d33e7324b,
              mid_bigE_0376628ef9b6ae64,
              mid_bigE_77a479c0e43a7d9d,
              mid_bigF_b90fd2ae3b76ce9e,
              mid_bigF_85c7af728c9b8762,
              mid_bigF_824133ce4aec3505,
              mid_bigF_75c7ce7d33e7324b,
              mid_bigF_0376628ef9b6ae64,
              mid_bigF_77a479c0e43a7d9d,
              mid_bigK_b074c62aaddfbbb2,
              mid_bigK_e335ffa535ec807c,
              mid_bigK_0ba5fed9597b693e,
              mid_bigK_d3398190482814dc,
              mid_bigKPrime_b074c62aaddfbbb2,
              mid_bigKPrime_e335ffa535ec807c,
              mid_bigKPrime_0ba5fed9597b693e,
              mid_bigKPrime_d3398190482814dc,
              mid_bigPi_b90fd2ae3b76ce9e,
              mid_bigPi_85c7af728c9b8762,
              mid_bigPi_824133ce4aec3505,
              mid_bigPi_75c7ce7d33e7324b,
              mid_bigPi_8713168363f00e29,
              mid_bigPi_391473110206afe5,
              mid_bigPi_c564d6ace53a5934,
              mid_bigPi_f56548599899c286,
              mid_bigPi_6f222436ba8518b8,
              mid_bigPi_0fa1f139db9bfc8a,
              mid_nome_0ba5fed9597b693e,
              mid_nome_d3398190482814dc,
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
