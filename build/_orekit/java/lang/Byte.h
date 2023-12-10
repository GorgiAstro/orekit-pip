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
        mid_init$_d0bc48d5b00dc40c,
        mid_init$_75a957b0fa0af2fc,
        mid_byteValue_42a1555092006f7f,
        mid_compare_c28330d04052299f,
        mid_compareTo_b22b7494b19a6935,
        mid_compareUnsigned_c28330d04052299f,
        mid_decode_1c2a79cb0dcd9874,
        mid_doubleValue_dff5885c2c873297,
        mid_equals_65c7d273e80d497a,
        mid_floatValue_5adccb493ada08e8,
        mid_hashCode_570ce0828f81a2c1,
        mid_hashCode_0090221016e6154f,
        mid_intValue_570ce0828f81a2c1,
        mid_longValue_492808a339bfa35f,
        mid_parseByte_e05d60cdb51d2965,
        mid_parseByte_45092d94bf3a462d,
        mid_shortValue_b5dd6688e7dce57d,
        mid_toString_11b109bd155ca898,
        mid_toString_29e9e63239e7a6b2,
        mid_toUnsignedInt_0090221016e6154f,
        mid_toUnsignedLong_f9fbce2436ae74f2,
        mid_valueOf_1c2a79cb0dcd9874,
        mid_valueOf_7e3cc57b85209927,
        mid_valueOf_7c17169bb43de73b,
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
