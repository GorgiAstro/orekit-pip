#ifndef org_hipparchus_fraction_Fraction_H
#define org_hipparchus_fraction_Fraction_H

#include "java/lang/Number.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Pair;
    }
    namespace fraction {
      class Fraction;
      class FractionField;
      class Fraction$ConvergenceTest;
    }
    namespace exception {
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

      class Fraction : public ::java::lang::Number {
       public:
        enum {
          mid_init$_8ba9fe7a847cecad,
          mid_init$_44ed599e93e8a30c,
          mid_init$_1af1b4c263b48b0c,
          mid_init$_3313c75e3e16c428,
          mid_init$_2aa803b9073e6a76,
          mid_abs_7ab72bcbb3909669,
          mid_add_bdfa161ba56577a2,
          mid_add_9b02f5d4b569000c,
          mid_compareTo_3cf36ccb5102bad4,
          mid_convergent_65552bd5bd5c77b9,
          mid_convergents_0df0904681fc943b,
          mid_divide_bdfa161ba56577a2,
          mid_divide_9b02f5d4b569000c,
          mid_doubleValue_b74f83833fdad017,
          mid_equals_460c5e2d9d51c6cc,
          mid_floatValue_1fb1bf0772ae5db7,
          mid_getDenominator_55546ef6a647f39b,
          mid_getField_1e2decbb84e0a2b6,
          mid_getNumerator_55546ef6a647f39b,
          mid_getReal_b74f83833fdad017,
          mid_getReducedFraction_45f5e815bd9f47bd,
          mid_hashCode_55546ef6a647f39b,
          mid_intValue_55546ef6a647f39b,
          mid_isInteger_9ab94ac1dc23b105,
          mid_longValue_6c0ce7e438e5ded4,
          mid_multiply_bdfa161ba56577a2,
          mid_multiply_9b02f5d4b569000c,
          mid_negate_7ab72bcbb3909669,
          mid_percentageValue_b74f83833fdad017,
          mid_reciprocal_7ab72bcbb3909669,
          mid_signum_55546ef6a647f39b,
          mid_subtract_bdfa161ba56577a2,
          mid_subtract_9b02f5d4b569000c,
          mid_toString_1c1fa1e935d6cdcf,
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
