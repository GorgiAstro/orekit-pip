#ifndef org_hipparchus_fraction_BigFraction_H
#define org_hipparchus_fraction_BigFraction_H

#include "java/lang/Number.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      class BigFraction;
      class BigFraction$ConvergenceTest;
      class BigFractionField;
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    class FieldElement;
    namespace util {
      class Pair;
    }
  }
}
namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
    class Object;
    class Boolean;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace fraction {

      class BigFraction : public ::java::lang::Number {
       public:
        enum {
          mid_init$_77e0f9a1f260e2e5,
          mid_init$_0a2a1ac2721c0336,
          mid_init$_fefb08975c10f0a1,
          mid_init$_8dbc1129a3c2557a,
          mid_init$_2e88f70c685271db,
          mid_init$_56c10d001ee56f39,
          mid_init$_b05c288d5068eccb,
          mid_abs_c16be17dc5e53511,
          mid_add_6b80d875d7eb2939,
          mid_add_7a7ef07914e4c82c,
          mid_add_82ed7d805db56f5a,
          mid_compareTo_0887fc20c1874b54,
          mid_convergent_896247fe01223ff9,
          mid_convergents_d9c8edb42f215879,
          mid_divide_6b80d875d7eb2939,
          mid_divide_7a7ef07914e4c82c,
          mid_divide_82ed7d805db56f5a,
          mid_doubleValue_456d9a2f64d6b28d,
          mid_equals_229c87223f486349,
          mid_floatValue_966c782d3223854d,
          mid_getDenominatorAsInt_f2f64475e4580546,
          mid_getDenominatorAsLong_a27fc9afd27e559d,
          mid_getField_5eaa6afab444a02c,
          mid_getNumeratorAsInt_f2f64475e4580546,
          mid_getNumeratorAsLong_a27fc9afd27e559d,
          mid_getReal_456d9a2f64d6b28d,
          mid_getReducedFraction_1d71751127da178f,
          mid_hashCode_f2f64475e4580546,
          mid_intValue_f2f64475e4580546,
          mid_isInteger_e470b6d9e0d979db,
          mid_longValue_a27fc9afd27e559d,
          mid_multiply_6b80d875d7eb2939,
          mid_multiply_7a7ef07914e4c82c,
          mid_multiply_82ed7d805db56f5a,
          mid_negate_c16be17dc5e53511,
          mid_percentageValue_456d9a2f64d6b28d,
          mid_pow_0ba5fed9597b693e,
          mid_pow_7a7ef07914e4c82c,
          mid_pow_82ed7d805db56f5a,
          mid_reciprocal_c16be17dc5e53511,
          mid_reduce_c16be17dc5e53511,
          mid_signum_f2f64475e4580546,
          mid_subtract_6b80d875d7eb2939,
          mid_subtract_7a7ef07914e4c82c,
          mid_subtract_82ed7d805db56f5a,
          mid_toString_0090f7797e403f43,
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
