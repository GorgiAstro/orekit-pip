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
        mid_add_65c7d273e80d497a,
        mid_addAll_17e918edc999b3c7,
        mid_addFirst_2990946c992aafed,
        mid_addLast_2990946c992aafed,
        mid_contains_65c7d273e80d497a,
        mid_descendingIterator_4d23511a9f0db098,
        mid_element_4d26fd885228c716,
        mid_getFirst_4d26fd885228c716,
        mid_getLast_4d26fd885228c716,
        mid_iterator_4d23511a9f0db098,
        mid_offer_65c7d273e80d497a,
        mid_offerFirst_65c7d273e80d497a,
        mid_offerLast_65c7d273e80d497a,
        mid_peek_4d26fd885228c716,
        mid_peekFirst_4d26fd885228c716,
        mid_peekLast_4d26fd885228c716,
        mid_poll_4d26fd885228c716,
        mid_pollFirst_4d26fd885228c716,
        mid_pollLast_4d26fd885228c716,
        mid_pop_4d26fd885228c716,
        mid_push_2990946c992aafed,
        mid_remove_4d26fd885228c716,
        mid_remove_65c7d273e80d497a,
        mid_removeFirst_4d26fd885228c716,
        mid_removeFirstOccurrence_65c7d273e80d497a,
        mid_removeLast_4d26fd885228c716,
        mid_removeLastOccurrence_65c7d273e80d497a,
        mid_size_570ce0828f81a2c1,
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
