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
          mid_acos_63aa6f5f01162583,
          mid_asin_63aa6f5f01162583,
          mid_atan_63aa6f5f01162583,
          mid_cos_63aa6f5f01162583,
          mid_exp_63aa6f5f01162583,
          mid_log_63aa6f5f01162583,
          mid_pow_e130e149d282e384,
          mid_pow_bf0539ff9a3c4b26,
          mid_sin_63aa6f5f01162583,
          mid_tan_63aa6f5f01162583,
          mid_logInternal_a9b1d632cbb96ef5,
          mid_sinInternal_f270b9a5e3fe221e,
          mid_cosInternal_f270b9a5e3fe221e,
          mid_atanInternal_63aa6f5f01162583,
          mid_splitMult_5b7544b58d513937,
          mid_splitDiv_5b7544b58d513937,
          mid_splitPow_75d6ce71b763e873,
          mid_expInternal_63aa6f5f01162583,
          mid_split_7c828ce00258c1eb,
          mid_split_ab6add9cd2aea6cb,
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
