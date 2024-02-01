#ifndef java_util_Collection_H
#define java_util_Collection_H

#include "java/lang/Iterable.h"

namespace java {
  namespace util {
    class Iterator;
    namespace stream {
      class Stream;
    }
    class Spliterator;
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

    class Collection : public ::java::lang::Iterable {
     public:
      enum {
        mid_add_72faff9b05f5ed5e,
        mid_addAll_61d64368c58b84f3,
        mid_clear_ff7cb6c242604316,
        mid_contains_72faff9b05f5ed5e,
        mid_containsAll_61d64368c58b84f3,
        mid_equals_72faff9b05f5ed5e,
        mid_hashCode_d6ab429752e7c267,
        mid_isEmpty_eee3de00fe971136,
        mid_iterator_4f613ccd2f803b4b,
        mid_parallelStream_11e4ca8182c1933d,
        mid_remove_72faff9b05f5ed5e,
        mid_removeAll_61d64368c58b84f3,
        mid_retainAll_61d64368c58b84f3,
        mid_size_d6ab429752e7c267,
        mid_spliterator_74c84c40cacaa7be,
        mid_stream_11e4ca8182c1933d,
        mid_toArray_2ab86268ef7a6631,
        mid_toArray_f4767af6a3829fbc,
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
