#ifndef java_util_AbstractList_H
#define java_util_AbstractList_H

#include "java/util/AbstractCollection.h"

namespace java {
  namespace util {
    class Iterator;
    class List;
    class Collection;
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

    class AbstractList : public ::java::util::AbstractCollection {
     public:
      enum {
        mid_add_72faff9b05f5ed5e,
        mid_add_600fc0bdbd049172,
        mid_addAll_34282804c6c39090,
        mid_clear_ff7cb6c242604316,
        mid_equals_72faff9b05f5ed5e,
        mid_get_35009debda6d2ece,
        mid_hashCode_d6ab429752e7c267,
        mid_indexOf_9aa1a0d21cdeb90e,
        mid_iterator_4f613ccd2f803b4b,
        mid_lastIndexOf_9aa1a0d21cdeb90e,
        mid_listIterator_7bb80a6d83d87d72,
        mid_listIterator_14737c756caa849d,
        mid_remove_35009debda6d2ece,
        mid_set_469b6e93ddb5a642,
        mid_subList_4e3c0741dd4bb632,
        mid_removeRange_b5d23e6c0858e8ed,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit AbstractList(jobject obj) : ::java::util::AbstractCollection(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      AbstractList(const AbstractList& obj) : ::java::util::AbstractCollection(obj) {}

      jboolean add(const ::java::lang::Object &) const;
      void add(jint, const ::java::lang::Object &) const;
      jboolean addAll(jint, const ::java::util::Collection &) const;
      void clear() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::Object get$(jint) const;
      jint hashCode() const;
      jint indexOf(const ::java::lang::Object &) const;
      ::java::util::Iterator iterator() const;
      jint lastIndexOf(const ::java::lang::Object &) const;
      ::java::util::ListIterator listIterator() const;
      ::java::util::ListIterator listIterator(jint) const;
      ::java::lang::Object remove(jint) const;
      ::java::lang::Object set(jint, const ::java::lang::Object &) const;
      ::java::util::List subList(jint, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(AbstractList);
    extern PyTypeObject *PY_TYPE(AbstractList);

    class t_AbstractList {
    public:
      PyObject_HEAD
      AbstractList object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_AbstractList *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const AbstractList&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const AbstractList&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
