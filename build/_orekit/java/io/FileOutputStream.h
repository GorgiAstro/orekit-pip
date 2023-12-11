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
        mid_init$_5d6bcca91ae998ee,
        mid_init$_0a1c60be3a779b3b,
        mid_init$_f5ffdf29129ef90a,
        mid_init$_237457d19ea4d200,
        mid_init$_e5ca4b97ee6bd2b6,
        mid_close_0640e6acf969ed28,
        mid_getFD_94f00ee7019754d9,
        mid_write_d759c70c6670fd89,
        mid_write_a3da1a935cb37f7b,
        mid_write_ac782c7077255dd3,
        mid_finalize_0640e6acf969ed28,
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
