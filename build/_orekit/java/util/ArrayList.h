#ifndef java_util_ArrayList_H
#define java_util_ArrayList_H

#include "java/util/AbstractList.h"

namespace java {
  namespace util {
    class Iterator;
    class Comparator;
    class List;
    class Collection;
    class ListIterator;
    class RandomAccess;
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

    class ArrayList : public ::java::util::AbstractList {
     public:
      enum {
        mid_init$_0fa09c18fee449d5,
        mid_init$_99803b0791f320ff,
        mid_init$_f72f53318f80c525,
        mid_add_65c7d273e80d497a,
        mid_add_995c97fe5efb1d1d,
        mid_addAll_17e918edc999b3c7,
        mid_addAll_0f52bd5f96ddfd17,
        mid_clear_0fa09c18fee449d5,
        mid_clone_4d26fd885228c716,
        mid_contains_65c7d273e80d497a,
        mid_ensureCapacity_99803b0791f320ff,
        mid_equals_65c7d273e80d497a,
        mid_get_7bdc0f15e68705e0,
        mid_hashCode_570ce0828f81a2c1,
        mid_indexOf_90eb61a0d5cc5e34,
        mid_isEmpty_b108b35ef48e27bd,
        mid_iterator_4d23511a9f0db098,
        mid_lastIndexOf_90eb61a0d5cc5e34,
        mid_listIterator_13ec0a4b5149ed65,
        mid_listIterator_167e5f47f86d3143,
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
        mid_trimToSize_0fa09c18fee449d5,
        mid_removeRange_6f37635c3285dbdf,
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
