#ifndef java_util_TreeSet_H
#define java_util_TreeSet_H

#include "java/util/AbstractSet.h"

namespace java {
  namespace util {
    class Iterator;
    class Comparator;
    class NavigableSet;
    class Collection;
    class SortedSet;
    class Spliterator;
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
        mid_init$_7ae3461a92a43152,
        mid_init$_26b3669ec54017ce,
        mid_init$_4aed3eb33e58d2f7,
        mid_init$_a0cbc2e5c81cd156,
        mid_add_229c87223f486349,
        mid_addAll_d88dbdb69255b770,
        mid_ceiling_ed50a8b49b8274dc,
        mid_clear_7ae3461a92a43152,
        mid_clone_dfd7647d9110ac9f,
        mid_comparator_838794f9a43cf98e,
        mid_contains_229c87223f486349,
        mid_descendingIterator_035c6167e6569aac,
        mid_descendingSet_edb7b61b9a16f086,
        mid_first_dfd7647d9110ac9f,
        mid_floor_ed50a8b49b8274dc,
        mid_headSet_5cc25b3ab2f54634,
        mid_headSet_92233265f2573726,
        mid_higher_ed50a8b49b8274dc,
        mid_isEmpty_e470b6d9e0d979db,
        mid_iterator_035c6167e6569aac,
        mid_last_dfd7647d9110ac9f,
        mid_lower_ed50a8b49b8274dc,
        mid_pollFirst_dfd7647d9110ac9f,
        mid_pollLast_dfd7647d9110ac9f,
        mid_remove_229c87223f486349,
        mid_size_f2f64475e4580546,
        mid_spliterator_df0341cda53d4d48,
        mid_subSet_7f0b8ff9f951c500,
        mid_subSet_cf0ad46ee1807f0a,
        mid_tailSet_5cc25b3ab2f54634,
        mid_tailSet_92233265f2573726,
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
