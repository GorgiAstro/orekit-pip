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
          mid_acos_f0d5166eeb6b0680,
          mid_asin_f0d5166eeb6b0680,
          mid_atan_f0d5166eeb6b0680,
          mid_cos_f0d5166eeb6b0680,
          mid_exp_f0d5166eeb6b0680,
          mid_log_f0d5166eeb6b0680,
          mid_pow_5f4c8a207222b7cd,
          mid_pow_b9ffa5c4c3b32a9f,
          mid_sin_f0d5166eeb6b0680,
          mid_tan_f0d5166eeb6b0680,
          mid_splitMult_84f7175cc422b62a,
          mid_splitDiv_84f7175cc422b62a,
          mid_splitPow_68bcd12c4c1e245b,
          mid_expInternal_f0d5166eeb6b0680,
          mid_logInternal_c2ca673750c4dd02,
          mid_sinInternal_0f848135eb17ee81,
          mid_cosInternal_0f848135eb17ee81,
          mid_atanInternal_f0d5166eeb6b0680,
          mid_split_942ce37806556d8f,
          mid_split_940fad32318872ec,
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
