#ifndef java_util_ArrayList_H
#define java_util_ArrayList_H

#include "java/util/AbstractList.h"

namespace java {
  namespace util {
    class Iterator;
    class Spliterator;
    class Comparator;
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
        mid_init$_a1fa5dae97ea5ed2,
        mid_init$_44ed599e93e8a30c,
        mid_init$_7d8f123763cd893c,
        mid_add_460c5e2d9d51c6cc,
        mid_add_0f5a71e161fd256b,
        mid_addAll_801a92d34e44726e,
        mid_addAll_2c414c0fcc4406f4,
        mid_clear_a1fa5dae97ea5ed2,
        mid_clone_541690f9ee81d3ad,
        mid_contains_460c5e2d9d51c6cc,
        mid_ensureCapacity_44ed599e93e8a30c,
        mid_equals_460c5e2d9d51c6cc,
        mid_get_1a3b934d2c285d65,
        mid_hashCode_55546ef6a647f39b,
        mid_indexOf_b7898c5e94612125,
        mid_isEmpty_9ab94ac1dc23b105,
        mid_iterator_fc7780bc5d5b73b0,
        mid_lastIndexOf_b7898c5e94612125,
        mid_listIterator_d6d68fe3f5974930,
        mid_listIterator_008647f8b2408e7c,
        mid_remove_1a3b934d2c285d65,
        mid_remove_460c5e2d9d51c6cc,
        mid_removeAll_801a92d34e44726e,
        mid_retainAll_801a92d34e44726e,
        mid_set_c616ac8dc1767986,
        mid_size_55546ef6a647f39b,
        mid_sort_2c01874c65d2ef2f,
        mid_spliterator_fe8f811ebd6e639a,
        mid_subList_39b43a702bd6611c,
        mid_toArray_24e2edd6319f4c5a,
        mid_toArray_70d423ae061f83d5,
        mid_trimToSize_a1fa5dae97ea5ed2,
        mid_removeRange_3313c75e3e16c428,
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
