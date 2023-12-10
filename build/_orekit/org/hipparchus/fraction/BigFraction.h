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
    namespace util {
      class Pair;
    }
    class FieldElement;
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
          mid_init$_17db3a65980d3441,
          mid_init$_99803b0791f320ff,
          mid_init$_3a8e7649f31fdb20,
          mid_init$_6f37635c3285dbdf,
          mid_init$_937e8350af41f9fd,
          mid_init$_b3c0d262fb9ab281,
          mid_init$_01fb2c777e5def32,
          mid_abs_785133ac6602777f,
          mid_add_92e8b97ee33171ea,
          mid_add_ffea0fd1f84a1bdc,
          mid_add_20c744803059662a,
          mid_compareTo_2353eebd82c14db1,
          mid_convergent_7b49999adb131a29,
          mid_convergents_6e644ae679b81b73,
          mid_divide_92e8b97ee33171ea,
          mid_divide_ffea0fd1f84a1bdc,
          mid_divide_20c744803059662a,
          mid_doubleValue_dff5885c2c873297,
          mid_equals_65c7d273e80d497a,
          mid_floatValue_5adccb493ada08e8,
          mid_getDenominatorAsInt_570ce0828f81a2c1,
          mid_getDenominatorAsLong_492808a339bfa35f,
          mid_getField_bd5b8d6d09b3bc67,
          mid_getNumeratorAsInt_570ce0828f81a2c1,
          mid_getNumeratorAsLong_492808a339bfa35f,
          mid_getReal_dff5885c2c873297,
          mid_getReducedFraction_ec3241b67099e973,
          mid_hashCode_570ce0828f81a2c1,
          mid_intValue_570ce0828f81a2c1,
          mid_isInteger_b108b35ef48e27bd,
          mid_longValue_492808a339bfa35f,
          mid_multiply_92e8b97ee33171ea,
          mid_multiply_ffea0fd1f84a1bdc,
          mid_multiply_20c744803059662a,
          mid_negate_785133ac6602777f,
          mid_percentageValue_dff5885c2c873297,
          mid_pow_dcbc7ce2902fa136,
          mid_pow_ffea0fd1f84a1bdc,
          mid_pow_20c744803059662a,
          mid_reciprocal_785133ac6602777f,
          mid_reduce_785133ac6602777f,
          mid_signum_570ce0828f81a2c1,
          mid_subtract_92e8b97ee33171ea,
          mid_subtract_ffea0fd1f84a1bdc,
          mid_subtract_20c744803059662a,
          mid_toString_11b109bd155ca898,
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
