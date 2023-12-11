#ifndef java_io_FileInputStream_H
#define java_io_FileInputStream_H

#include "java/io/InputStream.h"

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

    class FileInputStream : public ::java::io::InputStream {
     public:
      enum {
        mid_init$_5d6bcca91ae998ee,
        mid_init$_0a1c60be3a779b3b,
        mid_init$_f5ffdf29129ef90a,
        mid_available_412668abc8d889e9,
        mid_close_0640e6acf969ed28,
        mid_getFD_94f00ee7019754d9,
        mid_read_412668abc8d889e9,
        mid_read_67c88f2bf4e7f8b2,
        mid_read_68a76742c8623fb3,
        mid_skip_f4ad805a81234b49,
        mid_finalize_0640e6acf969ed28,
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
