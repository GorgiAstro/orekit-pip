#ifndef org_hipparchus_util_MathArrays_H
#define org_hipparchus_util_MathArrays_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    namespace util {
      class MathArrays$OrderDirection;
      class MathArrays$Position;
    }
    class Field;
    class FieldElement;
    namespace random {
      class RandomGenerator;
    }
    class CalculusFieldElement;
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
          mid_buildArray_d626a1d766d66b94,
          mid_buildArray_537724343e50c1ea,
          mid_buildArray_780237ee7f6e7279,
          mid_checkEqualLength_64100e41ba74de8f,
          mid_checkEqualLength_6e41e5beb7528b4b,
          mid_checkEqualLength_7709cb51638b2622,
          mid_checkEqualLength_a57658a844146040,
          mid_checkEqualLength_a0dee156b4957108,
          mid_checkEqualLength_1a8d7eef37b613ce,
          mid_checkNonNegative_22b2c2bc86e56cb0,
          mid_checkNonNegative_ae7006da23625df1,
          mid_checkNotNaN_a71c45509eaf92d1,
          mid_checkOrder_a71c45509eaf92d1,
          mid_checkOrder_77e61a645c496adc,
          mid_checkOrder_621daf0814da4ad9,
          mid_checkOrder_399a4de0a26a5a0e,
          mid_checkOrder_ac761f2af37da295,
          mid_checkOrder_a6a5e5a824e78547,
          mid_checkPositive_a71c45509eaf92d1,
          mid_checkRectangular_ae7006da23625df1,
          mid_concatenate_fb70975f75a3a1b5,
          mid_convolve_8238c1ebef563b00,
          mid_cosAngle_b01af8a77d4df96f,
          mid_distance_b01af8a77d4df96f,
          mid_distance_0cf4f7e770b28a5d,
          mid_distance1_b01af8a77d4df96f,
          mid_distance1_b444938e9c64511a,
          mid_distanceInf_b01af8a77d4df96f,
          mid_distanceInf_b444938e9c64511a,
          mid_ebeAdd_8238c1ebef563b00,
          mid_ebeDivide_8238c1ebef563b00,
          mid_ebeMultiply_8238c1ebef563b00,
          mid_ebeSubtract_8238c1ebef563b00,
          mid_equals_7f0e96d531737149,
          mid_equals_ae9ef40b81aa3737,
          mid_equals_a03930c526253e6a,
          mid_equals_f92b869f534c4ff0,
          mid_equals_f0a71ca3a8bba19c,
          mid_equals_ae43abd99d1296a0,
          mid_equalsIncludingNaN_ae9ef40b81aa3737,
          mid_equalsIncludingNaN_a03930c526253e6a,
          mid_isMonotonic_31a3c12e09c5659f,
          mid_isMonotonic_a21de30dd73fe271,
          mid_linearCombination_b01af8a77d4df96f,
          mid_linearCombination_45d926aea7231320,
          mid_linearCombination_79d84db2e9af7a7b,
          mid_linearCombination_c5f64c12ff28e41f,
          mid_natural_adb0f0485f08dbd0,
          mid_normalizeArray_8c3d418d3dab4cd1,
          mid_safeNorm_a40ce4fdf6559ac0,
          mid_scale_bfc955188bf36f2c,
          mid_scaleInPlace_bb630ae4b8ab9248,
          mid_sequence_50ae6a9c9fe285e4,
          mid_shuffle_d43202153dd284f7,
          mid_shuffle_b1406e8980554e56,
          mid_shuffle_ba62e577109fe8bf,
          mid_shuffle_68dad20f8ed9d9fb,
          mid_sortInPlace_ef9c3ec1d213ea68,
          mid_sortInPlace_f41709706ab996fb,
          mid_unique_51f624c89851da7e,
          mid_verifyValues_afec43a80d5dabc9,
          mid_verifyValues_adbb86270596edb0,
          mid_verifyValues_69212e0bd876f633,
          mid_verifyValues_2f00057a4c517fed,
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
