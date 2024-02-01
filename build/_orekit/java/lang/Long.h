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
        mid_init$_105e1eadb709d9ac,
        mid_init$_f5bbab7e97879358,
        mid_bitCount_e9d351dcffb1a696,
        mid_byteValue_5bc9c54e4a4e6e3f,
        mid_compare_2af9b60fca5827c1,
        mid_compareTo_f2e241e4dbd7de0d,
        mid_compareUnsigned_2af9b60fca5827c1,
        mid_decode_78aed590324603c7,
        mid_divideUnsigned_7912418dc9bc44e3,
        mid_doubleValue_9981f74b2d109da6,
        mid_equals_72faff9b05f5ed5e,
        mid_floatValue_0e3b995f823d65ff,
        mid_getLong_78aed590324603c7,
        mid_getLong_8656493c79feeba1,
        mid_getLong_7863c3e0f2de4aa4,
        mid_hashCode_d6ab429752e7c267,
        mid_hashCode_e9d351dcffb1a696,
        mid_highestOneBit_1eaf6eb0a3f3163f,
        mid_intValue_d6ab429752e7c267,
        mid_longValue_42c72b98e3c2e08a,
        mid_lowestOneBit_1eaf6eb0a3f3163f,
        mid_max_7912418dc9bc44e3,
        mid_min_7912418dc9bc44e3,
        mid_numberOfLeadingZeros_e9d351dcffb1a696,
        mid_numberOfTrailingZeros_e9d351dcffb1a696,
        mid_parseLong_bd9949f7787fa510,
        mid_parseLong_2968fe53e241ed68,
        mid_parseLong_1a09d72cf99eec11,
        mid_parseUnsignedLong_bd9949f7787fa510,
        mid_parseUnsignedLong_2968fe53e241ed68,
        mid_parseUnsignedLong_1a09d72cf99eec11,
        mid_remainderUnsigned_7912418dc9bc44e3,
        mid_reverse_1eaf6eb0a3f3163f,
        mid_reverseBytes_1eaf6eb0a3f3163f,
        mid_rotateLeft_e7e8a55529a0db0c,
        mid_rotateRight_e7e8a55529a0db0c,
        mid_shortValue_5067fec74ceda473,
        mid_signum_e9d351dcffb1a696,
        mid_sum_7912418dc9bc44e3,
        mid_toBinaryString_7fdd1777495672ef,
        mid_toHexString_7fdd1777495672ef,
        mid_toOctalString_7fdd1777495672ef,
        mid_toString_d2c8eb4129821f0e,
        mid_toString_7fdd1777495672ef,
        mid_toString_123bb49509da7a54,
        mid_toUnsignedString_7fdd1777495672ef,
        mid_toUnsignedString_123bb49509da7a54,
        mid_valueOf_78aed590324603c7,
        mid_valueOf_9a3d0ba82664bd00,
        mid_valueOf_2c65ad6e7a85515b,
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
