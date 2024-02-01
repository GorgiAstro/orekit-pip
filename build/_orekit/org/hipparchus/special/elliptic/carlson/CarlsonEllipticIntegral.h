#ifndef org_hipparchus_special_elliptic_carlson_CarlsonEllipticIntegral_H
#define org_hipparchus_special_elliptic_carlson_CarlsonEllipticIntegral_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      class FieldComplex;
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
        namespace carlson {

          class CarlsonEllipticIntegral : public ::java::lang::Object {
           public:
            enum {
              mid_rC_2d58bd4896edb1e2,
              mid_rC_52ba3d392dc930c6,
              mid_rC_82f92590f4247da1,
              mid_rC_b5ecd7df9e053968,
              mid_rD_373272692db3c8df,
              mid_rD_232ee5b9d52b0bf0,
              mid_rD_db06d8c3fc3d9670,
              mid_rD_3130e338b3b4d904,
              mid_rF_373272692db3c8df,
              mid_rF_232ee5b9d52b0bf0,
              mid_rF_db06d8c3fc3d9670,
              mid_rF_3130e338b3b4d904,
              mid_rG_373272692db3c8df,
              mid_rG_232ee5b9d52b0bf0,
              mid_rG_db06d8c3fc3d9670,
              mid_rG_3130e338b3b4d904,
              mid_rJ_68c85ce87a0825b2,
              mid_rJ_1853272de87ee45b,
              mid_rJ_45d926aea7231320,
              mid_rJ_d2c2bcf9f0e55408,
              mid_rJ_c5419c2e15847ba0,
              mid_rJ_044261f00ec25a20,
              mid_rJ_773b305e354f2fdd,
              mid_rJ_f38b8aec1a9a4ac3,
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
