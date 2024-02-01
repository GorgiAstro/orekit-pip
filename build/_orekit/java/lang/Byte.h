#ifndef java_lang_Byte_H
#define java_lang_Byte_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Byte;
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

    class Byte : public ::java::lang::Number {
     public:
      enum {
        mid_init$_105e1eadb709d9ac,
        mid_init$_c5b50806960ababe,
        mid_byteValue_5bc9c54e4a4e6e3f,
        mid_compare_99cc7ebd515197d5,
        mid_compareTo_c59155d7582bf081,
        mid_compareUnsigned_99cc7ebd515197d5,
        mid_decode_ef5aec5cf3811a5d,
        mid_doubleValue_9981f74b2d109da6,
        mid_equals_72faff9b05f5ed5e,
        mid_floatValue_0e3b995f823d65ff,
        mid_hashCode_d6ab429752e7c267,
        mid_hashCode_f003b7d37d8f9843,
        mid_intValue_d6ab429752e7c267,
        mid_longValue_42c72b98e3c2e08a,
        mid_parseByte_715a8d0c0cb07484,
        mid_parseByte_142d028f14d5b71c,
        mid_shortValue_5067fec74ceda473,
        mid_toString_d2c8eb4129821f0e,
        mid_toString_c342f43960e2117c,
        mid_toUnsignedInt_f003b7d37d8f9843,
        mid_toUnsignedLong_25347891c3cc3af6,
        mid_valueOf_ef5aec5cf3811a5d,
        mid_valueOf_94cdbfda5299f8d3,
        mid_valueOf_6c43b756d047c483,
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
