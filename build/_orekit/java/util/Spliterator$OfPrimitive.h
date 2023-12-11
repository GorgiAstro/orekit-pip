#ifndef java_util_Spliterator$OfPrimitive_H
#define java_util_Spliterator$OfPrimitive_H

#include "java/util/Spliterator.h"

namespace java {
  namespace util {
    class Spliterator$OfPrimitive;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Spliterator$OfPrimitive : public ::java::util::Spliterator {
     public:
      enum {
        mid_forEachRemaining_009757f2c0fd9090,
        mid_tryAdvance_221e8e85cb385209,
        mid_trySplit_cb8bbf8b8d713578,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Spliterator$OfPrimitive(jobject obj) : ::java::util::Spliterator(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Spliterator$OfPrimitive(const Spliterator$OfPrimitive& obj) : ::java::util::Spliterator(obj) {}

      void forEachRemaining(const ::java::lang::Object &) const;
      jboolean tryAdvance(const ::java::lang::Object &) const;
      Spliterator$OfPrimitive trySplit() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Spliterator$OfPrimitive);
    extern PyTypeObject *PY_TYPE(Spliterator$OfPrimitive);

    class t_Spliterator$OfPrimitive {
    public:
      PyObject_HEAD
      Spliterator$OfPrimitive object;
      PyTypeObject *parameters[3];
      static PyTypeObject **parameters_(t_Spliterator$OfPrimitive *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Spliterator$OfPrimitive&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Spliterator$OfPrimitive&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
