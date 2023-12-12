#ifndef java_io_ObjectStreamException_H
#define java_io_ObjectStreamException_H

#include "java/io/IOException.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class ObjectStreamException : public ::java::io::IOException {
     public:

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ObjectStreamException(jobject obj) : ::java::io::IOException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ObjectStreamException(const ObjectStreamException& obj) : ::java::io::IOException(obj) {}
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(ObjectStreamException);
    extern PyTypeObject *PY_TYPE(ObjectStreamException);

    class t_ObjectStreamException {
    public:
      PyObject_HEAD
      ObjectStreamException object;
      static PyObject *wrap_Object(const ObjectStreamException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
