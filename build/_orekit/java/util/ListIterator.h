#ifndef java_util_ListIterator_H
#define java_util_ListIterator_H

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

    class ListIterator : public ::java::util::Iterator {
     public:
      enum {
        mid_add_009757f2c0fd9090,
        mid_hasNext_89b302893bdbe1f1,
        mid_hasPrevious_89b302893bdbe1f1,
        mid_next_e661fe3ba2fafb22,
        mid_nextIndex_412668abc8d889e9,
        mid_previous_e661fe3ba2fafb22,
        mid_previousIndex_412668abc8d889e9,
        mid_remove_0640e6acf969ed28,
        mid_set_009757f2c0fd9090,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ListIterator(jobject obj) : ::java::util::Iterator(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ListIterator(const ListIterator& obj) : ::java::util::Iterator(obj) {}

      void add(const ::java::lang::Object &) const;
      jboolean hasNext() const;
      jboolean hasPrevious() const;
      ::java::lang::Object next() const;
      jint nextIndex() const;
      ::java::lang::Object previous() const;
      jint previousIndex() const;
      void remove() const;
      void set(const ::java::lang::Object &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(ListIterator);
    extern PyTypeObject *PY_TYPE(ListIterator);

    class t_ListIterator {
    public:
      PyObject_HEAD
      ListIterator object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_ListIterator *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const ListIterator&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const ListIterator&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
