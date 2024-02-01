#ifndef java_lang_Integer_H
#define java_lang_Integer_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Integer;
    class CharSequence;
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

    class Integer : public ::java::lang::Number {
     public:
      enum {
        mid_init$_105e1eadb709d9ac,
        mid_init$_8fd427ab23829bf5,
        mid_bitCount_d938fc64e8c6df2d,
        mid_byteValue_5bc9c54e4a4e6e3f,
        mid_compare_91b9e1e34b2235d5,
        mid_compareTo_b0489d72230dcaaf,
        mid_compareUnsigned_91b9e1e34b2235d5,
        mid_decode_0309e0e592dfbbeb,
        mid_divideUnsigned_91b9e1e34b2235d5,
        mid_doubleValue_9981f74b2d109da6,
        mid_equals_72faff9b05f5ed5e,
        mid_floatValue_0e3b995f823d65ff,
        mid_getInteger_0309e0e592dfbbeb,
        mid_getInteger_7462b2a828b6af22,
        mid_getInteger_1b6226636e5ca60f,
        mid_hashCode_d6ab429752e7c267,
        mid_hashCode_d938fc64e8c6df2d,
        mid_highestOneBit_d938fc64e8c6df2d,
        mid_intValue_d6ab429752e7c267,
        mid_longValue_42c72b98e3c2e08a,
        mid_lowestOneBit_d938fc64e8c6df2d,
        mid_max_91b9e1e34b2235d5,
        mid_min_91b9e1e34b2235d5,
        mid_numberOfLeadingZeros_d938fc64e8c6df2d,
        mid_numberOfTrailingZeros_d938fc64e8c6df2d,
        mid_parseInt_84fe1f8fbbcb0268,
        mid_parseInt_36da4b2d3bc5085f,
        mid_parseInt_438906d2090fe38f,
        mid_parseUnsignedInt_84fe1f8fbbcb0268,
        mid_parseUnsignedInt_36da4b2d3bc5085f,
        mid_parseUnsignedInt_438906d2090fe38f,
        mid_remainderUnsigned_91b9e1e34b2235d5,
        mid_reverse_d938fc64e8c6df2d,
        mid_reverseBytes_d938fc64e8c6df2d,
        mid_rotateLeft_91b9e1e34b2235d5,
        mid_rotateRight_91b9e1e34b2235d5,
        mid_shortValue_5067fec74ceda473,
        mid_signum_d938fc64e8c6df2d,
        mid_sum_91b9e1e34b2235d5,
        mid_toBinaryString_c81987d6b0e2977a,
        mid_toHexString_c81987d6b0e2977a,
        mid_toOctalString_c81987d6b0e2977a,
        mid_toString_d2c8eb4129821f0e,
        mid_toString_c81987d6b0e2977a,
        mid_toString_43e3765e4d074a90,
        mid_toUnsignedLong_3453f750066710ab,
        mid_toUnsignedString_c81987d6b0e2977a,
        mid_toUnsignedString_43e3765e4d074a90,
        mid_valueOf_0309e0e592dfbbeb,
        mid_valueOf_7cbd08ba8096c44f,
        mid_valueOf_1b6226636e5ca60f,
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
