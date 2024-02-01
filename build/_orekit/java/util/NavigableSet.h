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
        mid_ceiling_05290476c26136d7,
        mid_descendingIterator_4f613ccd2f803b4b,
        mid_descendingSet_915193d823a938b2,
        mid_floor_05290476c26136d7,
        mid_headSet_703a1d412bf4e2d2,
        mid_headSet_bdde78447932d510,
        mid_higher_05290476c26136d7,
        mid_iterator_4f613ccd2f803b4b,
        mid_lower_05290476c26136d7,
        mid_pollFirst_704a5bee58538972,
        mid_pollLast_704a5bee58538972,
        mid_subSet_2ca9cc77d5a999da,
        mid_subSet_76f09fa229f62b71,
        mid_tailSet_703a1d412bf4e2d2,
        mid_tailSet_bdde78447932d510,
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
