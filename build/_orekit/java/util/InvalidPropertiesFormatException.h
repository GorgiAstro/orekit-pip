#ifndef java_util_InvalidPropertiesFormatException_H
#define java_util_InvalidPropertiesFormatException_H

#include "java/io/IOException.h"

namespace java {
  namespace lang {
    class String;
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class InvalidPropertiesFormatException : public ::java::io::IOException {
     public:
      enum {
        mid_init$_f5ffdf29129ef90a,
        mid_init$_7d9320fd2ea36122,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit InvalidPropertiesFormatException(jobject obj) : ::java::io::IOException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      InvalidPropertiesFormatException(const InvalidPropertiesFormatException& obj) : ::java::io::IOException(obj) {}

      InvalidPropertiesFormatException(const ::java::lang::String &);
      InvalidPropertiesFormatException(const ::java::lang::Throwable &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(InvalidPropertiesFormatException);
    extern PyTypeObject *PY_TYPE(InvalidPropertiesFormatException);

    class t_InvalidPropertiesFormatException {
    public:
      PyObject_HEAD
      InvalidPropertiesFormatException object;
      static PyObject *wrap_Object(const InvalidPropertiesFormatException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
