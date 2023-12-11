#ifndef java_io_FileDescriptor_H
#define java_io_FileDescriptor_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class SyncFailedException;
    class FileDescriptor;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class FileDescriptor : public ::java::lang::Object {
     public:
      enum {
        mid_init$_0640e6acf969ed28,
        mid_sync_0640e6acf969ed28,
        mid_valid_89b302893bdbe1f1,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit FileDescriptor(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      FileDescriptor(const FileDescriptor& obj) : ::java::lang::Object(obj) {}

      static FileDescriptor *err;
      static FileDescriptor *in;
      static FileDescriptor *out;

      FileDescriptor();

      void sync() const;
      jboolean valid() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(FileDescriptor);
    extern PyTypeObject *PY_TYPE(FileDescriptor);

    class t_FileDescriptor {
    public:
      PyObject_HEAD
      FileDescriptor object;
      static PyObject *wrap_Object(const FileDescriptor&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
