#ifndef java_lang_Short_H
#define java_lang_Short_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Short;
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

    class Short : public ::java::lang::Number {
     public:
      enum {
        mid_init$_734b91ac30d5f9b4,
        mid_init$_87fce9dc35ce6b26,
        mid_byteValue_82ba37184c5152a3,
        mid_compare_4993d3387235345d,
        mid_compareTo_93b740fd6c9781cc,
        mid_compareUnsigned_4993d3387235345d,
        mid_decode_fe5ef6b9f541b154,
        mid_doubleValue_b74f83833fdad017,
        mid_equals_460c5e2d9d51c6cc,
        mid_floatValue_1fb1bf0772ae5db7,
        mid_hashCode_55546ef6a647f39b,
        mid_hashCode_214f93074a0d96b4,
        mid_intValue_55546ef6a647f39b,
        mid_longValue_6c0ce7e438e5ded4,
        mid_parseShort_0db376306b95481b,
        mid_parseShort_3b213f09839e1e52,
        mid_reverseBytes_38a362a37e228d3b,
        mid_shortValue_02a2271f89f4492b,
        mid_toString_1c1fa1e935d6cdcf,
        mid_toString_46ad5d9649cd1ffa,
        mid_toUnsignedInt_214f93074a0d96b4,
        mid_toUnsignedLong_080dd964855b0700,
        mid_valueOf_fe5ef6b9f541b154,
        mid_valueOf_ce83a7f38f80ae65,
        mid_valueOf_664e4bc5e201c754,
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
