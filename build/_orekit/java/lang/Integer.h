#ifndef java_lang_Integer_H
#define java_lang_Integer_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Integer;
    class CharSequence;
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

    class Integer : public ::java::lang::Number {
     public:
      enum {
        mid_init$_734b91ac30d5f9b4,
        mid_init$_44ed599e93e8a30c,
        mid_bitCount_0e7cf35192c3effe,
        mid_byteValue_82ba37184c5152a3,
        mid_compare_92ecd94558bf0c68,
        mid_compareTo_eb8ccb0a3786e9ee,
        mid_compareUnsigned_92ecd94558bf0c68,
        mid_decode_8e74996b76bd24d6,
        mid_divideUnsigned_92ecd94558bf0c68,
        mid_doubleValue_b74f83833fdad017,
        mid_equals_460c5e2d9d51c6cc,
        mid_floatValue_1fb1bf0772ae5db7,
        mid_getInteger_8e74996b76bd24d6,
        mid_getInteger_f8a17c08cd2247a2,
        mid_getInteger_f7fdf9e285509298,
        mid_hashCode_55546ef6a647f39b,
        mid_hashCode_0e7cf35192c3effe,
        mid_highestOneBit_0e7cf35192c3effe,
        mid_intValue_55546ef6a647f39b,
        mid_longValue_6c0ce7e438e5ded4,
        mid_lowestOneBit_0e7cf35192c3effe,
        mid_max_92ecd94558bf0c68,
        mid_min_92ecd94558bf0c68,
        mid_numberOfLeadingZeros_0e7cf35192c3effe,
        mid_numberOfTrailingZeros_0e7cf35192c3effe,
        mid_parseInt_f0ba70671b70c6e5,
        mid_parseInt_7c969bab81d289ef,
        mid_parseInt_9812b0991b0a70b4,
        mid_parseUnsignedInt_f0ba70671b70c6e5,
        mid_parseUnsignedInt_7c969bab81d289ef,
        mid_parseUnsignedInt_9812b0991b0a70b4,
        mid_remainderUnsigned_92ecd94558bf0c68,
        mid_reverse_0e7cf35192c3effe,
        mid_reverseBytes_0e7cf35192c3effe,
        mid_rotateLeft_92ecd94558bf0c68,
        mid_rotateRight_92ecd94558bf0c68,
        mid_shortValue_02a2271f89f4492b,
        mid_signum_0e7cf35192c3effe,
        mid_sum_92ecd94558bf0c68,
        mid_toBinaryString_2a9bffd3d5397f7c,
        mid_toHexString_2a9bffd3d5397f7c,
        mid_toOctalString_2a9bffd3d5397f7c,
        mid_toString_1c1fa1e935d6cdcf,
        mid_toString_2a9bffd3d5397f7c,
        mid_toString_e91e53c42d39aef9,
        mid_toUnsignedLong_f4947a88f79e0725,
        mid_toUnsignedString_2a9bffd3d5397f7c,
        mid_toUnsignedString_e91e53c42d39aef9,
        mid_valueOf_8e74996b76bd24d6,
        mid_valueOf_b3bcfcb4d07a5aa3,
        mid_valueOf_f7fdf9e285509298,
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
