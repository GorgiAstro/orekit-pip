#ifndef java_lang_Double_H
#define java_lang_Double_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Double;
    class Class;
    class Object;
    class NumberFormatException;
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
        mid_init$_734b91ac30d5f9b4,
        mid_init$_8ba9fe7a847cecad,
        mid_byteValue_82ba37184c5152a3,
        mid_compare_a390351c2ab3d097,
        mid_compareTo_a8e655ea2fbadf43,
        mid_doubleToLongBits_12ed7e7112604870,
        mid_doubleToRawLongBits_12ed7e7112604870,
        mid_doubleValue_b74f83833fdad017,
        mid_equals_460c5e2d9d51c6cc,
        mid_floatValue_1fb1bf0772ae5db7,
        mid_hashCode_55546ef6a647f39b,
        mid_hashCode_2af4736545087009,
        mid_intValue_55546ef6a647f39b,
        mid_isFinite_716249baa52d209e,
        mid_isInfinite_9ab94ac1dc23b105,
        mid_isInfinite_716249baa52d209e,
        mid_isNaN_9ab94ac1dc23b105,
        mid_isNaN_716249baa52d209e,
        mid_longBitsToDouble_8caf38275755b2fd,
        mid_longValue_6c0ce7e438e5ded4,
        mid_max_99e3200dafc19573,
        mid_min_99e3200dafc19573,
        mid_parseDouble_a84f304e8cd7ce1b,
        mid_shortValue_02a2271f89f4492b,
        mid_sum_99e3200dafc19573,
        mid_toHexString_11ae2994efd15504,
        mid_toString_1c1fa1e935d6cdcf,
        mid_toString_11ae2994efd15504,
        mid_valueOf_76ce52eb492100d7,
        mid_valueOf_296806f10627d10c,
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
