#ifndef java_io_FileInputStream_H
#define java_io_FileInputStream_H

#include "java/io/InputStream.h"

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

    class FileInputStream : public ::java::io::InputStream {
     public:
      enum {
        mid_init$_0613af62f2ba5dba,
        mid_init$_9d90d2b41ddf88a5,
        mid_init$_d0bc48d5b00dc40c,
        mid_available_570ce0828f81a2c1,
        mid_close_0fa09c18fee449d5,
        mid_getFD_1b2c26fd91c09af1,
        mid_read_570ce0828f81a2c1,
        mid_read_5702323b606d072b,
        mid_read_619434785725cc72,
        mid_skip_02b241598e254a3f,
        mid_finalize_0fa09c18fee449d5,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit FileInputStream(jobject obj) : ::java::io::InputStream(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      FileInputStream(const FileInputStream& obj) : ::java::io::InputStream(obj) {}

      FileInputStream(const ::java::io::File &);
      FileInputStream(const ::java::io::FileDescriptor &);
      FileInputStream(const ::java::lang::String &);

      jint available() const;
      void close() const;
      ::java::io::FileDescriptor getFD() const;
      jint read() const;
      jint read(const JArray< jbyte > &) const;
      jint read(const JArray< jbyte > &, jint, jint) const;
      jlong skip(jlong) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(FileInputStream);
    extern PyTypeObject *PY_TYPE(FileInputStream);

    class t_FileInputStream {
    public:
      PyObject_HEAD
      FileInputStream object;
      static PyObject *wrap_Object(const FileInputStream&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
