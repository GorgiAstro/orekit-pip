#ifndef java_io_ObjectInputValidation_H
#define java_io_ObjectInputValidation_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InvalidObjectException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class ObjectInputValidation : public ::java::lang::Object {
     public:
      enum {
        mid_validateObject_7ae3461a92a43152,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ObjectInputValidation(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ObjectInputValidation(const ObjectInputValidation& obj) : ::java::lang::Object(obj) {}

      void validateObject() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(ObjectInputValidation);
    extern PyTypeObject *PY_TYPE(ObjectInputValidation);

    class t_ObjectInputValidation {
    public:
      PyObject_HEAD
      ObjectInputValidation object;
      static PyObject *wrap_Object(const ObjectInputValidation&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
