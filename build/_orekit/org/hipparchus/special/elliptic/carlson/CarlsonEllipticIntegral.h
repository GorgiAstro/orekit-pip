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
              mid_rC_b90fd2ae3b76ce9e,
              mid_rC_85c7af728c9b8762,
              mid_rC_824133ce4aec3505,
              mid_rC_75c7ce7d33e7324b,
              mid_rD_8713168363f00e29,
              mid_rD_391473110206afe5,
              mid_rD_c564d6ace53a5934,
              mid_rD_f56548599899c286,
              mid_rF_8713168363f00e29,
              mid_rF_391473110206afe5,
              mid_rF_c564d6ace53a5934,
              mid_rF_f56548599899c286,
              mid_rG_8713168363f00e29,
              mid_rG_391473110206afe5,
              mid_rG_c564d6ace53a5934,
              mid_rG_f56548599899c286,
              mid_rJ_e56cc6846d200191,
              mid_rJ_7ad503e18c9c5784,
              mid_rJ_04175aacb25dae17,
              mid_rJ_0062d53dab8088fa,
              mid_rJ_62031dc9e2270dfc,
              mid_rJ_d9d3f442502408c2,
              mid_rJ_6f404d1d063cb80e,
              mid_rJ_2f08b5e2102d607f,
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
