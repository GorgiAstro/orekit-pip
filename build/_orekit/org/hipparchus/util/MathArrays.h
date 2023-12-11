#ifndef org_hipparchus_util_MathArrays_H
#define org_hipparchus_util_MathArrays_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class MathArrays$Position;
      class MathArrays$OrderDirection;
    }
    class FieldElement;
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
      class MathRuntimeException;
    }
    namespace random {
      class RandomGenerator;
    }
    class CalculusFieldElement;
    class Field;
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
          mid_buildArray_cc1a24bbd64f47d6,
          mid_buildArray_918e914ae6927f78,
          mid_buildArray_bf02a5b7b48e23fe,
          mid_checkEqualLength_ab4840ba016ef1da,
          mid_checkEqualLength_2f87d6c2a43180ff,
          mid_checkEqualLength_2c0fd42a693364fa,
          mid_checkEqualLength_e4da1fc662513bd0,
          mid_checkEqualLength_698c1440c3cd002e,
          mid_checkEqualLength_ea2ade9a62eeb9ec,
          mid_checkNonNegative_b8d088127dcc34ef,
          mid_checkNonNegative_f40ad1a354d03b89,
          mid_checkNotNaN_cc18240f4a737f14,
          mid_checkOrder_cc18240f4a737f14,
          mid_checkOrder_5d9c9afaca2e497c,
          mid_checkOrder_89ee3544b02ad6f9,
          mid_checkOrder_e5501a88db9bc72b,
          mid_checkOrder_bf1fab8415688b27,
          mid_checkOrder_f13890a7012c8e1c,
          mid_checkPositive_cc18240f4a737f14,
          mid_checkRectangular_f40ad1a354d03b89,
          mid_concatenate_f19c0141146dd11b,
          mid_convolve_d2593442847fe350,
          mid_cosAngle_628a76297e217f13,
          mid_distance_628a76297e217f13,
          mid_distance_e49dbe74159ed118,
          mid_distance1_628a76297e217f13,
          mid_distance1_f60ba2e14f6d8c9c,
          mid_distanceInf_628a76297e217f13,
          mid_distanceInf_f60ba2e14f6d8c9c,
          mid_ebeAdd_d2593442847fe350,
          mid_ebeDivide_d2593442847fe350,
          mid_ebeMultiply_d2593442847fe350,
          mid_ebeSubtract_d2593442847fe350,
          mid_equals_d5b882f16e78e133,
          mid_equals_3c9cd66399ef44d7,
          mid_equals_3a3ed4baa87ab62d,
          mid_equals_3a89abee8ad1e7d2,
          mid_equals_9f3fe168122d3e43,
          mid_equals_b788c922a3ed1ff3,
          mid_equalsIncludingNaN_3c9cd66399ef44d7,
          mid_equalsIncludingNaN_3a3ed4baa87ab62d,
          mid_isMonotonic_0362324c8a2e5805,
          mid_isMonotonic_de3cbaea4121081e,
          mid_linearCombination_628a76297e217f13,
          mid_linearCombination_79d60f5d1a9d8623,
          mid_linearCombination_9f42b6fd9d0f2606,
          mid_linearCombination_34decd667cde93a3,
          mid_natural_014107aa2fd99303,
          mid_normalizeArray_59ea33beffed37b5,
          mid_safeNorm_86c4a0582e0747ce,
          mid_scale_31b9a2982d73e37a,
          mid_scaleInPlace_092013acd44a9e63,
          mid_sequence_ebc3194797d38989,
          mid_shuffle_ec63cb8a58ef5a54,
          mid_shuffle_7d86656f508ee25c,
          mid_shuffle_c4ed6b04af6788e3,
          mid_shuffle_272558de9fb3be98,
          mid_sortInPlace_d28c10701e55f94c,
          mid_sortInPlace_33ef5b09ab6b2ec9,
          mid_unique_1db7c087750eaffe,
          mid_verifyValues_8ceff153711ac571,
          mid_verifyValues_8f9a240c089e2ce0,
          mid_verifyValues_ec609308d4860815,
          mid_verifyValues_eac1096da7fabd15,
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
