#ifndef java_lang_NamedPackage_H
#define java_lang_NamedPackage_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class NamedPackage : public ::java::lang::Object {
     public:

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit NamedPackage(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      NamedPackage(const NamedPackage& obj) : ::java::lang::Object(obj) {}
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(NamedPackage);
    extern PyTypeObject *PY_TYPE(NamedPackage);

    class t_NamedPackage {
    public:
      PyObject_HEAD
      NamedPackage object;
      static PyObject *wrap_Object(const NamedPackage&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
