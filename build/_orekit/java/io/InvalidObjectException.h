#ifndef java_io_InvalidObjectException_H
#define java_io_InvalidObjectException_H

#include "java/io/ObjectStreamException.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class InvalidObjectException : public ::java::io::ObjectStreamException {
     public:
      enum {
        mid_init$_e939c6558ae8d313,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit InvalidObjectException(jobject obj) : ::java::io::ObjectStreamException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      InvalidObjectException(const InvalidObjectException& obj) : ::java::io::ObjectStreamException(obj) {}

      InvalidObjectException(const ::java::lang::String &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(InvalidObjectException);
    extern PyTypeObject *PY_TYPE(InvalidObjectException);

    class t_InvalidObjectException {
    public:
      PyObject_HEAD
      InvalidObjectException object;
      static PyObject *wrap_Object(const InvalidObjectException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
