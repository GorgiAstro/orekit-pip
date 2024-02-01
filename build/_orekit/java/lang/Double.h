#ifndef java_lang_Double_H
#define java_lang_Double_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Double;
    class Class;
    class NumberFormatException;
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
        mid_init$_105e1eadb709d9ac,
        mid_init$_1ad26e8c8c0cd65b,
        mid_byteValue_5bc9c54e4a4e6e3f,
        mid_compare_d24e476c7bde1014,
        mid_compareTo_319a23a219449ab0,
        mid_doubleToLongBits_6883df933d8a0182,
        mid_doubleToRawLongBits_6883df933d8a0182,
        mid_doubleValue_9981f74b2d109da6,
        mid_equals_72faff9b05f5ed5e,
        mid_floatValue_0e3b995f823d65ff,
        mid_hashCode_d6ab429752e7c267,
        mid_hashCode_9e72cb20adb363fb,
        mid_intValue_d6ab429752e7c267,
        mid_isFinite_7bc657d327f0f830,
        mid_isInfinite_eee3de00fe971136,
        mid_isInfinite_7bc657d327f0f830,
        mid_isNaN_eee3de00fe971136,
        mid_isNaN_7bc657d327f0f830,
        mid_longBitsToDouble_6465ccda9a6ad345,
        mid_longValue_42c72b98e3c2e08a,
        mid_max_82f92590f4247da1,
        mid_min_82f92590f4247da1,
        mid_parseDouble_f2fc085ab82846a3,
        mid_shortValue_5067fec74ceda473,
        mid_sum_82f92590f4247da1,
        mid_toHexString_e3ac8af686594d08,
        mid_toString_d2c8eb4129821f0e,
        mid_toString_e3ac8af686594d08,
        mid_valueOf_2458201c8d94260e,
        mid_valueOf_ab8f9f38a3b73ffe,
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
