#ifndef java_util_List_H
#define java_util_List_H

#include "java/util/Collection.h"

namespace java {
  namespace util {
    class Iterator;
    class Spliterator;
    class Comparator;
    class List;
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
        mid_add_460c5e2d9d51c6cc,
        mid_add_0f5a71e161fd256b,
        mid_addAll_801a92d34e44726e,
        mid_addAll_2c414c0fcc4406f4,
        mid_clear_a1fa5dae97ea5ed2,
        mid_contains_460c5e2d9d51c6cc,
        mid_containsAll_801a92d34e44726e,
        mid_copyOf_110fe1ac56c5220a,
        mid_equals_460c5e2d9d51c6cc,
        mid_get_1a3b934d2c285d65,
        mid_hashCode_55546ef6a647f39b,
        mid_indexOf_b7898c5e94612125,
        mid_isEmpty_9ab94ac1dc23b105,
        mid_iterator_fc7780bc5d5b73b0,
        mid_lastIndexOf_b7898c5e94612125,
        mid_listIterator_d6d68fe3f5974930,
        mid_listIterator_008647f8b2408e7c,
        mid_of_e62d3bb06d56d7e3,
        mid_of_e800446ce338cd30,
        mid_of_fc892452fc84d714,
        mid_of_13e8ca1800b7bd64,
        mid_of_259286aaa3bdb071,
        mid_of_e43b1568439f917c,
        mid_of_2456aef1621df94c,
        mid_of_a47a61be819f2808,
        mid_of_941a275ec011f0b1,
        mid_of_713368b11b1a182a,
        mid_of_cdb034e7a946131c,
        mid_of_9916f449c9f6e896,
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
