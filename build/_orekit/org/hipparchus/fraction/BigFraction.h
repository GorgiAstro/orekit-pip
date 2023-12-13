#ifndef org_hipparchus_fraction_BigFraction_H
#define org_hipparchus_fraction_BigFraction_H

#include "java/lang/Number.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Pair;
    }
    namespace fraction {
      class BigFraction$ConvergenceTest;
      class BigFractionField;
      class BigFraction;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
    class FieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
    class Boolean;
    class String;
    class Comparable;
  }
  namespace util {
    namespace stream {
      class Stream;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace fraction {

      class BigFraction : public ::java::lang::Number {
       public:
        enum {
          mid_init$_8ba9fe7a847cecad,
          mid_init$_44ed599e93e8a30c,
          mid_init$_3d7dd2314a0dd456,
          mid_init$_3313c75e3e16c428,
          mid_init$_bdc6c8322b49cc04,
          mid_init$_3246a605cef69701,
          mid_init$_2aa803b9073e6a76,
          mid_abs_7369b54299dcf892,
          mid_add_5b32b9d46e03e856,
          mid_add_e1eafac49c6f04c1,
          mid_add_5e5367a598c17c54,
          mid_compareTo_a8f11b01dfcd000b,
          mid_convergent_7f045a1e9d117075,
          mid_convergents_0df0904681fc943b,
          mid_divide_5b32b9d46e03e856,
          mid_divide_e1eafac49c6f04c1,
          mid_divide_5e5367a598c17c54,
          mid_doubleValue_b74f83833fdad017,
          mid_equals_460c5e2d9d51c6cc,
          mid_floatValue_1fb1bf0772ae5db7,
          mid_getDenominatorAsInt_55546ef6a647f39b,
          mid_getDenominatorAsLong_6c0ce7e438e5ded4,
          mid_getField_23be7e86283dd98a,
          mid_getNumeratorAsInt_55546ef6a647f39b,
          mid_getNumeratorAsLong_6c0ce7e438e5ded4,
          mid_getReal_b74f83833fdad017,
          mid_getReducedFraction_4b1511d974d66351,
          mid_hashCode_55546ef6a647f39b,
          mid_intValue_55546ef6a647f39b,
          mid_isInteger_9ab94ac1dc23b105,
          mid_longValue_6c0ce7e438e5ded4,
          mid_multiply_5b32b9d46e03e856,
          mid_multiply_e1eafac49c6f04c1,
          mid_multiply_5e5367a598c17c54,
          mid_negate_7369b54299dcf892,
          mid_percentageValue_b74f83833fdad017,
          mid_pow_04fd0666b613d2ab,
          mid_pow_e1eafac49c6f04c1,
          mid_pow_5e5367a598c17c54,
          mid_reciprocal_7369b54299dcf892,
          mid_reduce_7369b54299dcf892,
          mid_signum_55546ef6a647f39b,
          mid_subtract_5b32b9d46e03e856,
          mid_subtract_e1eafac49c6f04c1,
          mid_subtract_5e5367a598c17c54,
          mid_toString_1c1fa1e935d6cdcf,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BigFraction(jobject obj) : ::java::lang::Number(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BigFraction(const BigFraction& obj) : ::java::lang::Number(obj) {}

        static BigFraction *FOUR_FIFTHS;
        static BigFraction *MINUS_ONE;
        static BigFraction *ONE;
        static BigFraction *ONE_FIFTH;
        static BigFraction *ONE_HALF;
        static BigFraction *ONE_QUARTER;
        static BigFraction *ONE_THIRD;
        static BigFraction *THREE_FIFTHS;
        static BigFraction *THREE_QUARTERS;
        static BigFraction *TWO;
        static BigFraction *TWO_FIFTHS;
        static BigFraction *TWO_QUARTERS;
        static BigFraction *TWO_THIRDS;
        static BigFraction *ZERO;

        BigFraction(jdouble);
        BigFraction(jint);
        BigFraction(jlong);
        BigFraction(jint, jint);
        BigFraction(jdouble, jlong);
        BigFraction(jlong, jlong);
        BigFraction(jdouble, jdouble, jint);

        BigFraction abs() const;
        BigFraction add(const BigFraction &) const;
        BigFraction add(jint) const;
        BigFraction add(jlong) const;
        jint compareTo(const BigFraction &) const;
        static ::org::hipparchus::util::Pair convergent(jdouble, jint, const ::org::hipparchus::fraction::BigFraction$ConvergenceTest &);
        static ::java::util::stream::Stream convergents(jdouble, jint);
        BigFraction divide(const BigFraction &) const;
        BigFraction divide(jint) const;
        BigFraction divide(jlong) const;
        jdouble doubleValue() const;
        jboolean equals(const ::java::lang::Object &) const;
        jfloat floatValue() const;
        jint getDenominatorAsInt() const;
        jlong getDenominatorAsLong() const;
        ::org::hipparchus::fraction::BigFractionField getField() const;
        jint getNumeratorAsInt() const;
        jlong getNumeratorAsLong() const;
        jdouble getReal() const;
        static BigFraction getReducedFraction(jint, jint);
        jint hashCode() const;
        jint intValue() const;
        jboolean isInteger() const;
        jlong longValue() const;
        BigFraction multiply(const BigFraction &) const;
        BigFraction multiply(jint) const;
        BigFraction multiply(jlong) const;
        BigFraction negate() const;
        jdouble percentageValue() const;
        jdouble pow(jdouble) const;
        BigFraction pow(jint) const;
        BigFraction pow(jlong) const;
        BigFraction reciprocal() const;
        BigFraction reduce() const;
        jint signum() const;
        BigFraction subtract(const BigFraction &) const;
        BigFraction subtract(jint) const;
        BigFraction subtract(jlong) const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace fraction {
      extern PyType_Def PY_TYPE_DEF(BigFraction);
      extern PyTypeObject *PY_TYPE(BigFraction);

      class t_BigFraction {
      public:
        PyObject_HEAD
        BigFraction object;
        static PyObject *wrap_Object(const BigFraction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
