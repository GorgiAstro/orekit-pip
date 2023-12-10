#ifndef java_lang_Byte_H
#define java_lang_Byte_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Byte;
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

    class Byte : public ::java::lang::Number {
     public:
      enum {
        mid_init$_e939c6558ae8d313,
        mid_init$_4b32f73c96e6d9ca,
        mid_byteValue_1d06dd1980a98d13,
        mid_compare_6eb7a84e3f305bdd,
        mid_compareTo_8b33e201affb0d43,
        mid_compareUnsigned_6eb7a84e3f305bdd,
        mid_decode_1bf9b0afcfdc6b2c,
        mid_doubleValue_456d9a2f64d6b28d,
        mid_equals_229c87223f486349,
        mid_floatValue_966c782d3223854d,
        mid_hashCode_f2f64475e4580546,
        mid_hashCode_1ad9bb2e063e2c13,
        mid_intValue_f2f64475e4580546,
        mid_longValue_a27fc9afd27e559d,
        mid_parseByte_6779063f5581c081,
        mid_parseByte_7a0decc209a90dc0,
        mid_shortValue_f89720844d790ad7,
        mid_toString_0090f7797e403f43,
        mid_toString_807d3a3b51bfd2ae,
        mid_toUnsignedInt_1ad9bb2e063e2c13,
        mid_toUnsignedLong_af453fced9e74b01,
        mid_valueOf_1bf9b0afcfdc6b2c,
        mid_valueOf_1c6aa8e9f862b561,
        mid_valueOf_0896f1755b6a6480,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Byte(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Byte(const Byte& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jbyte MAX_VALUE;
      static jbyte MIN_VALUE;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Byte(const ::java::lang::String &);
      Byte(jbyte);

      jbyte byteValue() const;
      static jint compare(jbyte, jbyte);
      jint compareTo(const Byte &) const;
      static jint compareUnsigned(jbyte, jbyte);
      static Byte decode(const ::java::lang::String &);
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      jfloat floatValue() const;
      jint hashCode() const;
      static jint hashCode(jbyte);
      jint intValue() const;
      jlong longValue() const;
      static jbyte parseByte(const ::java::lang::String &);
      static jbyte parseByte(const ::java::lang::String &, jint);
      jshort shortValue() const;
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jbyte);
      static jint toUnsignedInt(jbyte);
      static jlong toUnsignedLong(jbyte);
      static Byte valueOf(const ::java::lang::String &);
      static Byte valueOf(jbyte);
      static Byte valueOf(const ::java::lang::String &, jint);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Byte);
    extern PyTypeObject *PY_TYPE(Byte);

    class t_Byte {
    public:
      PyObject_HEAD
      Byte object;
      static PyObject *wrap_Object(const Byte&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
