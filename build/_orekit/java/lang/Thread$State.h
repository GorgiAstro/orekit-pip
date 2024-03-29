#ifndef java_lang_Thread$State_H
#define java_lang_Thread$State_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class Thread$State;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Thread$State : public ::java::lang::Enum {
     public:
      enum {
        mid_valueOf_6b04f5f5f3a7572a,
        mid_values_28d562dca8405aab,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Thread$State(jobject obj) : ::java::lang::Enum(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Thread$State(const Thread$State& obj) : ::java::lang::Enum(obj) {}

      static Thread$State *BLOCKED;
      static Thread$State *NEW;
      static Thread$State *RUNNABLE;
      static Thread$State *TERMINATED;
      static Thread$State *TIMED_WAITING;
      static Thread$State *WAITING;

      static Thread$State valueOf(const ::java::lang::String &);
      static JArray< Thread$State > values();
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Thread$State);
    extern PyTypeObject *PY_TYPE(Thread$State);

    class t_Thread$State {
    public:
      PyObject_HEAD
      Thread$State object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Thread$State *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Thread$State&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Thread$State&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
