#ifndef java_lang_NullPointerException_H
#define java_lang_NullPointerException_H

#include "java/lang/RuntimeException.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class NullPointerException : public ::java::lang::RuntimeException {
     public:
      enum {
        mid_init$_a1fa5dae97ea5ed2,
        mid_init$_734b91ac30d5f9b4,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit NullPointerException(jobject obj) : ::java::lang::RuntimeException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      NullPointerException(const NullPointerException& obj) : ::java::lang::RuntimeException(obj) {}

      NullPointerException();
      NullPointerException(const ::java::lang::String &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(NullPointerException);
    extern PyTypeObject *PY_TYPE(NullPointerException);

    class t_NullPointerException {
    public:
      PyObject_HEAD
      NullPointerException object;
      static PyObject *wrap_Object(const NullPointerException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
