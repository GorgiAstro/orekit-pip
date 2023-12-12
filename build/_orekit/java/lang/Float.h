#ifndef java_lang_Float_H
#define java_lang_Float_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Float;
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

    class Float : public ::java::lang::Number {
     public:
      enum {
        mid_init$_f5ffdf29129ef90a,
        mid_init$_10f281d777284cea,
        mid_init$_3ac7cc3def9efaa9,
        mid_byteValue_acadfed42a0dbd0d,
        mid_compare_28d6c4cafbbf22ca,
        mid_compareTo_c4acd4278c631cef,
        mid_doubleValue_557b8123390d8d0c,
        mid_equals_221e8e85cb385209,
        mid_floatToIntBits_8654c9c587b855bf,
        mid_floatToRawIntBits_8654c9c587b855bf,
        mid_floatValue_04fe014f7609dc26,
        mid_hashCode_412668abc8d889e9,
        mid_hashCode_8654c9c587b855bf,
        mid_intBitsToFloat_4a1b89ce3fd92e16,
        mid_intValue_412668abc8d889e9,
        mid_isFinite_2637f4d79297c2ad,
        mid_isInfinite_89b302893bdbe1f1,
        mid_isInfinite_2637f4d79297c2ad,
        mid_isNaN_89b302893bdbe1f1,
        mid_isNaN_2637f4d79297c2ad,
        mid_longValue_9e26256fb0d384a2,
        mid_max_cd0283dc4491c41d,
        mid_min_cd0283dc4491c41d,
        mid_parseFloat_4c53e11f170cb6dc,
        mid_shortValue_2554afc868a7ba2a,
        mid_sum_cd0283dc4491c41d,
        mid_toHexString_d2dc74ed6e6ec7d8,
        mid_toString_3cffd47377eca18a,
        mid_toString_d2dc74ed6e6ec7d8,
        mid_valueOf_51c36c239fa71636,
        mid_valueOf_7b1570e089e1af54,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Float(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Float(const Float& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jint MAX_EXPONENT;
      static jfloat MAX_VALUE;
      static jint MIN_EXPONENT;
      static jfloat MIN_NORMAL;
      static jfloat MIN_VALUE;
      static jfloat NEGATIVE_INFINITY;
      static jfloat NaN;
      static jfloat POSITIVE_INFINITY;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Float(const ::java::lang::String &);
      Float(jdouble);
      Float(jfloat);

      jbyte byteValue() const;
      static jint compare(jfloat, jfloat);
      jint compareTo(const Float &) const;
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      static jint floatToIntBits(jfloat);
      static jint floatToRawIntBits(jfloat);
      jfloat floatValue() const;
      jint hashCode() const;
      static jint hashCode(jfloat);
      static jfloat intBitsToFloat(jint);
      jint intValue() const;
      static jboolean isFinite(jfloat);
      jboolean isInfinite() const;
      static jboolean isInfinite(jfloat);
      jboolean isNaN() const;
      static jboolean isNaN(jfloat);
      jlong longValue() const;
      static jfloat max$(jfloat, jfloat);
      static jfloat min$(jfloat, jfloat);
      static jfloat parseFloat(const ::java::lang::String &);
      jshort shortValue() const;
      static jfloat sum(jfloat, jfloat);
      static ::java::lang::String toHexString(jfloat);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jfloat);
      static Float valueOf(const ::java::lang::String &);
      static Float valueOf(jfloat);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Float);
    extern PyTypeObject *PY_TYPE(Float);

    class t_Float {
    public:
      PyObject_HEAD
      Float object;
      static PyObject *wrap_Object(const Float&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
