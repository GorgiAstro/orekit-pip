#ifndef java_lang_Float_H
#define java_lang_Float_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Float;
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

    class Float : public ::java::lang::Number {
     public:
      enum {
        mid_init$_105e1eadb709d9ac,
        mid_init$_1ad26e8c8c0cd65b,
        mid_init$_11c95dcd1c301708,
        mid_byteValue_5bc9c54e4a4e6e3f,
        mid_compare_6d23ba887d7bc699,
        mid_compareTo_0fd21b0f141a0083,
        mid_doubleValue_9981f74b2d109da6,
        mid_equals_72faff9b05f5ed5e,
        mid_floatToIntBits_d5ac1630ba9f4935,
        mid_floatToRawIntBits_d5ac1630ba9f4935,
        mid_floatValue_0e3b995f823d65ff,
        mid_hashCode_d6ab429752e7c267,
        mid_hashCode_d5ac1630ba9f4935,
        mid_intBitsToFloat_59a210c7132aa185,
        mid_intValue_d6ab429752e7c267,
        mid_isFinite_b6aee6d092d77be8,
        mid_isInfinite_eee3de00fe971136,
        mid_isInfinite_b6aee6d092d77be8,
        mid_isNaN_eee3de00fe971136,
        mid_isNaN_b6aee6d092d77be8,
        mid_longValue_42c72b98e3c2e08a,
        mid_max_376a3c0184df58e2,
        mid_min_376a3c0184df58e2,
        mid_parseFloat_c3939e4dc4489413,
        mid_shortValue_5067fec74ceda473,
        mid_sum_376a3c0184df58e2,
        mid_toHexString_7e1d4f43ec30f721,
        mid_toString_d2c8eb4129821f0e,
        mid_toString_7e1d4f43ec30f721,
        mid_valueOf_ea11f708afa49297,
        mid_valueOf_5f3d14c66eeca77d,
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
