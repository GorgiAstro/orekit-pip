#ifndef java_util_PrimitiveIterator_H
#define java_util_PrimitiveIterator_H

#include "java/util/Iterator.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class PrimitiveIterator : public ::java::util::Iterator {
     public:
      enum {
        mid_forEachRemaining_2990946c992aafed,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit PrimitiveIterator(jobject obj) : ::java::util::Iterator(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      PrimitiveIterator(const PrimitiveIterator& obj) : ::java::util::Iterator(obj) {}

      void forEachRemaining(const ::java::lang::Object &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(PrimitiveIterator);
    extern PyTypeObject *PY_TYPE(PrimitiveIterator);

    class t_PrimitiveIterator {
    public:
      PyObject_HEAD
      PrimitiveIterator object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_PrimitiveIterator *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const PrimitiveIterator&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const PrimitiveIterator&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
