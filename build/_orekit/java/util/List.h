#ifndef java_util_List_H
#define java_util_List_H

#include "java/util/Collection.h"

namespace java {
  namespace util {
    class Iterator;
    class Comparator;
    class Spliterator;
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
        mid_add_72faff9b05f5ed5e,
        mid_add_600fc0bdbd049172,
        mid_addAll_61d64368c58b84f3,
        mid_addAll_34282804c6c39090,
        mid_clear_ff7cb6c242604316,
        mid_contains_72faff9b05f5ed5e,
        mid_containsAll_61d64368c58b84f3,
        mid_copyOf_9f64b1eeb6e673e3,
        mid_equals_72faff9b05f5ed5e,
        mid_get_35009debda6d2ece,
        mid_hashCode_d6ab429752e7c267,
        mid_indexOf_9aa1a0d21cdeb90e,
        mid_isEmpty_eee3de00fe971136,
        mid_iterator_4f613ccd2f803b4b,
        mid_lastIndexOf_9aa1a0d21cdeb90e,
        mid_listIterator_7bb80a6d83d87d72,
        mid_listIterator_14737c756caa849d,
        mid_of_d751c1a57012b438,
        mid_of_5831821065411121,
        mid_of_b82a310c35799ced,
        mid_of_223ae57f7fb5be34,
        mid_of_c971c25e4cf7777d,
        mid_of_45f7614730574502,
        mid_of_cf34a26b338a77eb,
        mid_of_95b89b076c106793,
        mid_of_94d43fc2b606ac4d,
        mid_of_6c770b76ed77d90c,
        mid_of_1714fef71b2656a6,
        mid_of_a4ac981f3d0b894d,
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
