#ifndef java_util_Collection_H
#define java_util_Collection_H

#include "java/lang/Iterable.h"

namespace java {
  namespace util {
    class Iterator;
    class Spliterator;
    class Collection;
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Collection : public ::java::lang::Iterable {
     public:
      enum {
        mid_add_460c5e2d9d51c6cc,
        mid_addAll_801a92d34e44726e,
        mid_clear_a1fa5dae97ea5ed2,
        mid_contains_460c5e2d9d51c6cc,
        mid_containsAll_801a92d34e44726e,
        mid_equals_460c5e2d9d51c6cc,
        mid_hashCode_55546ef6a647f39b,
        mid_isEmpty_9ab94ac1dc23b105,
        mid_iterator_fc7780bc5d5b73b0,
        mid_parallelStream_14e21bf777ff0ccf,
        mid_remove_460c5e2d9d51c6cc,
        mid_removeAll_801a92d34e44726e,
        mid_retainAll_801a92d34e44726e,
        mid_size_55546ef6a647f39b,
        mid_spliterator_fe8f811ebd6e639a,
        mid_stream_14e21bf777ff0ccf,
        mid_toArray_24e2edd6319f4c5a,
        mid_toArray_70d423ae061f83d5,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Collection(jobject obj) : ::java::lang::Iterable(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Collection(const Collection& obj) : ::java::lang::Iterable(obj) {}

      jboolean add(const ::java::lang::Object &) const;
      jboolean addAll(const Collection &) const;
      void clear() const;
      jboolean contains(const ::java::lang::Object &) const;
      jboolean containsAll(const Collection &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      ::java::util::stream::Stream parallelStream() const;
      jboolean remove(const ::java::lang::Object &) const;
      jboolean removeAll(const Collection &) const;
      jboolean retainAll(const Collection &) const;
      jint size() const;
      ::java::util::Spliterator spliterator() const;
      ::java::util::stream::Stream stream() const;
      JArray< ::java::lang::Object > toArray() const;
      JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Collection);
    extern PyTypeObject *PY_TYPE(Collection);

    class t_Collection {
    public:
      PyObject_HEAD
      Collection object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Collection *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Collection&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Collection&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
