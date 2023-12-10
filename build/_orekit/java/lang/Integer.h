#ifndef java_lang_Integer_H
#define java_lang_Integer_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Integer;
    class CharSequence;
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

    class Integer : public ::java::lang::Number {
     public:
      enum {
        mid_init$_d0bc48d5b00dc40c,
        mid_init$_99803b0791f320ff,
        mid_bitCount_2235cd056f5a882b,
        mid_byteValue_42a1555092006f7f,
        mid_compare_819f91eddf220c5b,
        mid_compareTo_24310ead8f6fb48c,
        mid_compareUnsigned_819f91eddf220c5b,
        mid_decode_47f254a16ecfcfb7,
        mid_divideUnsigned_819f91eddf220c5b,
        mid_doubleValue_dff5885c2c873297,
        mid_equals_65c7d273e80d497a,
        mid_floatValue_5adccb493ada08e8,
        mid_getInteger_47f254a16ecfcfb7,
        mid_getInteger_b98a9fd57a467019,
        mid_getInteger_b61bc34eaac0a6a9,
        mid_hashCode_570ce0828f81a2c1,
        mid_hashCode_2235cd056f5a882b,
        mid_highestOneBit_2235cd056f5a882b,
        mid_intValue_570ce0828f81a2c1,
        mid_longValue_492808a339bfa35f,
        mid_lowestOneBit_2235cd056f5a882b,
        mid_max_819f91eddf220c5b,
        mid_min_819f91eddf220c5b,
        mid_numberOfLeadingZeros_2235cd056f5a882b,
        mid_numberOfTrailingZeros_2235cd056f5a882b,
        mid_parseInt_02f02486e9727d8f,
        mid_parseInt_01c41545a950bc7c,
        mid_parseInt_0fde873f33ad0a7b,
        mid_parseUnsignedInt_02f02486e9727d8f,
        mid_parseUnsignedInt_01c41545a950bc7c,
        mid_parseUnsignedInt_0fde873f33ad0a7b,
        mid_remainderUnsigned_819f91eddf220c5b,
        mid_reverse_2235cd056f5a882b,
        mid_reverseBytes_2235cd056f5a882b,
        mid_rotateLeft_819f91eddf220c5b,
        mid_rotateRight_819f91eddf220c5b,
        mid_shortValue_b5dd6688e7dce57d,
        mid_signum_2235cd056f5a882b,
        mid_sum_819f91eddf220c5b,
        mid_toBinaryString_8cc8a10236476f23,
        mid_toHexString_8cc8a10236476f23,
        mid_toOctalString_8cc8a10236476f23,
        mid_toString_11b109bd155ca898,
        mid_toString_8cc8a10236476f23,
        mid_toString_5d51f1f447446760,
        mid_toUnsignedLong_a1cf8c47dc9c5883,
        mid_toUnsignedString_8cc8a10236476f23,
        mid_toUnsignedString_5d51f1f447446760,
        mid_valueOf_47f254a16ecfcfb7,
        mid_valueOf_ed5141c7ad9cc910,
        mid_valueOf_b61bc34eaac0a6a9,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Integer(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Integer(const Integer& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jint MAX_VALUE;
      static jint MIN_VALUE;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Integer(const ::java::lang::String &);
      Integer(jint);

      static jint bitCount(jint);
      jbyte byteValue() const;
      static jint compare(jint, jint);
      jint compareTo(const Integer &) const;
      static jint compareUnsigned(jint, jint);
      static Integer decode(const ::java::lang::String &);
      static jint divideUnsigned(jint, jint);
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      jfloat floatValue() const;
      static Integer getInteger(const ::java::lang::String &);
      static Integer getInteger(const ::java::lang::String &, const Integer &);
      static Integer getInteger(const ::java::lang::String &, jint);
      jint hashCode() const;
      static jint hashCode(jint);
      static jint highestOneBit(jint);
      jint intValue() const;
      jlong longValue() const;
      static jint lowestOneBit(jint);
      static jint max$(jint, jint);
      static jint min$(jint, jint);
      static jint numberOfLeadingZeros(jint);
      static jint numberOfTrailingZeros(jint);
      static jint parseInt(const ::java::lang::String &);
      static jint parseInt(const ::java::lang::String &, jint);
      static jint parseInt(const ::java::lang::CharSequence &, jint, jint, jint);
      static jint parseUnsignedInt(const ::java::lang::String &);
      static jint parseUnsignedInt(const ::java::lang::String &, jint);
      static jint parseUnsignedInt(const ::java::lang::CharSequence &, jint, jint, jint);
      static jint remainderUnsigned(jint, jint);
      static jint reverse(jint);
      static jint reverseBytes(jint);
      static jint rotateLeft(jint, jint);
      static jint rotateRight(jint, jint);
      jshort shortValue() const;
      static jint signum(jint);
      static jint sum(jint, jint);
      static ::java::lang::String toBinaryString(jint);
      static ::java::lang::String toHexString(jint);
      static ::java::lang::String toOctalString(jint);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jint);
      static ::java::lang::String toString(jint, jint);
      static jlong toUnsignedLong(jint);
      static ::java::lang::String toUnsignedString(jint);
      static ::java::lang::String toUnsignedString(jint, jint);
      static Integer valueOf(const ::java::lang::String &);
      static Integer valueOf(jint);
      static Integer valueOf(const ::java::lang::String &, jint);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Integer);
    extern PyTypeObject *PY_TYPE(Integer);

    class t_Integer {
    public:
      PyObject_HEAD
      Integer object;
      static PyObject *wrap_Object(const Integer&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
