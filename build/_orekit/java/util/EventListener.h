#ifndef java_util_EventListener_H
#define java_util_EventListener_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class EventListener : public ::java::lang::Object {
     public:

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit EventListener(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      EventListener(const EventListener& obj) : ::java::lang::Object(obj) {}
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(EventListener);
    extern PyTypeObject *PY_TYPE(EventListener);

    class t_EventListener {
    public:
      PyObject_HEAD
      EventListener object;
      static PyObject *wrap_Object(const EventListener&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
