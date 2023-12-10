#ifndef java_util_AbstractCollection_H
#define java_util_AbstractCollection_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class AbstractCollection : public ::java::lang::Object {
     public:
      enum {
        mid_add_65c7d273e80d497a,
        mid_addAll_17e918edc999b3c7,
        mid_clear_0fa09c18fee449d5,
        mid_contains_65c7d273e80d497a,
        mid_containsAll_17e918edc999b3c7,
        mid_isEmpty_b108b35ef48e27bd,
        mid_iterator_4d23511a9f0db098,
        mid_remove_65c7d273e80d497a,
        mid_removeAll_17e918edc999b3c7,
        mid_retainAll_17e918edc999b3c7,
        mid_size_570ce0828f81a2c1,
        mid_toArray_b93c730013ce64c6,
        mid_toArray_72bb572e6638b43f,
        mid_toString_11b109bd155ca898,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit AbstractCollection(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      AbstractCollection(const AbstractCollection& obj) : ::java::lang::Object(obj) {}

      jboolean add(const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      void clear() const;
      jboolean contains(const ::java::lang::Object &) const;
      jboolean containsAll(const ::java::util::Collection &) const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      jboolean remove(const ::java::lang::Object &) const;
      jboolean removeAll(const ::java::util::Collection &) const;
      jboolean retainAll(const ::java::util::Collection &) const;
      jint size() const;
      JArray< ::java::lang::Object > toArray() const;
      JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(AbstractCollection);
    extern PyTypeObject *PY_TYPE(AbstractCollection);

    class t_AbstractCollection {
    public:
      PyObject_HEAD
      AbstractCollection object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_AbstractCollection *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const AbstractCollection&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const AbstractCollection&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
