#ifndef java_lang_Short_H
#define java_lang_Short_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
    class Short;
    class String;
    class NumberFormatException;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Short : public ::java::lang::Number {
     public:
      enum {
        mid_init$_f5ffdf29129ef90a,
        mid_init$_4dd7cb85dfbe2923,
        mid_byteValue_acadfed42a0dbd0d,
        mid_compare_e0728e8781006baf,
        mid_compareTo_ef6c32dd701634e5,
        mid_compareUnsigned_e0728e8781006baf,
        mid_decode_0e5c7a54d61db9d3,
        mid_doubleValue_557b8123390d8d0c,
        mid_equals_221e8e85cb385209,
        mid_floatValue_04fe014f7609dc26,
        mid_hashCode_412668abc8d889e9,
        mid_hashCode_84f49866c8454b37,
        mid_intValue_412668abc8d889e9,
        mid_longValue_9e26256fb0d384a2,
        mid_parseShort_3ca6edc7cfaf0911,
        mid_parseShort_a3b4680aa28e59ae,
        mid_reverseBytes_f2d44bfa48188520,
        mid_shortValue_2554afc868a7ba2a,
        mid_toString_3cffd47377eca18a,
        mid_toString_515bf94be63f073f,
        mid_toUnsignedInt_84f49866c8454b37,
        mid_toUnsignedLong_e65426e48973be4a,
        mid_valueOf_0e5c7a54d61db9d3,
        mid_valueOf_194b70819fe4e06e,
        mid_valueOf_301de946165195a3,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Short(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Short(const Short& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jshort MAX_VALUE;
      static jshort MIN_VALUE;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Short(const ::java::lang::String &);
      Short(jshort);

      jbyte byteValue() const;
      static jint compare(jshort, jshort);
      jint compareTo(const Short &) const;
      static jint compareUnsigned(jshort, jshort);
      static Short decode(const ::java::lang::String &);
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      jfloat floatValue() const;
      jint hashCode() const;
      static jint hashCode(jshort);
      jint intValue() const;
      jlong longValue() const;
      static jshort parseShort(const ::java::lang::String &);
      static jshort parseShort(const ::java::lang::String &, jint);
      static jshort reverseBytes(jshort);
      jshort shortValue() const;
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jshort);
      static jint toUnsignedInt(jshort);
      static jlong toUnsignedLong(jshort);
      static Short valueOf(const ::java::lang::String &);
      static Short valueOf(jshort);
      static Short valueOf(const ::java::lang::String &, jint);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Short);
    extern PyTypeObject *PY_TYPE(Short);

    class t_Short {
    public:
      PyObject_HEAD
      Short object;
      static PyObject *wrap_Object(const Short&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
