#ifndef java_util_ArrayList_H
#define java_util_ArrayList_H

#include "java/util/AbstractList.h"

namespace java {
  namespace util {
    class Iterator;
    class Comparator;
    class List;
    class Spliterator;
    class Collection;
    class ListIterator;
    class RandomAccess;
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

    class ArrayList : public ::java::util::AbstractList {
     public:
      enum {
        mid_init$_0640e6acf969ed28,
        mid_init$_a3da1a935cb37f7b,
        mid_init$_3abde0be9b9c9773,
        mid_add_221e8e85cb385209,
        mid_add_3e1115797609a4d9,
        mid_addAll_15ecf331dcc5aaf3,
        mid_addAll_c5e40f007e7fded1,
        mid_clear_0640e6acf969ed28,
        mid_clone_e661fe3ba2fafb22,
        mid_contains_221e8e85cb385209,
        mid_ensureCapacity_a3da1a935cb37f7b,
        mid_equals_221e8e85cb385209,
        mid_get_8a5ee63f2530538f,
        mid_hashCode_412668abc8d889e9,
        mid_indexOf_38a1845c8d44a9b0,
        mid_isEmpty_89b302893bdbe1f1,
        mid_iterator_834a3801c426326d,
        mid_lastIndexOf_38a1845c8d44a9b0,
        mid_listIterator_996d185ac031638c,
        mid_listIterator_bd2239bed91d009f,
        mid_remove_8a5ee63f2530538f,
        mid_remove_221e8e85cb385209,
        mid_removeAll_15ecf331dcc5aaf3,
        mid_retainAll_15ecf331dcc5aaf3,
        mid_set_ff7fbb4a04f4c36b,
        mid_size_412668abc8d889e9,
        mid_sort_349032d04af23bed,
        mid_spliterator_0a89e3b18808f850,
        mid_subList_db6a96225c690c76,
        mid_toArray_6555a5198c71b73a,
        mid_toArray_73423092793bcd23,
        mid_trimToSize_0640e6acf969ed28,
        mid_removeRange_a84c9a223722150c,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ArrayList(jobject obj) : ::java::util::AbstractList(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ArrayList(const ArrayList& obj) : ::java::util::AbstractList(obj) {}

      ArrayList();
      ArrayList(jint);
      ArrayList(const ::java::util::Collection &);

      jboolean add(const ::java::lang::Object &) const;
      void add(jint, const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      jboolean addAll(jint, const ::java::util::Collection &) const;
      void clear() const;
      ::java::lang::Object clone() const;
      jboolean contains(const ::java::lang::Object &) const;
      void ensureCapacity(jint) const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::Object get$(jint) const;
      jint hashCode() const;
      jint indexOf(const ::java::lang::Object &) const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      jint lastIndexOf(const ::java::lang::Object &) const;
      ::java::util::ListIterator listIterator() const;
      ::java::util::ListIterator listIterator(jint) const;
      ::java::lang::Object remove(jint) const;
      jboolean remove(const ::java::lang::Object &) const;
      jboolean removeAll(const ::java::util::Collection &) const;
      jboolean retainAll(const ::java::util::Collection &) const;
      ::java::lang::Object set(jint, const ::java::lang::Object &) const;
      jint size() const;
      void sort(const ::java::util::Comparator &) const;
      ::java::util::Spliterator spliterator() const;
      ::java::util::List subList(jint, jint) const;
      JArray< ::java::lang::Object > toArray() const;
      JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
      void trimToSize() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(ArrayList);
    extern PyTypeObject *PY_TYPE(ArrayList);

    class t_ArrayList {
    public:
      PyObject_HEAD
      ArrayList object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_ArrayList *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const ArrayList&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const ArrayList&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
