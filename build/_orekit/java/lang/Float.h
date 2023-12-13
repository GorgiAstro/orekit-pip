#ifndef java_lang_Float_H
#define java_lang_Float_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Float;
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

    class Float : public ::java::lang::Number {
     public:
      enum {
        mid_init$_734b91ac30d5f9b4,
        mid_init$_8ba9fe7a847cecad,
        mid_init$_bb7181dc3b1dc22b,
        mid_byteValue_82ba37184c5152a3,
        mid_compare_f51a5f51aeb31ecc,
        mid_compareTo_4aeca5172eca6a61,
        mid_doubleValue_b74f83833fdad017,
        mid_equals_460c5e2d9d51c6cc,
        mid_floatToIntBits_5a61e72bed090dfc,
        mid_floatToRawIntBits_5a61e72bed090dfc,
        mid_floatValue_1fb1bf0772ae5db7,
        mid_hashCode_55546ef6a647f39b,
        mid_hashCode_5a61e72bed090dfc,
        mid_intBitsToFloat_ad59499be011e898,
        mid_intValue_55546ef6a647f39b,
        mid_isFinite_967314f8b6d71dd4,
        mid_isInfinite_9ab94ac1dc23b105,
        mid_isInfinite_967314f8b6d71dd4,
        mid_isNaN_9ab94ac1dc23b105,
        mid_isNaN_967314f8b6d71dd4,
        mid_longValue_6c0ce7e438e5ded4,
        mid_max_4f5dd4904966745b,
        mid_min_4f5dd4904966745b,
        mid_parseFloat_6ceea6a9a6b9a108,
        mid_shortValue_02a2271f89f4492b,
        mid_sum_4f5dd4904966745b,
        mid_toHexString_2dfeb5b800d7df61,
        mid_toString_1c1fa1e935d6cdcf,
        mid_toString_2dfeb5b800d7df61,
        mid_valueOf_ee23627e521cfced,
        mid_valueOf_c96062813f66800d,
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
