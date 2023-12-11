#ifndef java_lang_AutoCloseable_H
#define java_lang_AutoCloseable_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Exception;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class AutoCloseable : public ::java::lang::Object {
     public:
      enum {
        mid_close_0640e6acf969ed28,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit AutoCloseable(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      AutoCloseable(const AutoCloseable& obj) : ::java::lang::Object(obj) {}

      void close() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(AutoCloseable);
    extern PyTypeObject *PY_TYPE(AutoCloseable);

    class t_AutoCloseable {
    public:
      PyObject_HEAD
      AutoCloseable object;
      static PyObject *wrap_Object(const AutoCloseable&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
