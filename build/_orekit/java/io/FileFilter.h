#ifndef java_io_FileFilter_H
#define java_io_FileFilter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class File;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class FileFilter : public ::java::lang::Object {
     public:
      enum {
        mid_accept_af02963481b9f0fd,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit FileFilter(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      FileFilter(const FileFilter& obj) : ::java::lang::Object(obj) {}

      jboolean accept(const ::java::io::File &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(FileFilter);
    extern PyTypeObject *PY_TYPE(FileFilter);

    class t_FileFilter {
    public:
      PyObject_HEAD
      FileFilter object;
      static PyObject *wrap_Object(const FileFilter&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
