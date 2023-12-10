#ifndef java_util_NavigableSet_H
#define java_util_NavigableSet_H

#include "java/util/SortedSet.h"

namespace java {
  namespace util {
    class Iterator;
    class NavigableSet;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class NavigableSet : public ::java::util::SortedSet {
     public:
      enum {
        mid_ceiling_9facd1449e0950d3,
        mid_descendingIterator_4d23511a9f0db098,
        mid_descendingSet_024b2fed0d07125f,
        mid_floor_9facd1449e0950d3,
        mid_headSet_c07cc04010820225,
        mid_headSet_3998b1c856c6bc87,
        mid_higher_9facd1449e0950d3,
        mid_iterator_4d23511a9f0db098,
        mid_lower_9facd1449e0950d3,
        mid_pollFirst_4d26fd885228c716,
        mid_pollLast_4d26fd885228c716,
        mid_subSet_91c93627253b416a,
        mid_subSet_8a24c3c47a25901f,
        mid_tailSet_c07cc04010820225,
        mid_tailSet_3998b1c856c6bc87,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit NavigableSet(jobject obj) : ::java::util::SortedSet(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      NavigableSet(const NavigableSet& obj) : ::java::util::SortedSet(obj) {}

      ::java::lang::Object ceiling(const ::java::lang::Object &) const;
      ::java::util::Iterator descendingIterator() const;
      NavigableSet descendingSet() const;
      ::java::lang::Object floor(const ::java::lang::Object &) const;
      ::java::util::SortedSet headSet(const ::java::lang::Object &) const;
      NavigableSet headSet(const ::java::lang::Object &, jboolean) const;
      ::java::lang::Object higher(const ::java::lang::Object &) const;
      ::java::util::Iterator iterator() const;
      ::java::lang::Object lower(const ::java::lang::Object &) const;
      ::java::lang::Object pollFirst() const;
      ::java::lang::Object pollLast() const;
      ::java::util::SortedSet subSet(const ::java::lang::Object &, const ::java::lang::Object &) const;
      NavigableSet subSet(const ::java::lang::Object &, jboolean, const ::java::lang::Object &, jboolean) const;
      ::java::util::SortedSet tailSet(const ::java::lang::Object &) const;
      NavigableSet tailSet(const ::java::lang::Object &, jboolean) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(NavigableSet);
    extern PyTypeObject *PY_TYPE(NavigableSet);

    class t_NavigableSet {
    public:
      PyObject_HEAD
      NavigableSet object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_NavigableSet *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const NavigableSet&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const NavigableSet&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
