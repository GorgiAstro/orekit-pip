#ifndef java_lang_Byte_H
#define java_lang_Byte_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Byte;
    class Class;
    class Object;
    class NumberFormatException;
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
        mid_init$_734b91ac30d5f9b4,
        mid_init$_693a437249a56ecd,
        mid_byteValue_82ba37184c5152a3,
        mid_compare_f794c048a600eb0b,
        mid_compareTo_3473363a2c415e3d,
        mid_compareUnsigned_f794c048a600eb0b,
        mid_decode_aa87ba6c79ccb038,
        mid_doubleValue_b74f83833fdad017,
        mid_equals_460c5e2d9d51c6cc,
        mid_floatValue_1fb1bf0772ae5db7,
        mid_hashCode_55546ef6a647f39b,
        mid_hashCode_6aa6edba525f59f6,
        mid_intValue_55546ef6a647f39b,
        mid_longValue_6c0ce7e438e5ded4,
        mid_parseByte_9343b8e301fce9f5,
        mid_parseByte_c27b8b77830595b4,
        mid_shortValue_02a2271f89f4492b,
        mid_toString_1c1fa1e935d6cdcf,
        mid_toString_f271aa7672b03c42,
        mid_toUnsignedInt_6aa6edba525f59f6,
        mid_toUnsignedLong_de8fc968a17e269a,
        mid_valueOf_aa87ba6c79ccb038,
        mid_valueOf_0adc4b7056ad497c,
        mid_valueOf_8d9c7dc0fe337043,
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
