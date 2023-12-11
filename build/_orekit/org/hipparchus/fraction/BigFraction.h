#ifndef org_hipparchus_fraction_BigFraction_H
#define org_hipparchus_fraction_BigFraction_H

#include "java/lang/Number.h"

namespace org {
  namespace hipparchus {
    class FieldElement;
    namespace fraction {
      class BigFraction;
      class BigFraction$ConvergenceTest;
      class BigFractionField;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
    namespace util {
      class Pair;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Boolean;
    class Object;
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
          mid_init$_10f281d777284cea,
          mid_init$_a3da1a935cb37f7b,
          mid_init$_3cd6a6b354c6aa22,
          mid_init$_a84c9a223722150c,
          mid_init$_b6065b86e67f80de,
          mid_init$_84a4ee84786818cf,
          mid_init$_427af08acba367ca,
          mid_abs_92546681fd225453,
          mid_add_df625784438fce94,
          mid_add_d98aa95d9530f843,
          mid_add_75d24c38a9b7b29b,
          mid_compareTo_83725ddd1b989a7e,
          mid_convergent_2f108a8fda179cc0,
          mid_convergents_9f7d72ee529fa4ce,
          mid_divide_df625784438fce94,
          mid_divide_d98aa95d9530f843,
          mid_divide_75d24c38a9b7b29b,
          mid_doubleValue_557b8123390d8d0c,
          mid_equals_221e8e85cb385209,
          mid_floatValue_04fe014f7609dc26,
          mid_getDenominatorAsInt_412668abc8d889e9,
          mid_getDenominatorAsLong_9e26256fb0d384a2,
          mid_getField_b141d0462bc50421,
          mid_getNumeratorAsInt_412668abc8d889e9,
          mid_getNumeratorAsLong_9e26256fb0d384a2,
          mid_getReal_557b8123390d8d0c,
          mid_getReducedFraction_3c5825c429555f3b,
          mid_hashCode_412668abc8d889e9,
          mid_intValue_412668abc8d889e9,
          mid_isInteger_89b302893bdbe1f1,
          mid_longValue_9e26256fb0d384a2,
          mid_multiply_df625784438fce94,
          mid_multiply_d98aa95d9530f843,
          mid_multiply_75d24c38a9b7b29b,
          mid_negate_92546681fd225453,
          mid_percentageValue_557b8123390d8d0c,
          mid_pow_7e960cd6eee376d8,
          mid_pow_d98aa95d9530f843,
          mid_pow_75d24c38a9b7b29b,
          mid_reciprocal_92546681fd225453,
          mid_reduce_92546681fd225453,
          mid_signum_412668abc8d889e9,
          mid_subtract_df625784438fce94,
          mid_subtract_d98aa95d9530f843,
          mid_subtract_75d24c38a9b7b29b,
          mid_toString_3cffd47377eca18a,
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
