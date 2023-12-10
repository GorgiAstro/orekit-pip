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
        mid_init$_d0bc48d5b00dc40c,
        mid_init$_1f2fb13869b39632,
        mid_byteValue_42a1555092006f7f,
        mid_compare_b70105f2c94539a1,
        mid_compareTo_c290c647d2b7f67e,
        mid_compareUnsigned_b70105f2c94539a1,
        mid_decode_c4883dc068af78f6,
        mid_doubleValue_dff5885c2c873297,
        mid_equals_65c7d273e80d497a,
        mid_floatValue_5adccb493ada08e8,
        mid_hashCode_570ce0828f81a2c1,
        mid_hashCode_20322215fe0b254c,
        mid_intValue_570ce0828f81a2c1,
        mid_longValue_492808a339bfa35f,
        mid_parseShort_662d597587dd2bfd,
        mid_parseShort_61bb7f94c0b93bfa,
        mid_reverseBytes_70757292b3240457,
        mid_shortValue_b5dd6688e7dce57d,
        mid_toString_11b109bd155ca898,
        mid_toString_2546eaf08a2ca212,
        mid_toUnsignedInt_20322215fe0b254c,
        mid_toUnsignedLong_9512ba5b5eee0f3e,
        mid_valueOf_c4883dc068af78f6,
        mid_valueOf_e9455399385dc0e4,
        mid_valueOf_8931312a75a8c211,
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
