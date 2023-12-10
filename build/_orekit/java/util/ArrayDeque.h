#ifndef java_util_ArrayDeque_H
#define java_util_ArrayDeque_H

#include "java/util/AbstractCollection.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
    class Spliterator;
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
        mid_init$_7ae3461a92a43152,
        mid_init$_0a2a1ac2721c0336,
        mid_init$_26b3669ec54017ce,
        mid_add_229c87223f486349,
        mid_addAll_d88dbdb69255b770,
        mid_addFirst_7ca0d9438822cb0b,
        mid_addLast_7ca0d9438822cb0b,
        mid_clear_7ae3461a92a43152,
        mid_clone_28f8ecb84dc53c6a,
        mid_contains_229c87223f486349,
        mid_descendingIterator_035c6167e6569aac,
        mid_element_dfd7647d9110ac9f,
        mid_getFirst_dfd7647d9110ac9f,
        mid_getLast_dfd7647d9110ac9f,
        mid_isEmpty_e470b6d9e0d979db,
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
        mid_removeAll_d88dbdb69255b770,
        mid_removeFirst_dfd7647d9110ac9f,
        mid_removeFirstOccurrence_229c87223f486349,
        mid_removeLast_dfd7647d9110ac9f,
        mid_removeLastOccurrence_229c87223f486349,
        mid_retainAll_d88dbdb69255b770,
        mid_size_f2f64475e4580546,
        mid_spliterator_df0341cda53d4d48,
        mid_toArray_e81d7907eea7e008,
        mid_toArray_66041b51ef6ee21d,
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
