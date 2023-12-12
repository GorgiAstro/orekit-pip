#ifndef java_util_TreeSet_H
#define java_util_TreeSet_H

#include "java/util/AbstractSet.h"

namespace java {
  namespace util {
    class Iterator;
    class Comparator;
    class Spliterator;
    class SortedSet;
    class Collection;
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
        mid_init$_0640e6acf969ed28,
        mid_init$_3abde0be9b9c9773,
        mid_init$_349032d04af23bed,
        mid_init$_dd1a69b50abe9a6d,
        mid_add_221e8e85cb385209,
        mid_addAll_15ecf331dcc5aaf3,
        mid_ceiling_65d69db95c5eb156,
        mid_clear_0640e6acf969ed28,
        mid_clone_e661fe3ba2fafb22,
        mid_comparator_b0b551d4a54c7150,
        mid_contains_221e8e85cb385209,
        mid_descendingIterator_834a3801c426326d,
        mid_descendingSet_0617a74a450b6c8d,
        mid_first_e661fe3ba2fafb22,
        mid_floor_65d69db95c5eb156,
        mid_headSet_3ca4ace183d6efe9,
        mid_headSet_b83c282998266525,
        mid_higher_65d69db95c5eb156,
        mid_isEmpty_89b302893bdbe1f1,
        mid_iterator_834a3801c426326d,
        mid_last_e661fe3ba2fafb22,
        mid_lower_65d69db95c5eb156,
        mid_pollFirst_e661fe3ba2fafb22,
        mid_pollLast_e661fe3ba2fafb22,
        mid_remove_221e8e85cb385209,
        mid_size_412668abc8d889e9,
        mid_spliterator_0a89e3b18808f850,
        mid_subSet_ba202d431ff51666,
        mid_subSet_95b7fdef68d2eb53,
        mid_tailSet_3ca4ace183d6efe9,
        mid_tailSet_b83c282998266525,
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
