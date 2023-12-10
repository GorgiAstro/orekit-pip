#ifndef java_util_ArrayList_H
#define java_util_ArrayList_H

#include "java/util/AbstractList.h"

namespace java {
  namespace util {
    class Iterator;
    class Comparator;
    class List;
    class Collection;
    class ListIterator;
    class RandomAccess;
    class Spliterator;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class Object;
    class Cloneable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class ArrayList : public ::java::util::AbstractList {
     public:
      enum {
        mid_init$_7ae3461a92a43152,
        mid_init$_0a2a1ac2721c0336,
        mid_init$_26b3669ec54017ce,
        mid_add_229c87223f486349,
        mid_add_92e02b8dd38af23a,
        mid_addAll_d88dbdb69255b770,
        mid_addAll_17269709aac5e427,
        mid_clear_7ae3461a92a43152,
        mid_clone_dfd7647d9110ac9f,
        mid_contains_229c87223f486349,
        mid_ensureCapacity_0a2a1ac2721c0336,
        mid_equals_229c87223f486349,
        mid_get_2db0f6e4b8d9201f,
        mid_hashCode_f2f64475e4580546,
        mid_indexOf_ac8c1b6f384391ef,
        mid_isEmpty_e470b6d9e0d979db,
        mid_iterator_035c6167e6569aac,
        mid_lastIndexOf_ac8c1b6f384391ef,
        mid_listIterator_4e1a823c948bf3a6,
        mid_listIterator_cada45a770b36785,
        mid_remove_2db0f6e4b8d9201f,
        mid_remove_229c87223f486349,
        mid_removeAll_d88dbdb69255b770,
        mid_retainAll_d88dbdb69255b770,
        mid_set_fbb048a414c33f9c,
        mid_size_f2f64475e4580546,
        mid_sort_4aed3eb33e58d2f7,
        mid_spliterator_df0341cda53d4d48,
        mid_subList_4a0f7788a82593c4,
        mid_toArray_e81d7907eea7e008,
        mid_toArray_66041b51ef6ee21d,
        mid_trimToSize_7ae3461a92a43152,
        mid_removeRange_8dbc1129a3c2557a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ArrayList(jobject obj) : ::java::util::AbstractList(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ArrayList(const ArrayList& obj) : ::java::util::AbstractList(obj) {}

      ArrayList();
      ArrayList(jint);
      ArrayList(const ::java::util::Collection &);

      jboolean add(const ::java::lang::Object &) const;
      void add(jint, const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      jboolean addAll(jint, const ::java::util::Collection &) const;
      void clear() const;
      ::java::lang::Object clone() const;
      jboolean contains(const ::java::lang::Object &) const;
      void ensureCapacity(jint) const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::Object get$(jint) const;
      jint hashCode() const;
      jint indexOf(const ::java::lang::Object &) const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      jint lastIndexOf(const ::java::lang::Object &) const;
      ::java::util::ListIterator listIterator() const;
      ::java::util::ListIterator listIterator(jint) const;
      ::java::lang::Object remove(jint) const;
      jboolean remove(const ::java::lang::Object &) const;
      jboolean removeAll(const ::java::util::Collection &) const;
      jboolean retainAll(const ::java::util::Collection &) const;
      ::java::lang::Object set(jint, const ::java::lang::Object &) const;
      jint size() const;
      void sort(const ::java::util::Comparator &) const;
      ::java::util::Spliterator spliterator() const;
      ::java::util::List subList(jint, jint) const;
      JArray< ::java::lang::Object > toArray() const;
      JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
      void trimToSize() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(ArrayList);
    extern PyTypeObject *PY_TYPE(ArrayList);

    class t_ArrayList {
    public:
      PyObject_HEAD
      ArrayList object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_ArrayList *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const ArrayList&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const ArrayList&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
