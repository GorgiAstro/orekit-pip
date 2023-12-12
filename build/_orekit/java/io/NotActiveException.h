#ifndef java_io_NotActiveException_H
#define java_io_NotActiveException_H

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

    class NotActiveException : public ::java::io::ObjectStreamException {
     public:
      enum {
        mid_init$_0640e6acf969ed28,
        mid_init$_f5ffdf29129ef90a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit NotActiveException(jobject obj) : ::java::io::ObjectStreamException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      NotActiveException(const NotActiveException& obj) : ::java::io::ObjectStreamException(obj) {}

      NotActiveException();
      NotActiveException(const ::java::lang::String &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(NotActiveException);
    extern PyTypeObject *PY_TYPE(NotActiveException);

    class t_NotActiveException {
    public:
      PyObject_HEAD
      NotActiveException object;
      static PyObject *wrap_Object(const NotActiveException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
