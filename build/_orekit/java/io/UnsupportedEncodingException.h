#ifndef java_io_UnsupportedEncodingException_H
#define java_io_UnsupportedEncodingException_H

#include "java/io/IOException.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class UnsupportedEncodingException : public ::java::io::IOException {
     public:
      enum {
        mid_init$_7ae3461a92a43152,
        mid_init$_e939c6558ae8d313,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit UnsupportedEncodingException(jobject obj) : ::java::io::IOException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      UnsupportedEncodingException(const UnsupportedEncodingException& obj) : ::java::io::IOException(obj) {}

      UnsupportedEncodingException();
      UnsupportedEncodingException(const ::java::lang::String &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(UnsupportedEncodingException);
    extern PyTypeObject *PY_TYPE(UnsupportedEncodingException);

    class t_UnsupportedEncodingException {
    public:
      PyObject_HEAD
      UnsupportedEncodingException object;
      static PyObject *wrap_Object(const UnsupportedEncodingException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
