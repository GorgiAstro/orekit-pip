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
        mid_add_460c5e2d9d51c6cc,
        mid_addAll_801a92d34e44726e,
        mid_addFirst_55f3c894852c27a3,
        mid_addLast_55f3c894852c27a3,
        mid_contains_460c5e2d9d51c6cc,
        mid_descendingIterator_fc7780bc5d5b73b0,
        mid_element_541690f9ee81d3ad,
        mid_getFirst_541690f9ee81d3ad,
        mid_getLast_541690f9ee81d3ad,
        mid_iterator_fc7780bc5d5b73b0,
        mid_offer_460c5e2d9d51c6cc,
        mid_offerFirst_460c5e2d9d51c6cc,
        mid_offerLast_460c5e2d9d51c6cc,
        mid_peek_541690f9ee81d3ad,
        mid_peekFirst_541690f9ee81d3ad,
        mid_peekLast_541690f9ee81d3ad,
        mid_poll_541690f9ee81d3ad,
        mid_pollFirst_541690f9ee81d3ad,
        mid_pollLast_541690f9ee81d3ad,
        mid_pop_541690f9ee81d3ad,
        mid_push_55f3c894852c27a3,
        mid_remove_541690f9ee81d3ad,
        mid_remove_460c5e2d9d51c6cc,
        mid_removeFirst_541690f9ee81d3ad,
        mid_removeFirstOccurrence_460c5e2d9d51c6cc,
        mid_removeLast_541690f9ee81d3ad,
        mid_removeLastOccurrence_460c5e2d9d51c6cc,
        mid_size_55546ef6a647f39b,
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
