#ifndef java_util_TreeSet_H
#define java_util_TreeSet_H

#include "java/util/AbstractSet.h"

namespace java {
  namespace util {
    class Iterator;
    class Comparator;
    class Collection;
    class Spliterator;
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
        mid_init$_0fa09c18fee449d5,
        mid_init$_f72f53318f80c525,
        mid_init$_aba33752f2449599,
        mid_init$_5794fd067b349f51,
        mid_add_65c7d273e80d497a,
        mid_addAll_17e918edc999b3c7,
        mid_ceiling_9facd1449e0950d3,
        mid_clear_0fa09c18fee449d5,
        mid_clone_4d26fd885228c716,
        mid_comparator_96e45e3694fbbb22,
        mid_contains_65c7d273e80d497a,
        mid_descendingIterator_4d23511a9f0db098,
        mid_descendingSet_024b2fed0d07125f,
        mid_first_4d26fd885228c716,
        mid_floor_9facd1449e0950d3,
        mid_headSet_c07cc04010820225,
        mid_headSet_3998b1c856c6bc87,
        mid_higher_9facd1449e0950d3,
        mid_isEmpty_b108b35ef48e27bd,
        mid_iterator_4d23511a9f0db098,
        mid_last_4d26fd885228c716,
        mid_lower_9facd1449e0950d3,
        mid_pollFirst_4d26fd885228c716,
        mid_pollLast_4d26fd885228c716,
        mid_remove_65c7d273e80d497a,
        mid_size_570ce0828f81a2c1,
        mid_spliterator_ef1070394b413a84,
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
