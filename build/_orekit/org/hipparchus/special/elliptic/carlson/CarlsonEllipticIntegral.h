#ifndef org_hipparchus_special_elliptic_carlson_CarlsonEllipticIntegral_H
#define org_hipparchus_special_elliptic_carlson_CarlsonEllipticIntegral_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace complex {
      class FieldComplex;
      class Complex;
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
        namespace carlson {

          class CarlsonEllipticIntegral : public ::java::lang::Object {
           public:
            enum {
              mid_rC_66a05841a47df944,
              mid_rC_ffc2a92390051f74,
              mid_rC_99e3200dafc19573,
              mid_rC_c6408fdce2cc6c1a,
              mid_rD_ea3ba47e5616cb34,
              mid_rD_2ff0fd08cf0de215,
              mid_rD_f804f816b79164cb,
              mid_rD_8a93710b1b1536a6,
              mid_rF_ea3ba47e5616cb34,
              mid_rF_2ff0fd08cf0de215,
              mid_rF_f804f816b79164cb,
              mid_rF_8a93710b1b1536a6,
              mid_rG_ea3ba47e5616cb34,
              mid_rG_2ff0fd08cf0de215,
              mid_rG_f804f816b79164cb,
              mid_rG_8a93710b1b1536a6,
              mid_rJ_08e384c3474bdd1c,
              mid_rJ_d9560f48e4b68b28,
              mid_rJ_08eba2463884b341,
              mid_rJ_0a337cffdfb74cd1,
              mid_rJ_e258a6370f9fab08,
              mid_rJ_0d5b508e91e7f94d,
              mid_rJ_8a4a2aacccac4925,
              mid_rJ_9418fc4466f489ae,
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
