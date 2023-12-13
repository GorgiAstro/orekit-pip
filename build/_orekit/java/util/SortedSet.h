#ifndef java_util_SortedSet_H
#define java_util_SortedSet_H

#include "java/util/Set.h"

namespace java {
  namespace util {
    class Spliterator;
    class Comparator;
    class SortedSet;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class SortedSet : public ::java::util::Set {
     public:
      enum {
        mid_comparator_127b1bec8b0c3ae1,
        mid_first_541690f9ee81d3ad,
        mid_headSet_15bf8d17699caf41,
        mid_last_541690f9ee81d3ad,
        mid_spliterator_fe8f811ebd6e639a,
        mid_subSet_4e206fa37c57fda5,
        mid_tailSet_15bf8d17699caf41,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit SortedSet(jobject obj) : ::java::util::Set(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      SortedSet(const SortedSet& obj) : ::java::util::Set(obj) {}

      ::java::util::Comparator comparator() const;
      ::java::lang::Object first() const;
      SortedSet headSet(const ::java::lang::Object &) const;
      ::java::lang::Object last() const;
      ::java::util::Spliterator spliterator() const;
      SortedSet subSet(const ::java::lang::Object &, const ::java::lang::Object &) const;
      SortedSet tailSet(const ::java::lang::Object &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(SortedSet);
    extern PyTypeObject *PY_TYPE(SortedSet);

    class t_SortedSet {
    public:
      PyObject_HEAD
      SortedSet object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_SortedSet *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const SortedSet&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const SortedSet&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
