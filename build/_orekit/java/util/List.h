#ifndef java_util_List_H
#define java_util_List_H

#include "java/util/Collection.h"

namespace java {
  namespace util {
    class Iterator;
    class Comparator;
    class List;
    class Spliterator;
    class ListIterator;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class List : public ::java::util::Collection {
     public:
      enum {
        mid_add_221e8e85cb385209,
        mid_add_3e1115797609a4d9,
        mid_addAll_15ecf331dcc5aaf3,
        mid_addAll_c5e40f007e7fded1,
        mid_clear_0640e6acf969ed28,
        mid_contains_221e8e85cb385209,
        mid_containsAll_15ecf331dcc5aaf3,
        mid_copyOf_553bd7408f29b728,
        mid_equals_221e8e85cb385209,
        mid_get_8a5ee63f2530538f,
        mid_hashCode_412668abc8d889e9,
        mid_indexOf_38a1845c8d44a9b0,
        mid_isEmpty_89b302893bdbe1f1,
        mid_iterator_834a3801c426326d,
        mid_lastIndexOf_38a1845c8d44a9b0,
        mid_listIterator_996d185ac031638c,
        mid_listIterator_bd2239bed91d009f,
        mid_of_0d9551367f7ecdef,
        mid_of_6f26a4abc68018f5,
        mid_of_b025aa6e6332479e,
        mid_of_6f83ea1a21aa5532,
        mid_of_f7cc7bf1c1ab0de1,
        mid_of_4ef495e4ba12bfb6,
        mid_of_52b6ae7330901331,
        mid_of_8314f586904b720d,
        mid_of_5c4f774ef92936ef,
        mid_of_131a43757df0b2df,
        mid_of_ec44ab5da477a9f1,
        mid_of_2ac0931feaef3681,
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
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit List(jobject obj) : ::java::util::Collection(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      List(const List& obj) : ::java::util::Collection(obj) {}

      jboolean add(const ::java::lang::Object &) const;
      void add(jint, const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      jboolean addAll(jint, const ::java::util::Collection &) const;
      void clear() const;
      jboolean contains(const ::java::lang::Object &) const;
      jboolean containsAll(const ::java::util::Collection &) const;
      static List copyOf(const ::java::util::Collection &);
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::Object get$(jint) const;
      jint hashCode() const;
      jint indexOf(const ::java::lang::Object &) const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      jint lastIndexOf(const ::java::lang::Object &) const;
      ::java::util::ListIterator listIterator() const;
      ::java::util::ListIterator listIterator(jint) const;
      static List of();
      static List of(const JArray< ::java::lang::Object > &);
      static List of(const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      ::java::lang::Object remove(jint) const;
      jboolean remove(const ::java::lang::Object &) const;
      jboolean removeAll(const ::java::util::Collection &) const;
      jboolean retainAll(const ::java::util::Collection &) const;
      ::java::lang::Object set(jint, const ::java::lang::Object &) const;
      jint size() const;
      void sort(const ::java::util::Comparator &) const;
      ::java::util::Spliterator spliterator() const;
      List subList(jint, jint) const;
      JArray< ::java::lang::Object > toArray() const;
      JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(List);
    extern PyTypeObject *PY_TYPE(List);

    class t_List {
    public:
      PyObject_HEAD
      List object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_List *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const List&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const List&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
