#ifndef java_lang_Integer_H
#define java_lang_Integer_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Integer;
    class CharSequence;
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

    class Integer : public ::java::lang::Number {
     public:
      enum {
        mid_init$_f5ffdf29129ef90a,
        mid_init$_a3da1a935cb37f7b,
        mid_bitCount_0092017e99012694,
        mid_byteValue_acadfed42a0dbd0d,
        mid_compare_5625cf3db98dadc1,
        mid_compareTo_cfc5a73466d69284,
        mid_compareUnsigned_5625cf3db98dadc1,
        mid_decode_64674f082ff20409,
        mid_divideUnsigned_5625cf3db98dadc1,
        mid_doubleValue_557b8123390d8d0c,
        mid_equals_221e8e85cb385209,
        mid_floatValue_04fe014f7609dc26,
        mid_getInteger_64674f082ff20409,
        mid_getInteger_c2bd6b04153df558,
        mid_getInteger_003d86263a2b4dbb,
        mid_hashCode_412668abc8d889e9,
        mid_hashCode_0092017e99012694,
        mid_highestOneBit_0092017e99012694,
        mid_intValue_412668abc8d889e9,
        mid_longValue_9e26256fb0d384a2,
        mid_lowestOneBit_0092017e99012694,
        mid_max_5625cf3db98dadc1,
        mid_min_5625cf3db98dadc1,
        mid_numberOfLeadingZeros_0092017e99012694,
        mid_numberOfTrailingZeros_0092017e99012694,
        mid_parseInt_a6602ba493f77974,
        mid_parseInt_f5fd9af3faa747d5,
        mid_parseInt_16455715465bdd07,
        mid_parseUnsignedInt_a6602ba493f77974,
        mid_parseUnsignedInt_f5fd9af3faa747d5,
        mid_parseUnsignedInt_16455715465bdd07,
        mid_remainderUnsigned_5625cf3db98dadc1,
        mid_reverse_0092017e99012694,
        mid_reverseBytes_0092017e99012694,
        mid_rotateLeft_5625cf3db98dadc1,
        mid_rotateRight_5625cf3db98dadc1,
        mid_shortValue_2554afc868a7ba2a,
        mid_signum_0092017e99012694,
        mid_sum_5625cf3db98dadc1,
        mid_toBinaryString_0f10d4a5e06f61c0,
        mid_toHexString_0f10d4a5e06f61c0,
        mid_toOctalString_0f10d4a5e06f61c0,
        mid_toString_3cffd47377eca18a,
        mid_toString_0f10d4a5e06f61c0,
        mid_toString_637f0334ff6ee92d,
        mid_toUnsignedLong_4f6383d3e31ab417,
        mid_toUnsignedString_0f10d4a5e06f61c0,
        mid_toUnsignedString_637f0334ff6ee92d,
        mid_valueOf_64674f082ff20409,
        mid_valueOf_1d99b78d00f92979,
        mid_valueOf_003d86263a2b4dbb,
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
