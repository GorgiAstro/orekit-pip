#ifndef org_hipparchus_util_MathArrays_H
#define org_hipparchus_util_MathArrays_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
    namespace random {
      class RandomGenerator;
    }
    class Field;
    namespace util {
      class MathArrays$OrderDirection;
      class MathArrays$Position;
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
          mid_buildArray_80a6a1ce74027d71,
          mid_buildArray_d3a891e7c6b40b5a,
          mid_buildArray_5d545c1f91daf146,
          mid_checkEqualLength_b15baa0161a4e9c7,
          mid_checkEqualLength_e8629e72f2d3b3fa,
          mid_checkEqualLength_2d4b2d13ddc9fb6a,
          mid_checkEqualLength_393011d94d739a17,
          mid_checkEqualLength_27857a2f8c83f80b,
          mid_checkEqualLength_1fa55763facf3d95,
          mid_checkNonNegative_17fd280b39a6ae4b,
          mid_checkNonNegative_91c722539daade34,
          mid_checkNotNaN_ab69da052b88f50c,
          mid_checkOrder_ab69da052b88f50c,
          mid_checkOrder_8b0f7facc8a6a46e,
          mid_checkOrder_394af56549787f7e,
          mid_checkOrder_9cfc143ead3ed71b,
          mid_checkOrder_5ada72c1cb379bc6,
          mid_checkOrder_f0c65bca39d2b36e,
          mid_checkPositive_ab69da052b88f50c,
          mid_checkRectangular_91c722539daade34,
          mid_concatenate_39540fc7a1c0be02,
          mid_convolve_1badeb24cd1b9588,
          mid_cosAngle_3207f9c2ae7271d9,
          mid_distance_3207f9c2ae7271d9,
          mid_distance_923288a0d1ba08c3,
          mid_distance1_3207f9c2ae7271d9,
          mid_distance1_f95aa64a2259804a,
          mid_distanceInf_3207f9c2ae7271d9,
          mid_distanceInf_f95aa64a2259804a,
          mid_ebeAdd_1badeb24cd1b9588,
          mid_ebeDivide_1badeb24cd1b9588,
          mid_ebeMultiply_1badeb24cd1b9588,
          mid_ebeSubtract_1badeb24cd1b9588,
          mid_equals_647cf52483fdbbfb,
          mid_equals_e686b66104c2bcdb,
          mid_equals_ae971d88c358a487,
          mid_equals_a3d1d51d22e4faac,
          mid_equals_00519a977ecc68a6,
          mid_equals_264d1cfb985cead2,
          mid_equalsIncludingNaN_e686b66104c2bcdb,
          mid_equalsIncludingNaN_ae971d88c358a487,
          mid_isMonotonic_3aec7f9cfa63d6a2,
          mid_isMonotonic_a72b37c3f2d4eb72,
          mid_linearCombination_3207f9c2ae7271d9,
          mid_linearCombination_08eba2463884b341,
          mid_linearCombination_7f9459f01496f8b0,
          mid_linearCombination_f3af7376f9b4ca90,
          mid_natural_7247c1a113e968de,
          mid_normalizeArray_ffc9125fb767957a,
          mid_safeNorm_b060e4326765ccf1,
          mid_scale_91fbb4072ae7ce9a,
          mid_scaleInPlace_d606d0c99c70c093,
          mid_sequence_f556b53ccd261e0b,
          mid_shuffle_86a2769cb881d388,
          mid_shuffle_731fe975a683f34a,
          mid_shuffle_89dc86ae4bb0adf7,
          mid_shuffle_7526ec75451ed2ad,
          mid_sortInPlace_134a5d9f7619d4a2,
          mid_sortInPlace_7a3c0d46712c2fd1,
          mid_unique_14dee4cb8cc3e959,
          mid_verifyValues_b08314b77f62cf14,
          mid_verifyValues_967254fedd78ae78,
          mid_verifyValues_919c5fb93dd70ef8,
          mid_verifyValues_50d358db3bbe3be9,
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
