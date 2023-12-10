#ifndef java_lang_Long_H
#define java_lang_Long_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Comparable;
    class CharSequence;
    class NumberFormatException;
    class Class;
    class Object;
    class String;
    class Long;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Long : public ::java::lang::Number {
     public:
      enum {
        mid_init$_d0bc48d5b00dc40c,
        mid_init$_3a8e7649f31fdb20,
        mid_bitCount_d0f2acf0c955e055,
        mid_byteValue_42a1555092006f7f,
        mid_compare_f926ef7b907478d5,
        mid_compareTo_389b4602cb83822f,
        mid_compareUnsigned_f926ef7b907478d5,
        mid_decode_2bdc5221c15e81d1,
        mid_divideUnsigned_fe4804b67425641b,
        mid_doubleValue_dff5885c2c873297,
        mid_equals_65c7d273e80d497a,
        mid_floatValue_5adccb493ada08e8,
        mid_getLong_2bdc5221c15e81d1,
        mid_getLong_4a73a63ad05b3ccb,
        mid_getLong_b5d59aaac53b8d7f,
        mid_hashCode_570ce0828f81a2c1,
        mid_hashCode_d0f2acf0c955e055,
        mid_highestOneBit_02b241598e254a3f,
        mid_intValue_570ce0828f81a2c1,
        mid_longValue_492808a339bfa35f,
        mid_lowestOneBit_02b241598e254a3f,
        mid_max_fe4804b67425641b,
        mid_min_fe4804b67425641b,
        mid_numberOfLeadingZeros_d0f2acf0c955e055,
        mid_numberOfTrailingZeros_d0f2acf0c955e055,
        mid_parseLong_e3831db48e197f9e,
        mid_parseLong_a55161457270b7bb,
        mid_parseLong_23ebe56da7a4d223,
        mid_parseUnsignedLong_e3831db48e197f9e,
        mid_parseUnsignedLong_a55161457270b7bb,
        mid_parseUnsignedLong_23ebe56da7a4d223,
        mid_remainderUnsigned_fe4804b67425641b,
        mid_reverse_02b241598e254a3f,
        mid_reverseBytes_02b241598e254a3f,
        mid_rotateLeft_559895cd752223b6,
        mid_rotateRight_559895cd752223b6,
        mid_shortValue_b5dd6688e7dce57d,
        mid_signum_d0f2acf0c955e055,
        mid_sum_fe4804b67425641b,
        mid_toBinaryString_b42814811762ffb5,
        mid_toHexString_b42814811762ffb5,
        mid_toOctalString_b42814811762ffb5,
        mid_toString_11b109bd155ca898,
        mid_toString_b42814811762ffb5,
        mid_toString_2ea7c2740022ee2e,
        mid_toUnsignedString_b42814811762ffb5,
        mid_toUnsignedString_2ea7c2740022ee2e,
        mid_valueOf_2bdc5221c15e81d1,
        mid_valueOf_ccc2f3dad9f69e9b,
        mid_valueOf_971871236c3c323a,
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
