#ifndef java_util_SortedSet_H
#define java_util_SortedSet_H

#include "java/util/Set.h"

namespace java {
  namespace util {
    class Comparator;
    class Spliterator;
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
        mid_comparator_96e45e3694fbbb22,
        mid_first_4d26fd885228c716,
        mid_headSet_c07cc04010820225,
        mid_last_4d26fd885228c716,
        mid_spliterator_ef1070394b413a84,
        mid_subSet_91c93627253b416a,
        mid_tailSet_c07cc04010820225,
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
