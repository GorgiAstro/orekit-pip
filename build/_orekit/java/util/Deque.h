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
        mid_add_229c87223f486349,
        mid_addAll_d88dbdb69255b770,
        mid_addFirst_7ca0d9438822cb0b,
        mid_addLast_7ca0d9438822cb0b,
        mid_contains_229c87223f486349,
        mid_descendingIterator_035c6167e6569aac,
        mid_element_dfd7647d9110ac9f,
        mid_getFirst_dfd7647d9110ac9f,
        mid_getLast_dfd7647d9110ac9f,
        mid_iterator_035c6167e6569aac,
        mid_offer_229c87223f486349,
        mid_offerFirst_229c87223f486349,
        mid_offerLast_229c87223f486349,
        mid_peek_dfd7647d9110ac9f,
        mid_peekFirst_dfd7647d9110ac9f,
        mid_peekLast_dfd7647d9110ac9f,
        mid_poll_dfd7647d9110ac9f,
        mid_pollFirst_dfd7647d9110ac9f,
        mid_pollLast_dfd7647d9110ac9f,
        mid_pop_dfd7647d9110ac9f,
        mid_push_7ca0d9438822cb0b,
        mid_remove_dfd7647d9110ac9f,
        mid_remove_229c87223f486349,
        mid_removeFirst_dfd7647d9110ac9f,
        mid_removeFirstOccurrence_229c87223f486349,
        mid_removeLast_dfd7647d9110ac9f,
        mid_removeLastOccurrence_229c87223f486349,
        mid_size_f2f64475e4580546,
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
