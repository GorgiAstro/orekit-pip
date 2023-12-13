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
          mid_acos_a714269abf022321,
          mid_asin_a714269abf022321,
          mid_atan_a714269abf022321,
          mid_cos_a714269abf022321,
          mid_exp_a714269abf022321,
          mid_log_a714269abf022321,
          mid_pow_cd2054800f3587f2,
          mid_pow_f5f69678420ef5b5,
          mid_sin_a714269abf022321,
          mid_tan_a714269abf022321,
          mid_splitMult_d6cb3d8676900d2f,
          mid_splitDiv_d6cb3d8676900d2f,
          mid_splitPow_3adf1f0fbfb2d82f,
          mid_expInternal_a714269abf022321,
          mid_logInternal_02f2d3350465c820,
          mid_sinInternal_a3796c0d40b4278b,
          mid_cosInternal_a3796c0d40b4278b,
          mid_atanInternal_a714269abf022321,
          mid_split_67530136c686dd00,
          mid_split_432445984aae9fc7,
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
