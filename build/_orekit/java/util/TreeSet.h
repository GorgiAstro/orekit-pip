#ifndef java_util_TreeSet_H
#define java_util_TreeSet_H

#include "java/util/AbstractSet.h"

namespace java {
  namespace util {
    class Iterator;
    class Comparator;
    class Spliterator;
    class Collection;
    class SortedSet;
    class NavigableSet;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class Object;
    class Cloneable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class TreeSet : public ::java::util::AbstractSet {
     public:
      enum {
        mid_init$_ff7cb6c242604316,
        mid_init$_82af91bc8dfb5029,
        mid_init$_bee08e6612998c92,
        mid_init$_a422fab7ffe774b8,
        mid_add_72faff9b05f5ed5e,
        mid_addAll_61d64368c58b84f3,
        mid_ceiling_05290476c26136d7,
        mid_clear_ff7cb6c242604316,
        mid_clone_704a5bee58538972,
        mid_comparator_44d5f0105a5559b7,
        mid_contains_72faff9b05f5ed5e,
        mid_descendingIterator_4f613ccd2f803b4b,
        mid_descendingSet_915193d823a938b2,
        mid_first_704a5bee58538972,
        mid_floor_05290476c26136d7,
        mid_headSet_703a1d412bf4e2d2,
        mid_headSet_bdde78447932d510,
        mid_higher_05290476c26136d7,
        mid_isEmpty_eee3de00fe971136,
        mid_iterator_4f613ccd2f803b4b,
        mid_last_704a5bee58538972,
        mid_lower_05290476c26136d7,
        mid_pollFirst_704a5bee58538972,
        mid_pollLast_704a5bee58538972,
        mid_remove_72faff9b05f5ed5e,
        mid_size_d6ab429752e7c267,
        mid_spliterator_74c84c40cacaa7be,
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

      explicit TreeSet(jobject obj) : ::java::util::AbstractSet(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      TreeSet(const TreeSet& obj) : ::java::util::AbstractSet(obj) {}

      TreeSet();
      TreeSet(const ::java::util::Collection &);
      TreeSet(const ::java::util::Comparator &);
      TreeSet(const ::java::util::SortedSet &);

      jboolean add(const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      ::java::lang::Object ceiling(const ::java::lang::Object &) const;
      void clear() const;
      ::java::lang::Object clone() const;
      ::java::util::Comparator comparator() const;
      jboolean contains(const ::java::lang::Object &) const;
      ::java::util::Iterator descendingIterator() const;
      ::java::util::NavigableSet descendingSet() const;
      ::java::lang::Object first() const;
      ::java::lang::Object floor(const ::java::lang::Object &) const;
      ::java::util::SortedSet headSet(const ::java::lang::Object &) const;
      ::java::util::NavigableSet headSet(const ::java::lang::Object &, jboolean) const;
      ::java::lang::Object higher(const ::java::lang::Object &) const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      ::java::lang::Object last() const;
      ::java::lang::Object lower(const ::java::lang::Object &) const;
      ::java::lang::Object pollFirst() const;
      ::java::lang::Object pollLast() const;
      jboolean remove(const ::java::lang::Object &) const;
      jint size() const;
      ::java::util::Spliterator spliterator() const;
      ::java::util::SortedSet subSet(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::util::NavigableSet subSet(const ::java::lang::Object &, jboolean, const ::java::lang::Object &, jboolean) const;
      ::java::util::SortedSet tailSet(const ::java::lang::Object &) const;
      ::java::util::NavigableSet tailSet(const ::java::lang::Object &, jboolean) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(TreeSet);
    extern PyTypeObject *PY_TYPE(TreeSet);

    class t_TreeSet {
    public:
      PyObject_HEAD
      TreeSet object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_TreeSet *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const TreeSet&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const TreeSet&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
