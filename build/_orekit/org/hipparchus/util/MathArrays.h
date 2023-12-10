#ifndef org_hipparchus_util_MathArrays_H
#define org_hipparchus_util_MathArrays_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class MathArrays$OrderDirection;
      class MathArrays$Position;
    }
    namespace random {
      class RandomGenerator;
    }
    class Field;
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
    class CalculusFieldElement;
    class FieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
    class Comparable;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class MathArrays : public ::java::lang::Object {
       public:
        enum {
          mid_buildArray_bc58eb8ebe972f82,
          mid_buildArray_ebc1d7b2d944a9b8,
          mid_buildArray_66434a6abf649826,
          mid_checkEqualLength_0d03c8a1d7f56f02,
          mid_checkEqualLength_fb1ccf2a5678b26e,
          mid_checkEqualLength_44f58eee1ec38a36,
          mid_checkEqualLength_265c50ede9c0384f,
          mid_checkEqualLength_8a4160673f78eba9,
          mid_checkEqualLength_885a2e86bdd6cdd2,
          mid_checkNonNegative_f9329a87f434e224,
          mid_checkNonNegative_426d992091f69be4,
          mid_checkNotNaN_ebc26dcaf4761286,
          mid_checkOrder_ebc26dcaf4761286,
          mid_checkOrder_4c337e4c1ec6f647,
          mid_checkOrder_9d84b64f1b8d2ed9,
          mid_checkOrder_46a7f83d923ff8f6,
          mid_checkOrder_42cbf10fbe912dd3,
          mid_checkOrder_055501d0f053dd6a,
          mid_checkPositive_ebc26dcaf4761286,
          mid_checkRectangular_426d992091f69be4,
          mid_concatenate_bef18f92bdb5a3c0,
          mid_convolve_0f29b7d9f77b462e,
          mid_cosAngle_1ce76fb6ff382da9,
          mid_distance_1ce76fb6ff382da9,
          mid_distance_f5d09d3e281c0a57,
          mid_distance1_1ce76fb6ff382da9,
          mid_distance1_05ddcb51512740f6,
          mid_distanceInf_1ce76fb6ff382da9,
          mid_distanceInf_05ddcb51512740f6,
          mid_ebeAdd_0f29b7d9f77b462e,
          mid_ebeDivide_0f29b7d9f77b462e,
          mid_ebeMultiply_0f29b7d9f77b462e,
          mid_ebeSubtract_0f29b7d9f77b462e,
          mid_equals_038dd22190ceb95d,
          mid_equals_5418f6d9d0f17dae,
          mid_equals_70b45f0447f4c6bc,
          mid_equals_3f2e961d1ff5453d,
          mid_equals_289f0db12278154e,
          mid_equals_297ade561ff86626,
          mid_equalsIncludingNaN_5418f6d9d0f17dae,
          mid_equalsIncludingNaN_70b45f0447f4c6bc,
          mid_isMonotonic_3f97c747566e1d05,
          mid_isMonotonic_cbbb492f3fa76ff1,
          mid_linearCombination_1ce76fb6ff382da9,
          mid_linearCombination_04175aacb25dae17,
          mid_linearCombination_88076de049bf2857,
          mid_linearCombination_72fae1bb330e5ce4,
          mid_natural_d7f52bcc4a12ae58,
          mid_normalizeArray_1657efb2f051723b,
          mid_safeNorm_f05cb8c6dfd5e0b9,
          mid_scale_7b8ea6f669f90156,
          mid_scaleInPlace_b67fd0977346c69b,
          mid_sequence_6846881cc754d53e,
          mid_shuffle_3b603738d1eb3233,
          mid_shuffle_dfe4a2ac5d415b58,
          mid_shuffle_bb505516bcbf5b0a,
          mid_shuffle_1983ea6f7aab64a4,
          mid_sortInPlace_cdae0ed71cfef3d1,
          mid_sortInPlace_5c5c42e2ad4a66a0,
          mid_unique_4b742fe429c22ba8,
          mid_verifyValues_e0b0cd3a71c9ef19,
          mid_verifyValues_2122a68f144f771e,
          mid_verifyValues_8c88073a43a33764,
          mid_verifyValues_fef8df734a3fe4b4,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MathArrays(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MathArrays(const MathArrays& obj) : ::java::lang::Object(obj) {}

        static JArray< ::org::hipparchus::FieldElement > buildArray(const ::org::hipparchus::Field &, jint);
        static JArray< JArray< ::org::hipparchus::FieldElement > > buildArray(const ::org::hipparchus::Field &, jint, jint);
        static JArray< JArray< JArray< ::org::hipparchus::FieldElement > > > buildArray(const ::org::hipparchus::Field &, jint, jint, jint);
        static void checkEqualLength(const JArray< jdouble > &, const JArray< jdouble > &);
        static void checkEqualLength(const JArray< jint > &, const JArray< jint > &);
        static void checkEqualLength(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &);
        static jboolean checkEqualLength(const JArray< jdouble > &, const JArray< jdouble > &, jboolean);
        static jboolean checkEqualLength(const JArray< jint > &, const JArray< jint > &, jboolean);
        static jboolean checkEqualLength(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &, jboolean);
        static void checkNonNegative(const JArray< jlong > &);
        static void checkNonNegative(const JArray< JArray< jlong > > &);
        static void checkNotNaN(const JArray< jdouble > &);
        static void checkOrder(const JArray< jdouble > &);
        static void checkOrder(const JArray< ::org::hipparchus::CalculusFieldElement > &);
        static void checkOrder(const JArray< jdouble > &, const ::org::hipparchus::util::MathArrays$OrderDirection &, jboolean);
        static void checkOrder(const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::hipparchus::util::MathArrays$OrderDirection &, jboolean);
        static jboolean checkOrder(const JArray< jdouble > &, const ::org::hipparchus::util::MathArrays$OrderDirection &, jboolean, jboolean);
        static jboolean checkOrder(const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::hipparchus::util::MathArrays$OrderDirection &, jboolean, jboolean);
        static void checkPositive(const JArray< jdouble > &);
        static void checkRectangular(const JArray< JArray< jlong > > &);
        static JArray< jdouble > concatenate(const JArray< JArray< jdouble > > &);
        static JArray< jdouble > convolve(const JArray< jdouble > &, const JArray< jdouble > &);
        static jdouble cosAngle(const JArray< jdouble > &, const JArray< jdouble > &);
        static jdouble distance(const JArray< jdouble > &, const JArray< jdouble > &);
        static jdouble distance(const JArray< jint > &, const JArray< jint > &);
        static jdouble distance1(const JArray< jdouble > &, const JArray< jdouble > &);
        static jint distance1(const JArray< jint > &, const JArray< jint > &);
        static jdouble distanceInf(const JArray< jdouble > &, const JArray< jdouble > &);
        static jint distanceInf(const JArray< jint > &, const JArray< jint > &);
        static JArray< jdouble > ebeAdd(const JArray< jdouble > &, const JArray< jdouble > &);
        static JArray< jdouble > ebeDivide(const JArray< jdouble > &, const JArray< jdouble > &);
        static JArray< jdouble > ebeMultiply(const JArray< jdouble > &, const JArray< jdouble > &);
        static JArray< jdouble > ebeSubtract(const JArray< jdouble > &, const JArray< jdouble > &);
        static jboolean equals(const JArray< jbyte > &, const JArray< jbyte > &);
        static jboolean equals(const JArray< jdouble > &, const JArray< jdouble > &);
        static jboolean equals(const JArray< jfloat > &, const JArray< jfloat > &);
        static jboolean equals(const JArray< jint > &, const JArray< jint > &);
        static jboolean equals(const JArray< jlong > &, const JArray< jlong > &);
        static jboolean equals(const JArray< jshort > &, const JArray< jshort > &);
        static jboolean equalsIncludingNaN(const JArray< jdouble > &, const JArray< jdouble > &);
        static jboolean equalsIncludingNaN(const JArray< jfloat > &, const JArray< jfloat > &);
        static jboolean isMonotonic(const JArray< jdouble > &, const ::org::hipparchus::util::MathArrays$OrderDirection &, jboolean);
        static jboolean isMonotonic(const JArray< ::java::lang::Comparable > &, const ::org::hipparchus::util::MathArrays$OrderDirection &, jboolean);
        static jdouble linearCombination(const JArray< jdouble > &, const JArray< jdouble > &);
        static jdouble linearCombination(jdouble, jdouble, jdouble, jdouble);
        static jdouble linearCombination(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
        static jdouble linearCombination(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
        static JArray< jint > natural(jint);
        static JArray< jdouble > normalizeArray(const JArray< jdouble > &, jdouble);
        static jdouble safeNorm(const JArray< jdouble > &);
        static JArray< jdouble > scale(jdouble, const JArray< jdouble > &);
        static void scaleInPlace(jdouble, const JArray< jdouble > &);
        static JArray< jint > sequence(jint, jint, jint);
        static void shuffle(const JArray< jint > &);
        static void shuffle(const JArray< jint > &, const ::org::hipparchus::random::RandomGenerator &);
        static void shuffle(const JArray< jint > &, jint, const ::org::hipparchus::util::MathArrays$Position &);
        static void shuffle(const JArray< jint > &, jint, const ::org::hipparchus::util::MathArrays$Position &, const ::org::hipparchus::random::RandomGenerator &);
        static void sortInPlace(const JArray< jdouble > &, const JArray< JArray< jdouble > > &);
        static void sortInPlace(const JArray< jdouble > &, const ::org::hipparchus::util::MathArrays$OrderDirection &, const JArray< JArray< jdouble > > &);
        static JArray< jdouble > unique(const JArray< jdouble > &);
        static jboolean verifyValues(const JArray< jdouble > &, jint, jint);
        static jboolean verifyValues(const JArray< jdouble > &, const JArray< jdouble > &, jint, jint);
        static jboolean verifyValues(const JArray< jdouble > &, jint, jint, jboolean);
        static jboolean verifyValues(const JArray< jdouble > &, const JArray< jdouble > &, jint, jint, jboolean);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(MathArrays);
      extern PyTypeObject *PY_TYPE(MathArrays);

      class t_MathArrays {
      public:
        PyObject_HEAD
        MathArrays object;
        static PyObject *wrap_Object(const MathArrays&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
