#ifndef org_hipparchus_util_MathArrays_H
#define org_hipparchus_util_MathArrays_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace exception {
      class NullArgumentException;
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
    namespace util {
      class MathArrays$Position;
      class MathArrays$OrderDirection;
    }
    namespace random {
      class RandomGenerator;
    }
    class Field;
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
          mid_buildArray_53a8968856aac728,
          mid_buildArray_9d0b4d67c7d5ec91,
          mid_buildArray_bfb3642e16852529,
          mid_checkEqualLength_e1f4b15468f5564a,
          mid_checkEqualLength_b091d33670ea17ab,
          mid_checkEqualLength_cbc98e7d0c0477db,
          mid_checkEqualLength_2a23e9f4a2692a23,
          mid_checkEqualLength_ef7981f2c05315da,
          mid_checkEqualLength_61bb38d449624a13,
          mid_checkNonNegative_c57942992c8467a1,
          mid_checkNonNegative_ade5c97d2456ed21,
          mid_checkNotNaN_fa9d415d19f69361,
          mid_checkOrder_fa9d415d19f69361,
          mid_checkOrder_72479ee08453ef97,
          mid_checkOrder_9825f8ead88fc7a2,
          mid_checkOrder_7d4cfe1aa8d9500e,
          mid_checkOrder_ba626246740b4f78,
          mid_checkOrder_5e803c62cb962490,
          mid_checkPositive_fa9d415d19f69361,
          mid_checkRectangular_ade5c97d2456ed21,
          mid_concatenate_c2fd47c0f811c269,
          mid_convolve_96bbba26ca51c0d1,
          mid_cosAngle_b561c6892e9976f8,
          mid_distance_b561c6892e9976f8,
          mid_distance_c7a20f1226fb06ea,
          mid_distance1_b561c6892e9976f8,
          mid_distance1_779c476bcabb05f3,
          mid_distanceInf_b561c6892e9976f8,
          mid_distanceInf_779c476bcabb05f3,
          mid_ebeAdd_96bbba26ca51c0d1,
          mid_ebeDivide_96bbba26ca51c0d1,
          mid_ebeMultiply_96bbba26ca51c0d1,
          mid_ebeSubtract_96bbba26ca51c0d1,
          mid_equals_026a317eb6da308c,
          mid_equals_b013f01484dd6b19,
          mid_equals_b2dc548396b699a5,
          mid_equals_f8ca155cbadf2a73,
          mid_equals_739455d93f7b2089,
          mid_equals_266b3ca27c6bb5ac,
          mid_equalsIncludingNaN_b013f01484dd6b19,
          mid_equalsIncludingNaN_b2dc548396b699a5,
          mid_isMonotonic_303cdb6f1e3d1d20,
          mid_isMonotonic_ed716723e463a03e,
          mid_linearCombination_b561c6892e9976f8,
          mid_linearCombination_0f015b8be9d2dc40,
          mid_linearCombination_07e50dbdbc6e25b6,
          mid_linearCombination_982084a63a0acdbd,
          mid_natural_10b428b076a044c1,
          mid_normalizeArray_7c03fc65848ac490,
          mid_safeNorm_9dc1ec0bcc0a9a29,
          mid_scale_125ce48de7dbfde5,
          mid_scaleInPlace_f617b8481082c6ea,
          mid_sequence_4cce8278046f494a,
          mid_shuffle_d147d7ce001e2d45,
          mid_shuffle_cd72f2edc6fe3699,
          mid_shuffle_4403e14380343a86,
          mid_shuffle_5274baa35baf0207,
          mid_sortInPlace_0942607a80e88c17,
          mid_sortInPlace_b127a748d81177ab,
          mid_unique_ac3d742ccc742f22,
          mid_verifyValues_ecd0e94e44eeb80d,
          mid_verifyValues_2ce8032ca4cc67c5,
          mid_verifyValues_fa5076ba832da619,
          mid_verifyValues_44e8cc5a12cb39a9,
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
