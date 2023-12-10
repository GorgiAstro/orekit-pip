#ifndef java_lang_Double_H
#define java_lang_Double_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Double;
    class NumberFormatException;
    class Class;
    class Object;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Double : public ::java::lang::Number {
     public:
      enum {
        mid_init$_e939c6558ae8d313,
        mid_init$_77e0f9a1f260e2e5,
        mid_byteValue_1d06dd1980a98d13,
        mid_compare_b458a19882af8e74,
        mid_compareTo_94169ab4e956aadb,
        mid_doubleToLongBits_7920263ad8deab44,
        mid_doubleToRawLongBits_7920263ad8deab44,
        mid_doubleValue_456d9a2f64d6b28d,
        mid_equals_229c87223f486349,
        mid_floatValue_966c782d3223854d,
        mid_hashCode_f2f64475e4580546,
        mid_hashCode_12ebab281ee35c98,
        mid_intValue_f2f64475e4580546,
        mid_isFinite_e18fb1101b70dcca,
        mid_isInfinite_e470b6d9e0d979db,
        mid_isInfinite_e18fb1101b70dcca,
        mid_isNaN_e470b6d9e0d979db,
        mid_isNaN_e18fb1101b70dcca,
        mid_longBitsToDouble_4b7bbbdca0346d42,
        mid_longValue_a27fc9afd27e559d,
        mid_max_824133ce4aec3505,
        mid_min_824133ce4aec3505,
        mid_parseDouble_531dcf669f2059aa,
        mid_shortValue_f89720844d790ad7,
        mid_sum_824133ce4aec3505,
        mid_toHexString_085bbc49599fa163,
        mid_toString_0090f7797e403f43,
        mid_toString_085bbc49599fa163,
        mid_valueOf_637389b3c9fb4ab6,
        mid_valueOf_27ddbebbe82f07ae,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Double(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Double(const Double& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jint MAX_EXPONENT;
      static jdouble MAX_VALUE;
      static jint MIN_EXPONENT;
      static jdouble MIN_NORMAL;
      static jdouble MIN_VALUE;
      static jdouble NEGATIVE_INFINITY;
      static jdouble NaN;
      static jdouble POSITIVE_INFINITY;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Double(const ::java::lang::String &);
      Double(jdouble);

      jbyte byteValue() const;
      static jint compare(jdouble, jdouble);
      jint compareTo(const Double &) const;
      static jlong doubleToLongBits(jdouble);
      static jlong doubleToRawLongBits(jdouble);
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      jfloat floatValue() const;
      jint hashCode() const;
      static jint hashCode(jdouble);
      jint intValue() const;
      static jboolean isFinite(jdouble);
      jboolean isInfinite() const;
      static jboolean isInfinite(jdouble);
      jboolean isNaN() const;
      static jboolean isNaN(jdouble);
      static jdouble longBitsToDouble(jlong);
      jlong longValue() const;
      static jdouble max$(jdouble, jdouble);
      static jdouble min$(jdouble, jdouble);
      static jdouble parseDouble(const ::java::lang::String &);
      jshort shortValue() const;
      static jdouble sum(jdouble, jdouble);
      static ::java::lang::String toHexString(jdouble);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jdouble);
      static Double valueOf(const ::java::lang::String &);
      static Double valueOf(jdouble);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Double);
    extern PyTypeObject *PY_TYPE(Double);

    class t_Double {
    public:
      PyObject_HEAD
      Double object;
      static PyObject *wrap_Object(const Double&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
