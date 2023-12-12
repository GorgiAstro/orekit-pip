#ifndef org_hipparchus_util_MathUtils_H
#define org_hipparchus_util_MathUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class FieldElement;
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
      class MathRuntimeException;
      class Localizable;
    }
    namespace util {
      class MathUtils$FieldSumAndResidual;
      class MathUtils$SumAndResidual;
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
    namespace util {

      class MathUtils : public ::java::lang::Object {
       public:
        enum {
          mid_checkDimension_a84c9a223722150c,
          mid_checkFinite_cc18240f4a737f14,
          mid_checkFinite_10f281d777284cea,
          mid_checkNotNull_009757f2c0fd9090,
          mid_checkNotNull_08c441469d673017,
          mid_checkRangeInclusive_87096e3fd8086100,
          mid_checkRangeInclusive_b35198c41fa72398,
          mid_copySign_b0a3501566648d40,
          mid_copySign_5625cf3db98dadc1,
          mid_copySign_c18ab8eab0c49f84,
          mid_copySign_110523af027099dd,
          mid_equals_41fce65646328eb2,
          mid_hash_02c575777cd113f8,
          mid_hash_abbeb9db7144ca23,
          mid_max_d5f58731bcb8a011,
          mid_min_d5f58731bcb8a011,
          mid_normalizeAngle_2268d18be49a6087,
          mid_normalizeAngle_d5f58731bcb8a011,
          mid_reduce_8d02ba458f22e508,
          mid_twoSum_22ddad23a8920c5c,
          mid_twoSum_171ca3f4012afa76,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MathUtils(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MathUtils(const MathUtils& obj) : ::java::lang::Object(obj) {}

        static jdouble PI_SQUARED;
        static jdouble SEMI_PI;
        static jdouble TWO_PI;

        static void checkDimension(jint, jint);
        static void checkFinite(const JArray< jdouble > &);
        static void checkFinite(jdouble);
        static void checkNotNull(const ::java::lang::Object &);
        static void checkNotNull(const ::java::lang::Object &, const ::org::hipparchus::exception::Localizable &, const JArray< ::java::lang::Object > &);
        static void checkRangeInclusive(jdouble, jdouble, jdouble);
        static void checkRangeInclusive(jlong, jlong, jlong);
        static jbyte copySign(jbyte, jbyte);
        static jint copySign(jint, jint);
        static jlong copySign(jlong, jlong);
        static jshort copySign(jshort, jshort);
        static jboolean equals(jdouble, jdouble);
        static jint hash(const JArray< jdouble > &);
        static jint hash(jdouble);
        static ::org::hipparchus::CalculusFieldElement max$(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static ::org::hipparchus::CalculusFieldElement min$(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static jdouble normalizeAngle(jdouble, jdouble);
        static ::org::hipparchus::CalculusFieldElement normalizeAngle(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static jdouble reduce(jdouble, jdouble, jdouble);
        static ::org::hipparchus::util::MathUtils$SumAndResidual twoSum(jdouble, jdouble);
        static ::org::hipparchus::util::MathUtils$FieldSumAndResidual twoSum(const ::org::hipparchus::FieldElement &, const ::org::hipparchus::FieldElement &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(MathUtils);
      extern PyTypeObject *PY_TYPE(MathUtils);

      class t_MathUtils {
      public:
        PyObject_HEAD
        MathUtils object;
        static PyObject *wrap_Object(const MathUtils&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
