#ifndef java_lang_Long_H
#define java_lang_Long_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class CharSequence;
    class Class;
    class Object;
    class Long;
    class NumberFormatException;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Long : public ::java::lang::Number {
     public:
      enum {
        mid_init$_734b91ac30d5f9b4,
        mid_init$_3d7dd2314a0dd456,
        mid_bitCount_da24d9dc605e436c,
        mid_byteValue_82ba37184c5152a3,
        mid_compare_a475dff09c4a8036,
        mid_compareTo_697efac7c416888c,
        mid_compareUnsigned_a475dff09c4a8036,
        mid_decode_63948a43f8a26139,
        mid_divideUnsigned_8f345e4204401ff5,
        mid_doubleValue_b74f83833fdad017,
        mid_equals_460c5e2d9d51c6cc,
        mid_floatValue_1fb1bf0772ae5db7,
        mid_getLong_63948a43f8a26139,
        mid_getLong_4e0df24b8d07cee1,
        mid_getLong_c458fe919015d2a1,
        mid_hashCode_55546ef6a647f39b,
        mid_hashCode_da24d9dc605e436c,
        mid_highestOneBit_9db63109f74a74fc,
        mid_intValue_55546ef6a647f39b,
        mid_longValue_6c0ce7e438e5ded4,
        mid_lowestOneBit_9db63109f74a74fc,
        mid_max_8f345e4204401ff5,
        mid_min_8f345e4204401ff5,
        mid_numberOfLeadingZeros_da24d9dc605e436c,
        mid_numberOfTrailingZeros_da24d9dc605e436c,
        mid_parseLong_cbeeb2314499c200,
        mid_parseLong_2ff283f35c90efa5,
        mid_parseLong_b497eb3ab4c913a6,
        mid_parseUnsignedLong_cbeeb2314499c200,
        mid_parseUnsignedLong_2ff283f35c90efa5,
        mid_parseUnsignedLong_b497eb3ab4c913a6,
        mid_remainderUnsigned_8f345e4204401ff5,
        mid_reverse_9db63109f74a74fc,
        mid_reverseBytes_9db63109f74a74fc,
        mid_rotateLeft_a60a6e0b1c5dfa26,
        mid_rotateRight_a60a6e0b1c5dfa26,
        mid_shortValue_02a2271f89f4492b,
        mid_signum_da24d9dc605e436c,
        mid_sum_8f345e4204401ff5,
        mid_toBinaryString_9078858c11a58b1e,
        mid_toHexString_9078858c11a58b1e,
        mid_toOctalString_9078858c11a58b1e,
        mid_toString_1c1fa1e935d6cdcf,
        mid_toString_9078858c11a58b1e,
        mid_toString_16178c1d99d0765d,
        mid_toUnsignedString_9078858c11a58b1e,
        mid_toUnsignedString_16178c1d99d0765d,
        mid_valueOf_63948a43f8a26139,
        mid_valueOf_30f988f295a635df,
        mid_valueOf_439108b9ef2718bd,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Long(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Long(const Long& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jlong MAX_VALUE;
      static jlong MIN_VALUE;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Long(const ::java::lang::String &);
      Long(jlong);

      static jint bitCount(jlong);
      jbyte byteValue() const;
      static jint compare(jlong, jlong);
      jint compareTo(const Long &) const;
      static jint compareUnsigned(jlong, jlong);
      static Long decode(const ::java::lang::String &);
      static jlong divideUnsigned(jlong, jlong);
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      jfloat floatValue() const;
      static Long getLong(const ::java::lang::String &);
      static Long getLong(const ::java::lang::String &, const Long &);
      static Long getLong(const ::java::lang::String &, jlong);
      jint hashCode() const;
      static jint hashCode(jlong);
      static jlong highestOneBit(jlong);
      jint intValue() const;
      jlong longValue() const;
      static jlong lowestOneBit(jlong);
      static jlong max$(jlong, jlong);
      static jlong min$(jlong, jlong);
      static jint numberOfLeadingZeros(jlong);
      static jint numberOfTrailingZeros(jlong);
      static jlong parseLong(const ::java::lang::String &);
      static jlong parseLong(const ::java::lang::String &, jint);
      static jlong parseLong(const ::java::lang::CharSequence &, jint, jint, jint);
      static jlong parseUnsignedLong(const ::java::lang::String &);
      static jlong parseUnsignedLong(const ::java::lang::String &, jint);
      static jlong parseUnsignedLong(const ::java::lang::CharSequence &, jint, jint, jint);
      static jlong remainderUnsigned(jlong, jlong);
      static jlong reverse(jlong);
      static jlong reverseBytes(jlong);
      static jlong rotateLeft(jlong, jint);
      static jlong rotateRight(jlong, jint);
      jshort shortValue() const;
      static jint signum(jlong);
      static jlong sum(jlong, jlong);
      static ::java::lang::String toBinaryString(jlong);
      static ::java::lang::String toHexString(jlong);
      static ::java::lang::String toOctalString(jlong);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jlong);
      static ::java::lang::String toString(jlong, jint);
      static ::java::lang::String toUnsignedString(jlong);
      static ::java::lang::String toUnsignedString(jlong, jint);
      static Long valueOf(const ::java::lang::String &);
      static Long valueOf(jlong);
      static Long valueOf(const ::java::lang::String &, jint);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Long);
    extern PyTypeObject *PY_TYPE(Long);

    class t_Long {
    public:
      PyObject_HEAD
      Long object;
      static PyObject *wrap_Object(const Long&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
