#ifndef org_hipparchus_fraction_Fraction_H
#define org_hipparchus_fraction_Fraction_H

#include "java/lang/Number.h"

namespace org {
  namespace hipparchus {
    class FieldElement;
    namespace fraction {
      class FractionField;
      class Fraction$ConvergenceTest;
      class Fraction;
    }
    namespace exception {
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

      class Fraction : public ::java::lang::Number {
       public:
        enum {
          mid_init$_10f281d777284cea,
          mid_init$_a3da1a935cb37f7b,
          mid_init$_47602ef8408ea361,
          mid_init$_a84c9a223722150c,
          mid_init$_427af08acba367ca,
          mid_abs_78ed58163a805805,
          mid_add_cd77e6d012ea5cc3,
          mid_add_d5f28efe59a8e670,
          mid_compareTo_e8d020c2580961b3,
          mid_convergent_4cef17945da86adb,
          mid_convergents_9f7d72ee529fa4ce,
          mid_divide_cd77e6d012ea5cc3,
          mid_divide_d5f28efe59a8e670,
          mid_doubleValue_557b8123390d8d0c,
          mid_equals_221e8e85cb385209,
          mid_floatValue_04fe014f7609dc26,
          mid_getDenominator_412668abc8d889e9,
          mid_getField_1840755d7868de7a,
          mid_getNumerator_412668abc8d889e9,
          mid_getReal_557b8123390d8d0c,
          mid_getReducedFraction_6bc81349e4597c3b,
          mid_hashCode_412668abc8d889e9,
          mid_intValue_412668abc8d889e9,
          mid_isInteger_89b302893bdbe1f1,
          mid_longValue_9e26256fb0d384a2,
          mid_multiply_cd77e6d012ea5cc3,
          mid_multiply_d5f28efe59a8e670,
          mid_negate_78ed58163a805805,
          mid_percentageValue_557b8123390d8d0c,
          mid_reciprocal_78ed58163a805805,
          mid_signum_412668abc8d889e9,
          mid_subtract_cd77e6d012ea5cc3,
          mid_subtract_d5f28efe59a8e670,
          mid_toString_3cffd47377eca18a,
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
