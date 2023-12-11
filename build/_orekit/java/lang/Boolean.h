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
        mid_init$_f5ffdf29129ef90a,
        mid_init$_ed2afdb8506b9742,
        mid_booleanValue_89b302893bdbe1f1,
        mid_compare_86b4d1b120434836,
        mid_compareTo_a2f73afc350ef26c,
        mid_equals_221e8e85cb385209,
        mid_getBoolean_fd2162b8a05a22fe,
        mid_hashCode_412668abc8d889e9,
        mid_hashCode_b5ea7a839307c5e6,
        mid_logicalAnd_fb66d73e77ebbfca,
        mid_logicalOr_fb66d73e77ebbfca,
        mid_logicalXor_fb66d73e77ebbfca,
        mid_parseBoolean_fd2162b8a05a22fe,
        mid_toString_3cffd47377eca18a,
        mid_toString_2d14bb496c734036,
        mid_valueOf_fc3c23f6d5dce142,
        mid_valueOf_9a32b3c6112f9c52,
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
