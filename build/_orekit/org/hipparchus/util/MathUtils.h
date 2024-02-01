#ifndef org_hipparchus_util_MathUtils_H
#define org_hipparchus_util_MathUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class MathUtils$SumAndResidual;
      class MathUtils$FieldSumAndResidual;
    }
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
      class Localizable;
      class NullArgumentException;
    }
    class FieldElement;
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
          mid_checkDimension_b5d23e6c0858e8ed,
          mid_checkFinite_a71c45509eaf92d1,
          mid_checkFinite_1ad26e8c8c0cd65b,
          mid_checkNotNull_83ee235bb1e64e94,
          mid_checkNotNull_1eef9f365bbd2d45,
          mid_checkRangeInclusive_bd28dc6055dc5bbd,
          mid_checkRangeInclusive_ca932f9f7e00d3a3,
          mid_copySign_2808127888b4293b,
          mid_copySign_91b9e1e34b2235d5,
          mid_copySign_7912418dc9bc44e3,
          mid_copySign_38206875b8cc5381,
          mid_equals_0fc66ee74538f12c,
          mid_hash_0bbaa89e7f8976bd,
          mid_hash_9e72cb20adb363fb,
          mid_max_b5ecd7df9e053968,
          mid_min_b5ecd7df9e053968,
          mid_normalizeAngle_82f92590f4247da1,
          mid_normalizeAngle_b5ecd7df9e053968,
          mid_reduce_db06d8c3fc3d9670,
          mid_twoSum_ac565a513efe989e,
          mid_twoSum_b856fba37b6f9318,
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
