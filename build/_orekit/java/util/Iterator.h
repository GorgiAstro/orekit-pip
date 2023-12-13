#ifndef java_util_Iterator_H
#define java_util_Iterator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Iterator : public ::java::lang::Object {
     public:
      enum {
        mid_hasNext_9ab94ac1dc23b105,
        mid_next_541690f9ee81d3ad,
        mid_remove_a1fa5dae97ea5ed2,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Iterator(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Iterator(const Iterator& obj) : ::java::lang::Object(obj) {}

      jboolean hasNext() const;
      ::java::lang::Object next() const;
      void remove() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Iterator);
    extern PyTypeObject *PY_TYPE(Iterator);

    class t_Iterator {
    public:
      PyObject_HEAD
      Iterator object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Iterator *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Iterator&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Iterator&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
