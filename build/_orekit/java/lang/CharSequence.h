#ifndef java_lang_CharSequence_H
#define java_lang_CharSequence_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class CharSequence : public ::java::lang::Object {
     public:
      enum {
        mid_charAt_9d4c2604195fbadb,
        mid_compare_510522d819b7a295,
        mid_length_570ce0828f81a2c1,
        mid_subSequence_be25fa7011a1ec8f,
        mid_toString_11b109bd155ca898,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit CharSequence(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      CharSequence(const CharSequence& obj) : ::java::lang::Object(obj) {}

      jchar charAt(jint) const;
      static jint compare(const CharSequence &, const CharSequence &);
      jint length() const;
      CharSequence subSequence(jint, jint) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(CharSequence);
    extern PyTypeObject *PY_TYPE(CharSequence);

    class t_CharSequence {
    public:
      PyObject_HEAD
      CharSequence object;
      static PyObject *wrap_Object(const CharSequence&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
