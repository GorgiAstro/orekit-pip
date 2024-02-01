#ifndef java_io_FileNotFoundException_H
#define java_io_FileNotFoundException_H

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

    class FileNotFoundException : public ::java::io::IOException {
     public:
      enum {
        mid_init$_ff7cb6c242604316,
        mid_init$_105e1eadb709d9ac,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit FileNotFoundException(jobject obj) : ::java::io::IOException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      FileNotFoundException(const FileNotFoundException& obj) : ::java::io::IOException(obj) {}

      FileNotFoundException();
      FileNotFoundException(const ::java::lang::String &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(FileNotFoundException);
    extern PyTypeObject *PY_TYPE(FileNotFoundException);

    class t_FileNotFoundException {
    public:
      PyObject_HEAD
      FileNotFoundException object;
      static PyObject *wrap_Object(const FileNotFoundException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
