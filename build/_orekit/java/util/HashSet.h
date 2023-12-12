#ifndef java_util_HashSet_H
#define java_util_HashSet_H

#include "java/util/AbstractSet.h"

namespace java {
  namespace util {
    class Iterator;
    class Spliterator;
    class Collection;
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

    class HashSet : public ::java::util::AbstractSet {
     public:
      enum {
        mid_init$_0640e6acf969ed28,
        mid_init$_a3da1a935cb37f7b,
        mid_init$_3abde0be9b9c9773,
        mid_init$_7c1037ab599ac362,
        mid_add_221e8e85cb385209,
        mid_clear_0640e6acf969ed28,
        mid_clone_e661fe3ba2fafb22,
        mid_contains_221e8e85cb385209,
        mid_isEmpty_89b302893bdbe1f1,
        mid_iterator_834a3801c426326d,
        mid_remove_221e8e85cb385209,
        mid_size_412668abc8d889e9,
        mid_spliterator_0a89e3b18808f850,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit HashSet(jobject obj) : ::java::util::AbstractSet(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      HashSet(const HashSet& obj) : ::java::util::AbstractSet(obj) {}

      HashSet();
      HashSet(jint);
      HashSet(const ::java::util::Collection &);
      HashSet(jint, jfloat);

      jboolean add(const ::java::lang::Object &) const;
      void clear() const;
      ::java::lang::Object clone() const;
      jboolean contains(const ::java::lang::Object &) const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      jboolean remove(const ::java::lang::Object &) const;
      jint size() const;
      ::java::util::Spliterator spliterator() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(HashSet);
    extern PyTypeObject *PY_TYPE(HashSet);

    class t_HashSet {
    public:
      PyObject_HEAD
      HashSet object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_HashSet *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const HashSet&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const HashSet&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
