#ifndef org_hipparchus_fraction_Fraction_H
#define org_hipparchus_fraction_Fraction_H

#include "java/lang/Number.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      class Fraction$ConvergenceTest;
      class Fraction;
      class FractionField;
    }
    namespace exception {
      class MathIllegalStateException;
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

      class Fraction : public ::java::lang::Number {
       public:
        enum {
          mid_init$_77e0f9a1f260e2e5,
          mid_init$_0a2a1ac2721c0336,
          mid_init$_18b1ce6f78e2ded3,
          mid_init$_8dbc1129a3c2557a,
          mid_init$_b05c288d5068eccb,
          mid_abs_7847eacc50504e7f,
          mid_add_a19d03cf471d5b7e,
          mid_add_a6342e1f87806d3a,
          mid_compareTo_0d392685ecffa868,
          mid_convergent_d628634ffc195a70,
          mid_convergents_d9c8edb42f215879,
          mid_divide_a19d03cf471d5b7e,
          mid_divide_a6342e1f87806d3a,
          mid_doubleValue_456d9a2f64d6b28d,
          mid_equals_229c87223f486349,
          mid_floatValue_966c782d3223854d,
          mid_getDenominator_f2f64475e4580546,
          mid_getField_b8cb7e3975ac8fd2,
          mid_getNumerator_f2f64475e4580546,
          mid_getReal_456d9a2f64d6b28d,
          mid_getReducedFraction_d273f56ab7916c75,
          mid_hashCode_f2f64475e4580546,
          mid_intValue_f2f64475e4580546,
          mid_isInteger_e470b6d9e0d979db,
          mid_longValue_a27fc9afd27e559d,
          mid_multiply_a19d03cf471d5b7e,
          mid_multiply_a6342e1f87806d3a,
          mid_negate_7847eacc50504e7f,
          mid_percentageValue_456d9a2f64d6b28d,
          mid_reciprocal_7847eacc50504e7f,
          mid_signum_f2f64475e4580546,
          mid_subtract_a19d03cf471d5b7e,
          mid_subtract_a6342e1f87806d3a,
          mid_toString_0090f7797e403f43,
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
