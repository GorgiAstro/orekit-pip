#ifndef org_hipparchus_util_MathUtils_H
#define org_hipparchus_util_MathUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class Localizable;
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
    class CalculusFieldElement;
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
          mid_checkDimension_3313c75e3e16c428,
          mid_checkFinite_ab69da052b88f50c,
          mid_checkFinite_8ba9fe7a847cecad,
          mid_checkNotNull_55f3c894852c27a3,
          mid_checkNotNull_b40ae6e2feb49504,
          mid_checkRangeInclusive_b5167f35b2521627,
          mid_checkRangeInclusive_84e3a5649e949acb,
          mid_copySign_75b669519a90ffd0,
          mid_copySign_92ecd94558bf0c68,
          mid_copySign_8f345e4204401ff5,
          mid_copySign_7ef7cc415580895c,
          mid_equals_cd8da52a7e84190c,
          mid_hash_f4eedf29a683816e,
          mid_hash_2af4736545087009,
          mid_max_c6408fdce2cc6c1a,
          mid_min_c6408fdce2cc6c1a,
          mid_normalizeAngle_99e3200dafc19573,
          mid_normalizeAngle_c6408fdce2cc6c1a,
          mid_reduce_f804f816b79164cb,
          mid_twoSum_4115efd6b05d8036,
          mid_twoSum_1d2a4451bfe8222b,
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
