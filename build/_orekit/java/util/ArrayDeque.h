#ifndef java_util_ArrayDeque_H
#define java_util_ArrayDeque_H

#include "java/util/AbstractCollection.h"

namespace java {
  namespace util {
    class Iterator;
    class Spliterator;
    class Collection;
    class Deque;
    class ArrayDeque;
  }
  namespace lang {
    class Cloneable;
    class Class;
    class Object;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class ArrayDeque : public ::java::util::AbstractCollection {
     public:
      enum {
        mid_init$_0640e6acf969ed28,
        mid_init$_a3da1a935cb37f7b,
        mid_init$_3abde0be9b9c9773,
        mid_add_221e8e85cb385209,
        mid_addAll_15ecf331dcc5aaf3,
        mid_addFirst_009757f2c0fd9090,
        mid_addLast_009757f2c0fd9090,
        mid_clear_0640e6acf969ed28,
        mid_clone_2f402d3ed8db1fe9,
        mid_contains_221e8e85cb385209,
        mid_descendingIterator_834a3801c426326d,
        mid_element_e661fe3ba2fafb22,
        mid_getFirst_e661fe3ba2fafb22,
        mid_getLast_e661fe3ba2fafb22,
        mid_isEmpty_89b302893bdbe1f1,
        mid_iterator_834a3801c426326d,
        mid_offer_221e8e85cb385209,
        mid_offerFirst_221e8e85cb385209,
        mid_offerLast_221e8e85cb385209,
        mid_peek_e661fe3ba2fafb22,
        mid_peekFirst_e661fe3ba2fafb22,
        mid_peekLast_e661fe3ba2fafb22,
        mid_poll_e661fe3ba2fafb22,
        mid_pollFirst_e661fe3ba2fafb22,
        mid_pollLast_e661fe3ba2fafb22,
        mid_pop_e661fe3ba2fafb22,
        mid_push_009757f2c0fd9090,
        mid_remove_e661fe3ba2fafb22,
        mid_remove_221e8e85cb385209,
        mid_removeAll_15ecf331dcc5aaf3,
        mid_removeFirst_e661fe3ba2fafb22,
        mid_removeFirstOccurrence_221e8e85cb385209,
        mid_removeLast_e661fe3ba2fafb22,
        mid_removeLastOccurrence_221e8e85cb385209,
        mid_retainAll_15ecf331dcc5aaf3,
        mid_size_412668abc8d889e9,
        mid_spliterator_0a89e3b18808f850,
        mid_toArray_6555a5198c71b73a,
        mid_toArray_73423092793bcd23,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ArrayDeque(jobject obj) : ::java::util::AbstractCollection(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ArrayDeque(const ArrayDeque& obj) : ::java::util::AbstractCollection(obj) {}

      ArrayDeque();
      ArrayDeque(jint);
      ArrayDeque(const ::java::util::Collection &);

      jboolean add(const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      void addFirst(const ::java::lang::Object &) const;
      void addLast(const ::java::lang::Object &) const;
      void clear() const;
      ArrayDeque clone() const;
      jboolean contains(const ::java::lang::Object &) const;
      ::java::util::Iterator descendingIterator() const;
      ::java::lang::Object element() const;
      ::java::lang::Object getFirst() const;
      ::java::lang::Object getLast() const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      jboolean offer(const ::java::lang::Object &) const;
      jboolean offerFirst(const ::java::lang::Object &) const;
      jboolean offerLast(const ::java::lang::Object &) const;
      ::java::lang::Object peek() const;
      ::java::lang::Object peekFirst() const;
      ::java::lang::Object peekLast() const;
      ::java::lang::Object poll() const;
      ::java::lang::Object pollFirst() const;
      ::java::lang::Object pollLast() const;
      ::java::lang::Object pop() const;
      void push(const ::java::lang::Object &) const;
      ::java::lang::Object remove() const;
      jboolean remove(const ::java::lang::Object &) const;
      jboolean removeAll(const ::java::util::Collection &) const;
      ::java::lang::Object removeFirst() const;
      jboolean removeFirstOccurrence(const ::java::lang::Object &) const;
      ::java::lang::Object removeLast() const;
      jboolean removeLastOccurrence(const ::java::lang::Object &) const;
      jboolean retainAll(const ::java::util::Collection &) const;
      jint size() const;
      ::java::util::Spliterator spliterator() const;
      JArray< ::java::lang::Object > toArray() const;
      JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(ArrayDeque);
    extern PyTypeObject *PY_TYPE(ArrayDeque);

    class t_ArrayDeque {
    public:
      PyObject_HEAD
      ArrayDeque object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_ArrayDeque *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const ArrayDeque&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const ArrayDeque&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
