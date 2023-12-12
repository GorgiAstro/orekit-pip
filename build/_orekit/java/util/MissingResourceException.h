#ifndef java_util_MissingResourceException_H
#define java_util_MissingResourceException_H

#include "java/lang/RuntimeException.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class MissingResourceException : public ::java::lang::RuntimeException {
     public:
      enum {
        mid_init$_f5c244a0f15376be,
        mid_getClassName_3cffd47377eca18a,
        mid_getKey_3cffd47377eca18a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit MissingResourceException(jobject obj) : ::java::lang::RuntimeException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      MissingResourceException(const MissingResourceException& obj) : ::java::lang::RuntimeException(obj) {}

      MissingResourceException(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);

      ::java::lang::String getClassName() const;
      ::java::lang::String getKey() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(MissingResourceException);
    extern PyTypeObject *PY_TYPE(MissingResourceException);

    class t_MissingResourceException {
    public:
      PyObject_HEAD
      MissingResourceException object;
      static PyObject *wrap_Object(const MissingResourceException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
