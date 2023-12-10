#ifndef org_hipparchus_util_MathUtils_H
#define org_hipparchus_util_MathUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace exception {
      class NullArgumentException;
      class Localizable;
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
    namespace util {
      class MathUtils$FieldSumAndResidual;
      class MathUtils$SumAndResidual;
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
          mid_checkDimension_6f37635c3285dbdf,
          mid_checkFinite_fa9d415d19f69361,
          mid_checkFinite_17db3a65980d3441,
          mid_checkNotNull_2990946c992aafed,
          mid_checkNotNull_3c65185e850990f7,
          mid_checkRangeInclusive_2c56b6dd4d4b1dec,
          mid_checkRangeInclusive_112a246dd0c6f6dd,
          mid_copySign_36a7418727e23ece,
          mid_copySign_819f91eddf220c5b,
          mid_copySign_fe4804b67425641b,
          mid_copySign_c6d9b7dbb62504d2,
          mid_equals_ff85a0d8ff097ee5,
          mid_hash_e00f7ba4becc2a21,
          mid_hash_4508852644846c83,
          mid_max_6746cc1cd9210d54,
          mid_min_6746cc1cd9210d54,
          mid_normalizeAngle_86ffecc08a63eff0,
          mid_normalizeAngle_6746cc1cd9210d54,
          mid_reduce_8c19bdea212fe058,
          mid_twoSum_a882b4284983c643,
          mid_twoSum_d5a65cce20bdd72b,
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
