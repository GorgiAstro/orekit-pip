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
        mid_add_221e8e85cb385209,
        mid_add_3e1115797609a4d9,
        mid_addAll_c5e40f007e7fded1,
        mid_clear_0640e6acf969ed28,
        mid_equals_221e8e85cb385209,
        mid_get_8a5ee63f2530538f,
        mid_hashCode_412668abc8d889e9,
        mid_indexOf_38a1845c8d44a9b0,
        mid_iterator_834a3801c426326d,
        mid_lastIndexOf_38a1845c8d44a9b0,
        mid_listIterator_996d185ac031638c,
        mid_listIterator_bd2239bed91d009f,
        mid_remove_8a5ee63f2530538f,
        mid_set_ff7fbb4a04f4c36b,
        mid_subList_db6a96225c690c76,
        mid_removeRange_a84c9a223722150c,
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
