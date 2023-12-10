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
              mid_rC_6e0cdbc797c242a1,
              mid_rC_a3c292738a9833b6,
              mid_rC_86ffecc08a63eff0,
              mid_rC_6746cc1cd9210d54,
              mid_rD_f8bf5c113fa9cbc9,
              mid_rD_d361fa1b878f879c,
              mid_rD_8c19bdea212fe058,
              mid_rD_ff4594b9dc2244a3,
              mid_rF_f8bf5c113fa9cbc9,
              mid_rF_d361fa1b878f879c,
              mid_rF_8c19bdea212fe058,
              mid_rF_ff4594b9dc2244a3,
              mid_rG_f8bf5c113fa9cbc9,
              mid_rG_d361fa1b878f879c,
              mid_rG_8c19bdea212fe058,
              mid_rG_ff4594b9dc2244a3,
              mid_rJ_e4b62d9a92e5b076,
              mid_rJ_1d93f54300c6f636,
              mid_rJ_0f015b8be9d2dc40,
              mid_rJ_4a66279d01124751,
              mid_rJ_512a1627eb1558ae,
              mid_rJ_42d8d5d90c2a2f66,
              mid_rJ_5e4b7c96b371378c,
              mid_rJ_14a8e7e1d50b6391,
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
