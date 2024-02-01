#ifndef java_io_SerializablePermission_H
#define java_io_SerializablePermission_H

#include "java/security/BasicPermission.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class SerializablePermission : public ::java::security::BasicPermission {
     public:
      enum {
        mid_init$_105e1eadb709d9ac,
        mid_init$_771aee6c143cc92a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit SerializablePermission(jobject obj) : ::java::security::BasicPermission(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      SerializablePermission(const SerializablePermission& obj) : ::java::security::BasicPermission(obj) {}

      SerializablePermission(const ::java::lang::String &);
      SerializablePermission(const ::java::lang::String &, const ::java::lang::String &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(SerializablePermission);
    extern PyTypeObject *PY_TYPE(SerializablePermission);

    class t_SerializablePermission {
    public:
      PyObject_HEAD
      SerializablePermission object;
      static PyObject *wrap_Object(const SerializablePermission&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
