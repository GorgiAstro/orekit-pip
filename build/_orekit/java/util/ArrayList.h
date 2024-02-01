#ifndef java_util_ArrayList_H
#define java_util_ArrayList_H

#include "java/util/AbstractList.h"

namespace java {
  namespace util {
    class Iterator;
    class Comparator;
    class Spliterator;
    class List;
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
        mid_init$_ff7cb6c242604316,
        mid_init$_8fd427ab23829bf5,
        mid_init$_82af91bc8dfb5029,
        mid_add_72faff9b05f5ed5e,
        mid_add_600fc0bdbd049172,
        mid_addAll_61d64368c58b84f3,
        mid_addAll_34282804c6c39090,
        mid_clear_ff7cb6c242604316,
        mid_clone_704a5bee58538972,
        mid_contains_72faff9b05f5ed5e,
        mid_ensureCapacity_8fd427ab23829bf5,
        mid_equals_72faff9b05f5ed5e,
        mid_get_35009debda6d2ece,
        mid_hashCode_d6ab429752e7c267,
        mid_indexOf_9aa1a0d21cdeb90e,
        mid_isEmpty_eee3de00fe971136,
        mid_iterator_4f613ccd2f803b4b,
        mid_lastIndexOf_9aa1a0d21cdeb90e,
        mid_listIterator_7bb80a6d83d87d72,
        mid_listIterator_14737c756caa849d,
        mid_remove_35009debda6d2ece,
        mid_remove_72faff9b05f5ed5e,
        mid_removeAll_61d64368c58b84f3,
        mid_retainAll_61d64368c58b84f3,
        mid_set_469b6e93ddb5a642,
        mid_size_d6ab429752e7c267,
        mid_sort_bee08e6612998c92,
        mid_spliterator_74c84c40cacaa7be,
        mid_subList_4e3c0741dd4bb632,
        mid_toArray_2ab86268ef7a6631,
        mid_toArray_f4767af6a3829fbc,
        mid_trimToSize_ff7cb6c242604316,
        mid_removeRange_b5d23e6c0858e8ed,
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
