#ifndef java_lang_Short_H
#define java_lang_Short_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class NumberFormatException;
    class Class;
    class Object;
    class Short;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Short : public ::java::lang::Number {
     public:
      enum {
        mid_init$_e939c6558ae8d313,
        mid_init$_49529ddfc5d788f4,
        mid_byteValue_1d06dd1980a98d13,
        mid_compare_f665b51b1f7d7692,
        mid_compareTo_44cea484a8989889,
        mid_compareUnsigned_f665b51b1f7d7692,
        mid_decode_5c3930597259c87f,
        mid_doubleValue_456d9a2f64d6b28d,
        mid_equals_229c87223f486349,
        mid_floatValue_966c782d3223854d,
        mid_hashCode_f2f64475e4580546,
        mid_hashCode_2da221e5b217b02e,
        mid_intValue_f2f64475e4580546,
        mid_longValue_a27fc9afd27e559d,
        mid_parseShort_8f5b817b89f3cf90,
        mid_parseShort_f9d65cf648ebc964,
        mid_reverseBytes_354b000ccea30104,
        mid_shortValue_f89720844d790ad7,
        mid_toString_0090f7797e403f43,
        mid_toString_f80f3447d43d64b0,
        mid_toUnsignedInt_2da221e5b217b02e,
        mid_toUnsignedLong_fa66fe7ebbbe698c,
        mid_valueOf_5c3930597259c87f,
        mid_valueOf_059edb28669472a1,
        mid_valueOf_311accad91d67f83,
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
