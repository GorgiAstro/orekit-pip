#ifndef java_lang_Double_H
#define java_lang_Double_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Double;
    class Class;
    class Object;
    class String;
    class NumberFormatException;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Double : public ::java::lang::Number {
     public:
      enum {
        mid_init$_f5ffdf29129ef90a,
        mid_init$_10f281d777284cea,
        mid_byteValue_acadfed42a0dbd0d,
        mid_compare_4dfe98c34ce8e2ad,
        mid_compareTo_39609b8954e7e0eb,
        mid_doubleToLongBits_9d550dd06216a860,
        mid_doubleToRawLongBits_9d550dd06216a860,
        mid_doubleValue_557b8123390d8d0c,
        mid_equals_221e8e85cb385209,
        mid_floatValue_04fe014f7609dc26,
        mid_hashCode_412668abc8d889e9,
        mid_hashCode_abbeb9db7144ca23,
        mid_intValue_412668abc8d889e9,
        mid_isFinite_dd69c3ab2404bb71,
        mid_isInfinite_89b302893bdbe1f1,
        mid_isInfinite_dd69c3ab2404bb71,
        mid_isNaN_89b302893bdbe1f1,
        mid_isNaN_dd69c3ab2404bb71,
        mid_longBitsToDouble_32ecb089f4c907e7,
        mid_longValue_9e26256fb0d384a2,
        mid_max_2268d18be49a6087,
        mid_min_2268d18be49a6087,
        mid_parseDouble_071554b5f5a6b17b,
        mid_shortValue_2554afc868a7ba2a,
        mid_sum_2268d18be49a6087,
        mid_toHexString_c03a7791f2fcb1f1,
        mid_toString_3cffd47377eca18a,
        mid_toString_c03a7791f2fcb1f1,
        mid_valueOf_3471f90efebfeabb,
        mid_valueOf_229e479e8962b1c5,
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
