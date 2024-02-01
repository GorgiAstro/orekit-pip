#ifndef org_hipparchus_fraction_BigFraction_H
#define org_hipparchus_fraction_BigFraction_H

#include "java/lang/Number.h"

namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Boolean;
    class Class;
    class Object;
    class String;
    class Comparable;
  }
}
namespace org {
  namespace hipparchus {
    namespace fraction {
      class BigFractionField;
      class BigFraction$ConvergenceTest;
      class BigFraction;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
    class FieldElement;
    namespace util {
      class Pair;
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
          mid_init$_1ad26e8c8c0cd65b,
          mid_init$_8fd427ab23829bf5,
          mid_init$_f5bbab7e97879358,
          mid_init$_b5d23e6c0858e8ed,
          mid_init$_242be705ced18dc0,
          mid_init$_8d15eb7d155f3768,
          mid_init$_905e65280a4e6722,
          mid_abs_f9f39221bd88c021,
          mid_add_80223138235de85f,
          mid_add_9c4d7540ae70f6e0,
          mid_add_7074c12be2b48097,
          mid_compareTo_c11007b8674ea26b,
          mid_convergent_8a9f3a38eb05d8ed,
          mid_convergents_df90c0ab75ef97f0,
          mid_divide_80223138235de85f,
          mid_divide_9c4d7540ae70f6e0,
          mid_divide_7074c12be2b48097,
          mid_doubleValue_9981f74b2d109da6,
          mid_equals_72faff9b05f5ed5e,
          mid_floatValue_0e3b995f823d65ff,
          mid_getDenominatorAsInt_d6ab429752e7c267,
          mid_getDenominatorAsLong_42c72b98e3c2e08a,
          mid_getField_31dd0998fe2402b3,
          mid_getNumeratorAsInt_d6ab429752e7c267,
          mid_getNumeratorAsLong_42c72b98e3c2e08a,
          mid_getReal_9981f74b2d109da6,
          mid_getReducedFraction_efa66996e67742d4,
          mid_hashCode_d6ab429752e7c267,
          mid_intValue_d6ab429752e7c267,
          mid_isInteger_eee3de00fe971136,
          mid_longValue_42c72b98e3c2e08a,
          mid_multiply_80223138235de85f,
          mid_multiply_9c4d7540ae70f6e0,
          mid_multiply_7074c12be2b48097,
          mid_negate_f9f39221bd88c021,
          mid_percentageValue_9981f74b2d109da6,
          mid_pow_bf28ed64d6e8576b,
          mid_pow_9c4d7540ae70f6e0,
          mid_pow_7074c12be2b48097,
          mid_reciprocal_f9f39221bd88c021,
          mid_reduce_f9f39221bd88c021,
          mid_signum_d6ab429752e7c267,
          mid_subtract_80223138235de85f,
          mid_subtract_9c4d7540ae70f6e0,
          mid_subtract_7074c12be2b48097,
          mid_toString_d2c8eb4129821f0e,
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
