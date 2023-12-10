#ifndef org_hipparchus_util_MathUtils_H
#define org_hipparchus_util_MathUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
      class Localizable;
      class MathRuntimeException;
    }
    class CalculusFieldElement;
    namespace util {
      class MathUtils$SumAndResidual;
      class MathUtils$FieldSumAndResidual;
    }
    class FieldElement;
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
          mid_checkDimension_8dbc1129a3c2557a,
          mid_checkFinite_ebc26dcaf4761286,
          mid_checkFinite_77e0f9a1f260e2e5,
          mid_checkNotNull_7ca0d9438822cb0b,
          mid_checkNotNull_4a08d1632f6975bc,
          mid_checkRangeInclusive_d0d6094fbd7015c5,
          mid_checkRangeInclusive_24462a11c42ba10b,
          mid_copySign_5826ac196c20fe4e,
          mid_copySign_d9790ac9eecfe931,
          mid_copySign_8f974216cbe53aea,
          mid_copySign_30405b752b89221e,
          mid_equals_a836bdf37f582c99,
          mid_hash_37221385ab42f822,
          mid_hash_12ebab281ee35c98,
          mid_max_75c7ce7d33e7324b,
          mid_min_75c7ce7d33e7324b,
          mid_normalizeAngle_824133ce4aec3505,
          mid_normalizeAngle_75c7ce7d33e7324b,
          mid_reduce_c564d6ace53a5934,
          mid_twoSum_066d66182fb7a918,
          mid_twoSum_3d4618c17ea63fb5,
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
