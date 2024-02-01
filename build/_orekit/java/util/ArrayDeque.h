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
        mid_init$_ff7cb6c242604316,
        mid_init$_8fd427ab23829bf5,
        mid_init$_82af91bc8dfb5029,
        mid_add_72faff9b05f5ed5e,
        mid_addAll_61d64368c58b84f3,
        mid_addFirst_83ee235bb1e64e94,
        mid_addLast_83ee235bb1e64e94,
        mid_clear_ff7cb6c242604316,
        mid_clone_dfd72228722c581c,
        mid_contains_72faff9b05f5ed5e,
        mid_descendingIterator_4f613ccd2f803b4b,
        mid_element_704a5bee58538972,
        mid_getFirst_704a5bee58538972,
        mid_getLast_704a5bee58538972,
        mid_isEmpty_eee3de00fe971136,
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
        mid_removeAll_61d64368c58b84f3,
        mid_removeFirst_704a5bee58538972,
        mid_removeFirstOccurrence_72faff9b05f5ed5e,
        mid_removeLast_704a5bee58538972,
        mid_removeLastOccurrence_72faff9b05f5ed5e,
        mid_retainAll_61d64368c58b84f3,
        mid_size_d6ab429752e7c267,
        mid_spliterator_74c84c40cacaa7be,
        mid_toArray_2ab86268ef7a6631,
        mid_toArray_f4767af6a3829fbc,
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
