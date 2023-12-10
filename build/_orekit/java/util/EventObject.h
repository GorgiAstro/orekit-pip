#ifndef java_util_EventObject_H
#define java_util_EventObject_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class EventObject : public ::java::lang::Object {
     public:
      enum {
        mid_init$_7ca0d9438822cb0b,
        mid_getSource_dfd7647d9110ac9f,
        mid_toString_0090f7797e403f43,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit EventObject(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      EventObject(const EventObject& obj) : ::java::lang::Object(obj) {}

      EventObject(const ::java::lang::Object &);

      ::java::lang::Object getSource() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(EventObject);
    extern PyTypeObject *PY_TYPE(EventObject);

    class t_EventObject {
    public:
      PyObject_HEAD
      EventObject object;
      static PyObject *wrap_Object(const EventObject&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif