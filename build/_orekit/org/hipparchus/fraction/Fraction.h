#ifndef org_hipparchus_fraction_Fraction_H
#define org_hipparchus_fraction_Fraction_H

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
      class Fraction$ConvergenceTest;
      class Fraction;
      class FractionField;
    }
    class FieldElement;
    namespace util {
      class Pair;
    }
    namespace exception {
      class MathIllegalStateException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace fraction {

      class Fraction : public ::java::lang::Number {
       public:
        enum {
          mid_init$_1ad26e8c8c0cd65b,
          mid_init$_8fd427ab23829bf5,
          mid_init$_0fd8efd9eecb8663,
          mid_init$_b5d23e6c0858e8ed,
          mid_init$_905e65280a4e6722,
          mid_abs_8e8b2db4820cf02e,
          mid_add_50b9b9b0f187c25b,
          mid_add_ef49e40a8dbc79e6,
          mid_compareTo_82b2dc26883caac1,
          mid_convergent_81bd681e29e7b96a,
          mid_convergents_df90c0ab75ef97f0,
          mid_divide_50b9b9b0f187c25b,
          mid_divide_ef49e40a8dbc79e6,
          mid_doubleValue_9981f74b2d109da6,
          mid_equals_72faff9b05f5ed5e,
          mid_floatValue_0e3b995f823d65ff,
          mid_getDenominator_d6ab429752e7c267,
          mid_getField_d1ee112cc568c3bb,
          mid_getNumerator_d6ab429752e7c267,
          mid_getReal_9981f74b2d109da6,
          mid_getReducedFraction_f6b277f2c5d432df,
          mid_hashCode_d6ab429752e7c267,
          mid_intValue_d6ab429752e7c267,
          mid_isInteger_eee3de00fe971136,
          mid_longValue_42c72b98e3c2e08a,
          mid_multiply_50b9b9b0f187c25b,
          mid_multiply_ef49e40a8dbc79e6,
          mid_negate_8e8b2db4820cf02e,
          mid_percentageValue_9981f74b2d109da6,
          mid_reciprocal_8e8b2db4820cf02e,
          mid_signum_d6ab429752e7c267,
          mid_subtract_50b9b9b0f187c25b,
          mid_subtract_ef49e40a8dbc79e6,
          mid_toString_d2c8eb4129821f0e,
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
