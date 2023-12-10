#ifndef java_util_List_H
#define java_util_List_H

#include "java/util/Collection.h"

namespace java {
  namespace util {
    class Iterator;
    class Comparator;
    class List;
    class ListIterator;
    class Spliterator;
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
        mid_add_65c7d273e80d497a,
        mid_add_995c97fe5efb1d1d,
        mid_addAll_17e918edc999b3c7,
        mid_addAll_0f52bd5f96ddfd17,
        mid_clear_0fa09c18fee449d5,
        mid_contains_65c7d273e80d497a,
        mid_containsAll_17e918edc999b3c7,
        mid_copyOf_53b9a2e5d7b3833b,
        mid_equals_65c7d273e80d497a,
        mid_get_7bdc0f15e68705e0,
        mid_hashCode_570ce0828f81a2c1,
        mid_indexOf_90eb61a0d5cc5e34,
        mid_isEmpty_b108b35ef48e27bd,
        mid_iterator_4d23511a9f0db098,
        mid_lastIndexOf_90eb61a0d5cc5e34,
        mid_listIterator_13ec0a4b5149ed65,
        mid_listIterator_167e5f47f86d3143,
        mid_of_2afa36052df4765d,
        mid_of_91eee740d34e4dd1,
        mid_of_5d13575984be857e,
        mid_of_510be06504a0b0b9,
        mid_of_d73cfd0f03f94cb4,
        mid_of_fc9f490e941e69a8,
        mid_of_d5a3b43db8b37a68,
        mid_of_dc2b19fd01e6a993,
        mid_of_81c5ca0dc773817b,
        mid_of_cd157048f166826a,
        mid_of_a804915f1bf2f168,
        mid_of_a3795d7e8f9a9a1a,
        mid_remove_7bdc0f15e68705e0,
        mid_remove_65c7d273e80d497a,
        mid_removeAll_17e918edc999b3c7,
        mid_retainAll_17e918edc999b3c7,
        mid_set_c594b4c2255fa9ec,
        mid_size_570ce0828f81a2c1,
        mid_sort_aba33752f2449599,
        mid_spliterator_ef1070394b413a84,
        mid_subList_10d7c0f6de166543,
        mid_toArray_b93c730013ce64c6,
        mid_toArray_72bb572e6638b43f,
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
