#ifndef java_lang_Boolean_H
#define java_lang_Boolean_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class Boolean;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Boolean : public ::java::lang::Object {
     public:
      enum {
        mid_init$_105e1eadb709d9ac,
        mid_init$_b35db77cae58639e,
        mid_booleanValue_eee3de00fe971136,
        mid_compare_cd474d6e9545876f,
        mid_compareTo_d7ba12d6c676053e,
        mid_equals_72faff9b05f5ed5e,
        mid_getBoolean_df4c65b2aede5c41,
        mid_hashCode_d6ab429752e7c267,
        mid_hashCode_e4d60fb80a5dfcf7,
        mid_logicalAnd_d30e0f24f88aecc2,
        mid_logicalOr_d30e0f24f88aecc2,
        mid_logicalXor_d30e0f24f88aecc2,
        mid_parseBoolean_df4c65b2aede5c41,
        mid_toString_d2c8eb4129821f0e,
        mid_toString_512646e36b2b1871,
        mid_valueOf_4a2666f127f8b9bb,
        mid_valueOf_f6bd68e4fc8ad43a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Boolean(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Boolean(const Boolean& obj) : ::java::lang::Object(obj) {}

      static Boolean *FALSE;
      static Boolean *TRUE;
      static ::java::lang::Class *TYPE;

      Boolean(const ::java::lang::String &);
      Boolean(jboolean);

      jboolean booleanValue() const;
      static jint compare(jboolean, jboolean);
      jint compareTo(const Boolean &) const;
      jboolean equals(const ::java::lang::Object &) const;
      static jboolean getBoolean(const ::java::lang::String &);
      jint hashCode() const;
      static jint hashCode(jboolean);
      static jboolean logicalAnd(jboolean, jboolean);
      static jboolean logicalOr(jboolean, jboolean);
      static jboolean logicalXor(jboolean, jboolean);
      static jboolean parseBoolean(const ::java::lang::String &);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jboolean);
      static Boolean valueOf(const ::java::lang::String &);
      static Boolean valueOf(jboolean);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Boolean);
    extern PyTypeObject *PY_TYPE(Boolean);

    class t_Boolean {
    public:
      PyObject_HEAD
      Boolean object;
      static PyObject *wrap_Object(const Boolean&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
