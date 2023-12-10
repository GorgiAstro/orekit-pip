#ifndef java_io_FileOutputStream_H
#define java_io_FileOutputStream_H

#include "java/io/OutputStream.h"

namespace java {
  namespace io {
    class FileNotFoundException;
    class IOException;
    class File;
    class FileDescriptor;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class FileOutputStream : public ::java::io::OutputStream {
     public:
      enum {
        mid_init$_0613af62f2ba5dba,
        mid_init$_9d90d2b41ddf88a5,
        mid_init$_d0bc48d5b00dc40c,
        mid_init$_b98d6d989298aaff,
        mid_init$_d6df10f4e35ef1e8,
        mid_close_0fa09c18fee449d5,
        mid_getFD_1b2c26fd91c09af1,
        mid_write_20012b3010a39c05,
        mid_write_99803b0791f320ff,
        mid_write_d7af9aedcdd3845b,
        mid_finalize_0fa09c18fee449d5,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit FileOutputStream(jobject obj) : ::java::io::OutputStream(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      FileOutputStream(const FileOutputStream& obj) : ::java::io::OutputStream(obj) {}

      FileOutputStream(const ::java::io::File &);
      FileOutputStream(const ::java::io::FileDescriptor &);
      FileOutputStream(const ::java::lang::String &);
      FileOutputStream(const ::java::io::File &, jboolean);
      FileOutputStream(const ::java::lang::String &, jboolean);

      void close() const;
      ::java::io::FileDescriptor getFD() const;
      void write(const JArray< jbyte > &) const;
      void write(jint) const;
      void write(const JArray< jbyte > &, jint, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(FileOutputStream);
    extern PyTypeObject *PY_TYPE(FileOutputStream);

    class t_FileOutputStream {
    public:
      PyObject_HEAD
      FileOutputStream object;
      static PyObject *wrap_Object(const FileOutputStream&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
