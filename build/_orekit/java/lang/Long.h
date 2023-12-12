#ifndef java_lang_Long_H
#define java_lang_Long_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Comparable;
    class CharSequence;
    class Class;
    class Object;
    class String;
    class NumberFormatException;
    class Long;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Long : public ::java::lang::Number {
     public:
      enum {
        mid_init$_f5ffdf29129ef90a,
        mid_init$_3cd6a6b354c6aa22,
        mid_bitCount_06110d73d878b7ae,
        mid_byteValue_acadfed42a0dbd0d,
        mid_compare_1abbfee4f30dfe0a,
        mid_compareTo_f77dca0e234de4f8,
        mid_compareUnsigned_1abbfee4f30dfe0a,
        mid_decode_7f2060733966aef7,
        mid_divideUnsigned_c18ab8eab0c49f84,
        mid_doubleValue_557b8123390d8d0c,
        mid_equals_221e8e85cb385209,
        mid_floatValue_04fe014f7609dc26,
        mid_getLong_7f2060733966aef7,
        mid_getLong_90d76fd0b429d420,
        mid_getLong_0aafc93534471333,
        mid_hashCode_412668abc8d889e9,
        mid_hashCode_06110d73d878b7ae,
        mid_highestOneBit_f4ad805a81234b49,
        mid_intValue_412668abc8d889e9,
        mid_longValue_9e26256fb0d384a2,
        mid_lowestOneBit_f4ad805a81234b49,
        mid_max_c18ab8eab0c49f84,
        mid_min_c18ab8eab0c49f84,
        mid_numberOfLeadingZeros_06110d73d878b7ae,
        mid_numberOfTrailingZeros_06110d73d878b7ae,
        mid_parseLong_8524bc32bc995ef2,
        mid_parseLong_77139396af4e84c5,
        mid_parseLong_154996cf4a3d855d,
        mid_parseUnsignedLong_8524bc32bc995ef2,
        mid_parseUnsignedLong_77139396af4e84c5,
        mid_parseUnsignedLong_154996cf4a3d855d,
        mid_remainderUnsigned_c18ab8eab0c49f84,
        mid_reverse_f4ad805a81234b49,
        mid_reverseBytes_f4ad805a81234b49,
        mid_rotateLeft_974ee1cf526db4b7,
        mid_rotateRight_974ee1cf526db4b7,
        mid_shortValue_2554afc868a7ba2a,
        mid_signum_06110d73d878b7ae,
        mid_sum_c18ab8eab0c49f84,
        mid_toBinaryString_dffed0dde596e613,
        mid_toHexString_dffed0dde596e613,
        mid_toOctalString_dffed0dde596e613,
        mid_toString_3cffd47377eca18a,
        mid_toString_dffed0dde596e613,
        mid_toString_eeb517e6e503fbb7,
        mid_toUnsignedString_dffed0dde596e613,
        mid_toUnsignedString_eeb517e6e503fbb7,
        mid_valueOf_7f2060733966aef7,
        mid_valueOf_214cbd70b5088f3f,
        mid_valueOf_a76026f05215f715,
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
