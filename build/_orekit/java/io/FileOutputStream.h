#ifndef java_io_FileOutputStream_H
#define java_io_FileOutputStream_H

#include "java/io/OutputStream.h"

namespace java {
  namespace io {
    class IOException;
    class FileNotFoundException;
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
        mid_init$_46e66c77c82c9a6b,
        mid_init$_451cf111c3bab36d,
        mid_init$_e939c6558ae8d313,
        mid_init$_cd7bcee0834329b0,
        mid_init$_d1dd1bdcf55f8f80,
        mid_close_7ae3461a92a43152,
        mid_getFD_0498b7250232ff82,
        mid_write_9c4b35f0a6dc87f3,
        mid_write_0a2a1ac2721c0336,
        mid_write_125b1e9f043b29f8,
        mid_finalize_7ae3461a92a43152,
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
