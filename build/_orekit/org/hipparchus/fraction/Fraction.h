#ifndef org_hipparchus_fraction_Fraction_H
#define org_hipparchus_fraction_Fraction_H

#include "java/lang/Number.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      class Fraction;
      class Fraction$ConvergenceTest;
      class FractionField;
    }
    namespace exception {
      class MathIllegalStateException;
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

      class Fraction : public ::java::lang::Number {
       public:
        enum {
          mid_init$_17db3a65980d3441,
          mid_init$_99803b0791f320ff,
          mid_init$_75c2da74a5a59fda,
          mid_init$_6f37635c3285dbdf,
          mid_init$_01fb2c777e5def32,
          mid_abs_883007575ab78b44,
          mid_add_f8ad4f296d9e6e5a,
          mid_add_c1a3055d403e155b,
          mid_compareTo_593972f776ed929e,
          mid_convergent_48c5e5d18a18a1f7,
          mid_convergents_6e644ae679b81b73,
          mid_divide_f8ad4f296d9e6e5a,
          mid_divide_c1a3055d403e155b,
          mid_doubleValue_dff5885c2c873297,
          mid_equals_65c7d273e80d497a,
          mid_floatValue_5adccb493ada08e8,
          mid_getDenominator_570ce0828f81a2c1,
          mid_getField_c92e44cc353119ce,
          mid_getNumerator_570ce0828f81a2c1,
          mid_getReal_dff5885c2c873297,
          mid_getReducedFraction_354275059e0b39d8,
          mid_hashCode_570ce0828f81a2c1,
          mid_intValue_570ce0828f81a2c1,
          mid_isInteger_b108b35ef48e27bd,
          mid_longValue_492808a339bfa35f,
          mid_multiply_f8ad4f296d9e6e5a,
          mid_multiply_c1a3055d403e155b,
          mid_negate_883007575ab78b44,
          mid_percentageValue_dff5885c2c873297,
          mid_reciprocal_883007575ab78b44,
          mid_signum_570ce0828f81a2c1,
          mid_subtract_f8ad4f296d9e6e5a,
          mid_subtract_c1a3055d403e155b,
          mid_toString_11b109bd155ca898,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Fraction(jobject obj) : ::java::lang::Number(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Fraction(const Fraction& obj) : ::java::lang::Number(obj) {}

        static Fraction *FOUR_FIFTHS;
        static Fraction *MINUS_ONE;
        static Fraction *ONE;
        static Fraction *ONE_FIFTH;
        static Fraction *ONE_HALF;
        static Fraction *ONE_QUARTER;
        static Fraction *ONE_THIRD;
        static Fraction *THREE_FIFTHS;
        static Fraction *THREE_QUARTERS;
        static Fraction *TWO;
        static Fraction *TWO_FIFTHS;
        static Fraction *TWO_QUARTERS;
        static Fraction *TWO_THIRDS;
        static Fraction *ZERO;

        Fraction(jdouble);
        Fraction(jint);
        Fraction(jdouble, jint);
        Fraction(jint, jint);
        Fraction(jdouble, jdouble, jint);

        Fraction abs() const;
        Fraction add(const Fraction &) const;
        Fraction add(jint) const;
        jint compareTo(const Fraction &) const;
        static ::org::hipparchus::util::Pair convergent(jdouble, jint, const ::org::hipparchus::fraction::Fraction$ConvergenceTest &);
        static ::java::util::stream::Stream convergents(jdouble, jint);
        Fraction divide(const Fraction &) const;
        Fraction divide(jint) const;
        jdouble doubleValue() const;
        jboolean equals(const ::java::lang::Object &) const;
        jfloat floatValue() const;
        jint getDenominator() const;
        ::org::hipparchus::fraction::FractionField getField() const;
        jint getNumerator() const;
        jdouble getReal() const;
        static Fraction getReducedFraction(jint, jint);
        jint hashCode() const;
        jint intValue() const;
        jboolean isInteger() const;
        jlong longValue() const;
        Fraction multiply(const Fraction &) const;
        Fraction multiply(jint) const;
        Fraction negate() const;
        jdouble percentageValue() const;
        Fraction reciprocal() const;
        jint signum() const;
        Fraction subtract(const Fraction &) const;
        Fraction subtract(jint) const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace fraction {
      extern PyType_Def PY_TYPE_DEF(Fraction);
      extern PyTypeObject *PY_TYPE(Fraction);

      class t_Fraction {
      public:
        PyObject_HEAD
        Fraction object;
        static PyObject *wrap_Object(const Fraction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
