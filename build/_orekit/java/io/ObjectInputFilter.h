#ifndef java_io_ObjectInputFilter_H
#define java_io_ObjectInputFilter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class ObjectInputFilter$Status;
    class ObjectInputFilter$FilterInfo;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class ObjectInputFilter : public ::java::lang::Object {
     public:
      enum {
        mid_checkInput_f4ee27329d8366de,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ObjectInputFilter(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ObjectInputFilter(const ObjectInputFilter& obj) : ::java::lang::Object(obj) {}

      ::java::io::ObjectInputFilter$Status checkInput(const ::java::io::ObjectInputFilter$FilterInfo &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(ObjectInputFilter);
    extern PyTypeObject *PY_TYPE(ObjectInputFilter);

    class t_ObjectInputFilter {
    public:
      PyObject_HEAD
      ObjectInputFilter object;
      static PyObject *wrap_Object(const ObjectInputFilter&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
