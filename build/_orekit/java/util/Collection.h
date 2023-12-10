#ifndef java_util_Collection_H
#define java_util_Collection_H

#include "java/lang/Iterable.h"

namespace java {
  namespace util {
    class Iterator;
    namespace stream {
      class Stream;
    }
    class Collection;
    class Spliterator;
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
        mid_add_65c7d273e80d497a,
        mid_addAll_17e918edc999b3c7,
        mid_clear_0fa09c18fee449d5,
        mid_contains_65c7d273e80d497a,
        mid_containsAll_17e918edc999b3c7,
        mid_equals_65c7d273e80d497a,
        mid_hashCode_570ce0828f81a2c1,
        mid_isEmpty_b108b35ef48e27bd,
        mid_iterator_4d23511a9f0db098,
        mid_parallelStream_20f6d2b462aaef4b,
        mid_remove_65c7d273e80d497a,
        mid_removeAll_17e918edc999b3c7,
        mid_retainAll_17e918edc999b3c7,
        mid_size_570ce0828f81a2c1,
        mid_spliterator_ef1070394b413a84,
        mid_stream_20f6d2b462aaef4b,
        mid_toArray_b93c730013ce64c6,
        mid_toArray_72bb572e6638b43f,
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
