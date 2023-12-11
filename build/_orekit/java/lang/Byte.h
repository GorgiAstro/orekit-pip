#ifndef java_lang_Byte_H
#define java_lang_Byte_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Byte;
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

    class Byte : public ::java::lang::Number {
     public:
      enum {
        mid_init$_f5ffdf29129ef90a,
        mid_init$_20e45467bc7240af,
        mid_byteValue_acadfed42a0dbd0d,
        mid_compare_a877194c66e28f45,
        mid_compareTo_565207278f6cfebe,
        mid_compareUnsigned_a877194c66e28f45,
        mid_decode_cf2403264d12dd97,
        mid_doubleValue_557b8123390d8d0c,
        mid_equals_221e8e85cb385209,
        mid_floatValue_04fe014f7609dc26,
        mid_hashCode_412668abc8d889e9,
        mid_hashCode_0fd9b448afbf487f,
        mid_intValue_412668abc8d889e9,
        mid_longValue_9e26256fb0d384a2,
        mid_parseByte_b7a19d29302a4a6a,
        mid_parseByte_ef194043c96d5d38,
        mid_shortValue_2554afc868a7ba2a,
        mid_toString_3cffd47377eca18a,
        mid_toString_5e355ffc397c40f5,
        mid_toUnsignedInt_0fd9b448afbf487f,
        mid_toUnsignedLong_ed0d0d0b1b809f96,
        mid_valueOf_cf2403264d12dd97,
        mid_valueOf_0497382e2bbd9a33,
        mid_valueOf_c28f886a2b8922d4,
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
