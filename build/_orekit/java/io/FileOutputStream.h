#ifndef java_io_FileOutputStream_H
#define java_io_FileOutputStream_H

#include "java/io/OutputStream.h"

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

    class FileOutputStream : public ::java::io::OutputStream {
     public:
      enum {
        mid_init$_7e1d51614d5d6a43,
        mid_init$_ce27f4372ce835a9,
        mid_init$_734b91ac30d5f9b4,
        mid_init$_f9b478269d0933b4,
        mid_init$_76cf8b957ccb7ae1,
        mid_close_a1fa5dae97ea5ed2,
        mid_getFD_8101a306613a8395,
        mid_write_459771b03534868e,
        mid_write_44ed599e93e8a30c,
        mid_write_a9fddc59b07ce512,
        mid_finalize_a1fa5dae97ea5ed2,
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
