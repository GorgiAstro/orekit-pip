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
        mid_init$_44d81342f3d8a712,
        mid_init$_2abbf5ab4dcb8447,
        mid_init$_105e1eadb709d9ac,
        mid_available_d6ab429752e7c267,
        mid_close_ff7cb6c242604316,
        mid_getFD_18958df2242529e5,
        mid_read_d6ab429752e7c267,
        mid_read_89e14f411787412a,
        mid_read_1351cbafe5a435a7,
        mid_skip_1eaf6eb0a3f3163f,
        mid_finalize_ff7cb6c242604316,
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
