#ifndef java_lang_Short_H
#define java_lang_Short_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Short;
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

    class Short : public ::java::lang::Number {
     public:
      enum {
        mid_init$_105e1eadb709d9ac,
        mid_init$_82cbebcb79e29516,
        mid_byteValue_5bc9c54e4a4e6e3f,
        mid_compare_87d6c106f955819c,
        mid_compareTo_dbc19978fb9b7a7e,
        mid_compareUnsigned_87d6c106f955819c,
        mid_decode_ffa4257f92d944cc,
        mid_doubleValue_9981f74b2d109da6,
        mid_equals_72faff9b05f5ed5e,
        mid_floatValue_0e3b995f823d65ff,
        mid_hashCode_d6ab429752e7c267,
        mid_hashCode_4c3f0428308d24f5,
        mid_intValue_d6ab429752e7c267,
        mid_longValue_42c72b98e3c2e08a,
        mid_parseShort_0da62ff94af6a262,
        mid_parseShort_e68db604a715d9c1,
        mid_reverseBytes_21fb32c1ab6702d9,
        mid_shortValue_5067fec74ceda473,
        mid_toString_d2c8eb4129821f0e,
        mid_toString_18737a44572c1216,
        mid_toUnsignedInt_4c3f0428308d24f5,
        mid_toUnsignedLong_91ec698e3904d68f,
        mid_valueOf_ffa4257f92d944cc,
        mid_valueOf_b2c1a3dc5058d398,
        mid_valueOf_3d3fc87d1502acce,
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
