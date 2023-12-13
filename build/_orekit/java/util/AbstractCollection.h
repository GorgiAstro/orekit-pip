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
        mid_add_460c5e2d9d51c6cc,
        mid_addAll_801a92d34e44726e,
        mid_clear_a1fa5dae97ea5ed2,
        mid_contains_460c5e2d9d51c6cc,
        mid_containsAll_801a92d34e44726e,
        mid_isEmpty_9ab94ac1dc23b105,
        mid_iterator_fc7780bc5d5b73b0,
        mid_remove_460c5e2d9d51c6cc,
        mid_removeAll_801a92d34e44726e,
        mid_retainAll_801a92d34e44726e,
        mid_size_55546ef6a647f39b,
        mid_toArray_24e2edd6319f4c5a,
        mid_toArray_70d423ae061f83d5,
        mid_toString_1c1fa1e935d6cdcf,
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
