#ifndef java_util_TreeSet_H
#define java_util_TreeSet_H

#include "java/util/AbstractSet.h"

namespace java {
  namespace util {
    class Iterator;
    class Comparator;
    class Spliterator;
    class NavigableSet;
    class Collection;
    class SortedSet;
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
        mid_init$_a1fa5dae97ea5ed2,
        mid_init$_7d8f123763cd893c,
        mid_init$_2c01874c65d2ef2f,
        mid_init$_fdbe1a9b1da328d7,
        mid_add_460c5e2d9d51c6cc,
        mid_addAll_801a92d34e44726e,
        mid_ceiling_5804c890f94a02b6,
        mid_clear_a1fa5dae97ea5ed2,
        mid_clone_541690f9ee81d3ad,
        mid_comparator_127b1bec8b0c3ae1,
        mid_contains_460c5e2d9d51c6cc,
        mid_descendingIterator_fc7780bc5d5b73b0,
        mid_descendingSet_ea2f3a2f5483365c,
        mid_first_541690f9ee81d3ad,
        mid_floor_5804c890f94a02b6,
        mid_headSet_15bf8d17699caf41,
        mid_headSet_6fb332cca18e073d,
        mid_higher_5804c890f94a02b6,
        mid_isEmpty_9ab94ac1dc23b105,
        mid_iterator_fc7780bc5d5b73b0,
        mid_last_541690f9ee81d3ad,
        mid_lower_5804c890f94a02b6,
        mid_pollFirst_541690f9ee81d3ad,
        mid_pollLast_541690f9ee81d3ad,
        mid_remove_460c5e2d9d51c6cc,
        mid_size_55546ef6a647f39b,
        mid_spliterator_fe8f811ebd6e639a,
        mid_subSet_4e206fa37c57fda5,
        mid_subSet_04d25a3c1eb67588,
        mid_tailSet_15bf8d17699caf41,
        mid_tailSet_6fb332cca18e073d,
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
