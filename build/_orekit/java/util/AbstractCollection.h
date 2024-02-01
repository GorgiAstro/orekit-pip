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
        mid_add_72faff9b05f5ed5e,
        mid_addAll_61d64368c58b84f3,
        mid_clear_ff7cb6c242604316,
        mid_contains_72faff9b05f5ed5e,
        mid_containsAll_61d64368c58b84f3,
        mid_isEmpty_eee3de00fe971136,
        mid_iterator_4f613ccd2f803b4b,
        mid_remove_72faff9b05f5ed5e,
        mid_removeAll_61d64368c58b84f3,
        mid_retainAll_61d64368c58b84f3,
        mid_size_d6ab429752e7c267,
        mid_toArray_2ab86268ef7a6631,
        mid_toArray_f4767af6a3829fbc,
        mid_toString_d2c8eb4129821f0e,
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
