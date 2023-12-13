#ifndef org_hipparchus_special_elliptic_legendre_LegendreEllipticIntegral_H
#define org_hipparchus_special_elliptic_legendre_LegendreEllipticIntegral_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      class ComplexUnivariateIntegrator;
      class FieldComplex;
      class FieldComplexUnivariateIntegrator;
      class Complex;
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
              mid_bigD_79e1cb20a2d72b1b,
              mid_bigD_cfbd18691ba7b7af,
              mid_bigD_04fd0666b613d2ab,
              mid_bigD_6e00dc5eb352fe51,
              mid_bigD_66a05841a47df944,
              mid_bigD_ffc2a92390051f74,
              mid_bigD_99e3200dafc19573,
              mid_bigD_c6408fdce2cc6c1a,
              mid_bigE_79e1cb20a2d72b1b,
              mid_bigE_cfbd18691ba7b7af,
              mid_bigE_04fd0666b613d2ab,
              mid_bigE_6e00dc5eb352fe51,
              mid_bigE_66a05841a47df944,
              mid_bigE_ffc2a92390051f74,
              mid_bigE_99e3200dafc19573,
              mid_bigE_c6408fdce2cc6c1a,
              mid_bigE_a0ed4332acd6e8ac,
              mid_bigE_9543fd01614535b6,
              mid_bigF_66a05841a47df944,
              mid_bigF_ffc2a92390051f74,
              mid_bigF_99e3200dafc19573,
              mid_bigF_c6408fdce2cc6c1a,
              mid_bigF_a0ed4332acd6e8ac,
              mid_bigF_9543fd01614535b6,
              mid_bigK_79e1cb20a2d72b1b,
              mid_bigK_cfbd18691ba7b7af,
              mid_bigK_04fd0666b613d2ab,
              mid_bigK_6e00dc5eb352fe51,
              mid_bigKPrime_79e1cb20a2d72b1b,
              mid_bigKPrime_cfbd18691ba7b7af,
              mid_bigKPrime_04fd0666b613d2ab,
              mid_bigKPrime_6e00dc5eb352fe51,
              mid_bigPi_66a05841a47df944,
              mid_bigPi_ffc2a92390051f74,
              mid_bigPi_99e3200dafc19573,
              mid_bigPi_c6408fdce2cc6c1a,
              mid_bigPi_ea3ba47e5616cb34,
              mid_bigPi_2ff0fd08cf0de215,
              mid_bigPi_f804f816b79164cb,
              mid_bigPi_8a93710b1b1536a6,
              mid_bigPi_3851ac6b27a1f79b,
              mid_bigPi_d2220cc85eeddf4c,
              mid_nome_04fd0666b613d2ab,
              mid_nome_6e00dc5eb352fe51,
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
