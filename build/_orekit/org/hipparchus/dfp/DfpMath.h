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
          mid_acos_f4723517f29214b4,
          mid_asin_f4723517f29214b4,
          mid_atan_f4723517f29214b4,
          mid_cos_f4723517f29214b4,
          mid_exp_f4723517f29214b4,
          mid_log_f4723517f29214b4,
          mid_pow_6c69a9f186dcd94b,
          mid_pow_0f029d7bd1a04474,
          mid_sin_f4723517f29214b4,
          mid_tan_f4723517f29214b4,
          mid_splitMult_9fbddec527abc1b5,
          mid_splitDiv_9fbddec527abc1b5,
          mid_splitPow_1a6dd0b069e10975,
          mid_expInternal_f4723517f29214b4,
          mid_logInternal_9e0bd39a14a96cd6,
          mid_sinInternal_738c8f8e51e4e372,
          mid_cosInternal_738c8f8e51e4e372,
          mid_atanInternal_f4723517f29214b4,
          mid_split_3bcbb789bf246610,
          mid_split_e83c2a032a3b257b,
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
