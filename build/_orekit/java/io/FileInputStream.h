#ifndef java_io_FileInputStream_H
#define java_io_FileInputStream_H

#include "java/io/InputStream.h"

namespace java {
  namespace io {
    class FileNotFoundException;
    class File;
    class IOException;
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
        mid_init$_7e1d51614d5d6a43,
        mid_init$_ce27f4372ce835a9,
        mid_init$_734b91ac30d5f9b4,
        mid_available_55546ef6a647f39b,
        mid_close_a1fa5dae97ea5ed2,
        mid_getFD_8101a306613a8395,
        mid_read_55546ef6a647f39b,
        mid_read_53324f422c2c7f64,
        mid_read_296dd75c373e2c1d,
        mid_skip_9db63109f74a74fc,
        mid_finalize_a1fa5dae97ea5ed2,
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
