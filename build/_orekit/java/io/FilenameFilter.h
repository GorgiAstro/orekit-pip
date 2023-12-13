#ifndef java_io_FilenameFilter_H
#define java_io_FilenameFilter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class File;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class FilenameFilter : public ::java::lang::Object {
     public:
      enum {
        mid_accept_12832a4c86ffbc36,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit FilenameFilter(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      FilenameFilter(const FilenameFilter& obj) : ::java::lang::Object(obj) {}

      jboolean accept(const ::java::io::File &, const ::java::lang::String &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(FilenameFilter);
    extern PyTypeObject *PY_TYPE(FilenameFilter);

    class t_FilenameFilter {
    public:
      PyObject_HEAD
      FilenameFilter object;
      static PyObject *wrap_Object(const FilenameFilter&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
