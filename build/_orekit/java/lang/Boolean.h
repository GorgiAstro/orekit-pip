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
        mid_init$_d0bc48d5b00dc40c,
        mid_init$_bd04c9335fb9e4cf,
        mid_booleanValue_b108b35ef48e27bd,
        mid_compare_7ed409398a180de9,
        mid_compareTo_9f5a8345831e07bc,
        mid_equals_65c7d273e80d497a,
        mid_getBoolean_7edad2c2f64f4d68,
        mid_hashCode_570ce0828f81a2c1,
        mid_hashCode_a81a99bc85c7f236,
        mid_logicalAnd_9e431b345e2a150d,
        mid_logicalOr_9e431b345e2a150d,
        mid_logicalXor_9e431b345e2a150d,
        mid_parseBoolean_7edad2c2f64f4d68,
        mid_toString_11b109bd155ca898,
        mid_toString_924df160f5ad43c5,
        mid_valueOf_479c229037ba55b6,
        mid_valueOf_61540e48ad79fc1d,
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
