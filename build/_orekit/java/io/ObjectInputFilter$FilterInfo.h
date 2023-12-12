#ifndef java_io_ObjectInputFilter$FilterInfo_H
#define java_io_ObjectInputFilter$FilterInfo_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class ObjectInputFilter$FilterInfo : public ::java::lang::Object {
     public:
      enum {
        mid_arrayLength_9e26256fb0d384a2,
        mid_depth_9e26256fb0d384a2,
        mid_references_9e26256fb0d384a2,
        mid_serialClass_d4b191ff8147475d,
        mid_streamBytes_9e26256fb0d384a2,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ObjectInputFilter$FilterInfo(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ObjectInputFilter$FilterInfo(const ObjectInputFilter$FilterInfo& obj) : ::java::lang::Object(obj) {}

      jlong arrayLength() const;
      jlong depth() const;
      jlong references() const;
      ::java::lang::Class serialClass() const;
      jlong streamBytes() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(ObjectInputFilter$FilterInfo);
    extern PyTypeObject *PY_TYPE(ObjectInputFilter$FilterInfo);

    class t_ObjectInputFilter$FilterInfo {
    public:
      PyObject_HEAD
      ObjectInputFilter$FilterInfo object;
      static PyObject *wrap_Object(const ObjectInputFilter$FilterInfo&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
