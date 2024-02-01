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
        mid_add_72faff9b05f5ed5e,
        mid_addAll_61d64368c58b84f3,
        mid_addFirst_83ee235bb1e64e94,
        mid_addLast_83ee235bb1e64e94,
        mid_contains_72faff9b05f5ed5e,
        mid_descendingIterator_4f613ccd2f803b4b,
        mid_element_704a5bee58538972,
        mid_getFirst_704a5bee58538972,
        mid_getLast_704a5bee58538972,
        mid_iterator_4f613ccd2f803b4b,
        mid_offer_72faff9b05f5ed5e,
        mid_offerFirst_72faff9b05f5ed5e,
        mid_offerLast_72faff9b05f5ed5e,
        mid_peek_704a5bee58538972,
        mid_peekFirst_704a5bee58538972,
        mid_peekLast_704a5bee58538972,
        mid_poll_704a5bee58538972,
        mid_pollFirst_704a5bee58538972,
        mid_pollLast_704a5bee58538972,
        mid_pop_704a5bee58538972,
        mid_push_83ee235bb1e64e94,
        mid_remove_704a5bee58538972,
        mid_remove_72faff9b05f5ed5e,
        mid_removeFirst_704a5bee58538972,
        mid_removeFirstOccurrence_72faff9b05f5ed5e,
        mid_removeLast_704a5bee58538972,
        mid_removeLastOccurrence_72faff9b05f5ed5e,
        mid_size_d6ab429752e7c267,
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
