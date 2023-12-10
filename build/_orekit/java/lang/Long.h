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
        mid_init$_e939c6558ae8d313,
        mid_init$_fefb08975c10f0a1,
        mid_bitCount_81b31113dbb4e784,
        mid_byteValue_1d06dd1980a98d13,
        mid_compare_ca2a0e372d8357f3,
        mid_compareTo_b5753ce4b4fd5563,
        mid_compareUnsigned_ca2a0e372d8357f3,
        mid_decode_743f11a4f4a49d3e,
        mid_divideUnsigned_8f974216cbe53aea,
        mid_doubleValue_456d9a2f64d6b28d,
        mid_equals_229c87223f486349,
        mid_floatValue_966c782d3223854d,
        mid_getLong_743f11a4f4a49d3e,
        mid_getLong_dd5aad86b6ec92f4,
        mid_getLong_564f79cb8465e383,
        mid_hashCode_f2f64475e4580546,
        mid_hashCode_81b31113dbb4e784,
        mid_highestOneBit_955f7541fca701ab,
        mid_intValue_f2f64475e4580546,
        mid_longValue_a27fc9afd27e559d,
        mid_lowestOneBit_955f7541fca701ab,
        mid_max_8f974216cbe53aea,
        mid_min_8f974216cbe53aea,
        mid_numberOfLeadingZeros_81b31113dbb4e784,
        mid_numberOfTrailingZeros_81b31113dbb4e784,
        mid_parseLong_cd11fe529eef6ae9,
        mid_parseLong_18c5cb7968e2fe7c,
        mid_parseLong_73809afe8eb8756d,
        mid_parseUnsignedLong_cd11fe529eef6ae9,
        mid_parseUnsignedLong_18c5cb7968e2fe7c,
        mid_parseUnsignedLong_73809afe8eb8756d,
        mid_remainderUnsigned_8f974216cbe53aea,
        mid_reverse_955f7541fca701ab,
        mid_reverseBytes_955f7541fca701ab,
        mid_rotateLeft_1672c32325bd5d4a,
        mid_rotateRight_1672c32325bd5d4a,
        mid_shortValue_f89720844d790ad7,
        mid_signum_81b31113dbb4e784,
        mid_sum_8f974216cbe53aea,
        mid_toBinaryString_8da367bd62adf91c,
        mid_toHexString_8da367bd62adf91c,
        mid_toOctalString_8da367bd62adf91c,
        mid_toString_0090f7797e403f43,
        mid_toString_8da367bd62adf91c,
        mid_toString_36324403461d7e32,
        mid_toUnsignedString_8da367bd62adf91c,
        mid_toUnsignedString_36324403461d7e32,
        mid_valueOf_743f11a4f4a49d3e,
        mid_valueOf_0097ea5d7f3125d1,
        mid_valueOf_c70eb1f50fb9ea56,
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
