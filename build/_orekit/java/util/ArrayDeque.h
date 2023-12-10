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
        mid_init$_0fa09c18fee449d5,
        mid_init$_99803b0791f320ff,
        mid_init$_f72f53318f80c525,
        mid_add_65c7d273e80d497a,
        mid_addAll_17e918edc999b3c7,
        mid_addFirst_2990946c992aafed,
        mid_addLast_2990946c992aafed,
        mid_clear_0fa09c18fee449d5,
        mid_clone_edceba1316e88dd0,
        mid_contains_65c7d273e80d497a,
        mid_descendingIterator_4d23511a9f0db098,
        mid_element_4d26fd885228c716,
        mid_getFirst_4d26fd885228c716,
        mid_getLast_4d26fd885228c716,
        mid_isEmpty_b108b35ef48e27bd,
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
        mid_removeAll_17e918edc999b3c7,
        mid_removeFirst_4d26fd885228c716,
        mid_removeFirstOccurrence_65c7d273e80d497a,
        mid_removeLast_4d26fd885228c716,
        mid_removeLastOccurrence_65c7d273e80d497a,
        mid_retainAll_17e918edc999b3c7,
        mid_size_570ce0828f81a2c1,
        mid_spliterator_ef1070394b413a84,
        mid_toArray_b93c730013ce64c6,
        mid_toArray_72bb572e6638b43f,
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
