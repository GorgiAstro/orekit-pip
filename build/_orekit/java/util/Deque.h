#ifndef java_util_Deque_H
#define java_util_Deque_H

#include "java/util/Queue.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Deque : public ::java::util::Queue {
     public:
      enum {
        mid_add_221e8e85cb385209,
        mid_addAll_15ecf331dcc5aaf3,
        mid_addFirst_009757f2c0fd9090,
        mid_addLast_009757f2c0fd9090,
        mid_contains_221e8e85cb385209,
        mid_descendingIterator_834a3801c426326d,
        mid_element_e661fe3ba2fafb22,
        mid_getFirst_e661fe3ba2fafb22,
        mid_getLast_e661fe3ba2fafb22,
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
        mid_removeFirst_e661fe3ba2fafb22,
        mid_removeFirstOccurrence_221e8e85cb385209,
        mid_removeLast_e661fe3ba2fafb22,
        mid_removeLastOccurrence_221e8e85cb385209,
        mid_size_412668abc8d889e9,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Deque(jobject obj) : ::java::util::Queue(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Deque(const Deque& obj) : ::java::util::Queue(obj) {}

      jboolean add(const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      void addFirst(const ::java::lang::Object &) const;
      void addLast(const ::java::lang::Object &) const;
      jboolean contains(const ::java::lang::Object &) const;
      ::java::util::Iterator descendingIterator() const;
      ::java::lang::Object element() const;
      ::java::lang::Object getFirst() const;
      ::java::lang::Object getLast() const;
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
      ::java::lang::Object removeFirst() const;
      jboolean removeFirstOccurrence(const ::java::lang::Object &) const;
      ::java::lang::Object removeLast() const;
      jboolean removeLastOccurrence(const ::java::lang::Object &) const;
      jint size() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Deque);
    extern PyTypeObject *PY_TYPE(Deque);

    class t_Deque {
    public:
      PyObject_HEAD
      Deque object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Deque *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Deque&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Deque&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
