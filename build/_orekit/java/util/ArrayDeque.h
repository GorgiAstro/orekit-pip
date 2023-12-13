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
        mid_init$_a1fa5dae97ea5ed2,
        mid_init$_44ed599e93e8a30c,
        mid_init$_7d8f123763cd893c,
        mid_add_460c5e2d9d51c6cc,
        mid_addAll_801a92d34e44726e,
        mid_addFirst_55f3c894852c27a3,
        mid_addLast_55f3c894852c27a3,
        mid_clear_a1fa5dae97ea5ed2,
        mid_clone_bf1e6dd1d8e5ce21,
        mid_contains_460c5e2d9d51c6cc,
        mid_descendingIterator_fc7780bc5d5b73b0,
        mid_element_541690f9ee81d3ad,
        mid_getFirst_541690f9ee81d3ad,
        mid_getLast_541690f9ee81d3ad,
        mid_isEmpty_9ab94ac1dc23b105,
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
        mid_removeAll_801a92d34e44726e,
        mid_removeFirst_541690f9ee81d3ad,
        mid_removeFirstOccurrence_460c5e2d9d51c6cc,
        mid_removeLast_541690f9ee81d3ad,
        mid_removeLastOccurrence_460c5e2d9d51c6cc,
        mid_retainAll_801a92d34e44726e,
        mid_size_55546ef6a647f39b,
        mid_spliterator_fe8f811ebd6e639a,
        mid_toArray_24e2edd6319f4c5a,
        mid_toArray_70d423ae061f83d5,
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
