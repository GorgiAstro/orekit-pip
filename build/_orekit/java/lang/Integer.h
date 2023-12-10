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
        mid_init$_e939c6558ae8d313,
        mid_init$_0a2a1ac2721c0336,
        mid_bitCount_38565d58479aa24a,
        mid_byteValue_1d06dd1980a98d13,
        mid_compare_d9790ac9eecfe931,
        mid_compareTo_35619c61a180cc8c,
        mid_compareUnsigned_d9790ac9eecfe931,
        mid_decode_e867d924e1c0010a,
        mid_divideUnsigned_d9790ac9eecfe931,
        mid_doubleValue_456d9a2f64d6b28d,
        mid_equals_229c87223f486349,
        mid_floatValue_966c782d3223854d,
        mid_getInteger_e867d924e1c0010a,
        mid_getInteger_328c096dbda69c03,
        mid_getInteger_d9e241c1ea57d589,
        mid_hashCode_f2f64475e4580546,
        mid_hashCode_38565d58479aa24a,
        mid_highestOneBit_38565d58479aa24a,
        mid_intValue_f2f64475e4580546,
        mid_longValue_a27fc9afd27e559d,
        mid_lowestOneBit_38565d58479aa24a,
        mid_max_d9790ac9eecfe931,
        mid_min_d9790ac9eecfe931,
        mid_numberOfLeadingZeros_38565d58479aa24a,
        mid_numberOfTrailingZeros_38565d58479aa24a,
        mid_parseInt_5d6fce34d596f8f0,
        mid_parseInt_4918d8aef83f928e,
        mid_parseInt_b980265e5c6eb85b,
        mid_parseUnsignedInt_5d6fce34d596f8f0,
        mid_parseUnsignedInt_4918d8aef83f928e,
        mid_parseUnsignedInt_b980265e5c6eb85b,
        mid_remainderUnsigned_d9790ac9eecfe931,
        mid_reverse_38565d58479aa24a,
        mid_reverseBytes_38565d58479aa24a,
        mid_rotateLeft_d9790ac9eecfe931,
        mid_rotateRight_d9790ac9eecfe931,
        mid_shortValue_f89720844d790ad7,
        mid_signum_38565d58479aa24a,
        mid_sum_d9790ac9eecfe931,
        mid_toBinaryString_90cbcc0b7a5ddae9,
        mid_toHexString_90cbcc0b7a5ddae9,
        mid_toOctalString_90cbcc0b7a5ddae9,
        mid_toString_0090f7797e403f43,
        mid_toString_90cbcc0b7a5ddae9,
        mid_toString_a1a389fa4c946a7a,
        mid_toUnsignedLong_3f523e51b2989e1f,
        mid_toUnsignedString_90cbcc0b7a5ddae9,
        mid_toUnsignedString_a1a389fa4c946a7a,
        mid_valueOf_e867d924e1c0010a,
        mid_valueOf_959d52bdd1d64155,
        mid_valueOf_d9e241c1ea57d589,
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
