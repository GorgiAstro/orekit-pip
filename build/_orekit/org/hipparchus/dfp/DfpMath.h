#ifndef org_hipparchus_dfp_DfpMath_H
#define org_hipparchus_dfp_DfpMath_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      class Dfp;
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
    namespace dfp {

      class DfpMath : public ::java::lang::Object {
       public:
        enum {
          mid_acos_f081bcbf4bd8f1ad,
          mid_asin_f081bcbf4bd8f1ad,
          mid_atan_f081bcbf4bd8f1ad,
          mid_cos_f081bcbf4bd8f1ad,
          mid_exp_f081bcbf4bd8f1ad,
          mid_log_f081bcbf4bd8f1ad,
          mid_pow_badefef06f0dff33,
          mid_pow_4a186cd89cd0804a,
          mid_sin_f081bcbf4bd8f1ad,
          mid_tan_f081bcbf4bd8f1ad,
          mid_splitMult_bc523e2f59a11e70,
          mid_splitDiv_bc523e2f59a11e70,
          mid_splitPow_1e10e883106ff8c1,
          mid_expInternal_f081bcbf4bd8f1ad,
          mid_logInternal_e9d3f4d880e87fce,
          mid_sinInternal_417736a9ecc0c959,
          mid_cosInternal_417736a9ecc0c959,
          mid_atanInternal_f081bcbf4bd8f1ad,
          mid_split_2975de3e6def407a,
          mid_split_00348e9337681d3d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DfpMath(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DfpMath(const DfpMath& obj) : ::java::lang::Object(obj) {}

        static ::org::hipparchus::dfp::Dfp acos(const ::org::hipparchus::dfp::Dfp &);
        static ::org::hipparchus::dfp::Dfp asin(const ::org::hipparchus::dfp::Dfp &);
        static ::org::hipparchus::dfp::Dfp atan(const ::org::hipparchus::dfp::Dfp &);
        static ::org::hipparchus::dfp::Dfp cos(const ::org::hipparchus::dfp::Dfp &);
        static ::org::hipparchus::dfp::Dfp exp(const ::org::hipparchus::dfp::Dfp &);
        static ::org::hipparchus::dfp::Dfp log(const ::org::hipparchus::dfp::Dfp &);
        static ::org::hipparchus::dfp::Dfp pow(const ::org::hipparchus::dfp::Dfp &, const ::org::hipparchus::dfp::Dfp &);
        static ::org::hipparchus::dfp::Dfp pow(const ::org::hipparchus::dfp::Dfp &, jint);
        static ::org::hipparchus::dfp::Dfp sin(const ::org::hipparchus::dfp::Dfp &);
        static ::org::hipparchus::dfp::Dfp tan(const ::org::hipparchus::dfp::Dfp &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace dfp {
      extern PyType_Def PY_TYPE_DEF(DfpMath);
      extern PyTypeObject *PY_TYPE(DfpMath);

      class t_DfpMath {
      public:
        PyObject_HEAD
        DfpMath object;
        static PyObject *wrap_Object(const DfpMath&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
