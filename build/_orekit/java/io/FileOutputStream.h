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
        mid_init$_44d81342f3d8a712,
        mid_init$_2abbf5ab4dcb8447,
        mid_init$_105e1eadb709d9ac,
        mid_init$_cce9dad9a003ecf9,
        mid_init$_c5d48f261709aa3e,
        mid_close_ff7cb6c242604316,
        mid_getFD_18958df2242529e5,
        mid_write_bba2a19638de22ff,
        mid_write_8fd427ab23829bf5,
        mid_write_e4288ba5fbf20d28,
        mid_finalize_ff7cb6c242604316,
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
