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
        mid_add_221e8e85cb385209,
        mid_addAll_15ecf331dcc5aaf3,
        mid_clear_0640e6acf969ed28,
        mid_contains_221e8e85cb385209,
        mid_containsAll_15ecf331dcc5aaf3,
        mid_equals_221e8e85cb385209,
        mid_hashCode_412668abc8d889e9,
        mid_isEmpty_89b302893bdbe1f1,
        mid_iterator_834a3801c426326d,
        mid_parallelStream_d7cce92225eb0db2,
        mid_remove_221e8e85cb385209,
        mid_removeAll_15ecf331dcc5aaf3,
        mid_retainAll_15ecf331dcc5aaf3,
        mid_size_412668abc8d889e9,
        mid_spliterator_0a89e3b18808f850,
        mid_stream_d7cce92225eb0db2,
        mid_toArray_6555a5198c71b73a,
        mid_toArray_73423092793bcd23,
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
