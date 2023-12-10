#ifndef java_util_HashSet_H
#define java_util_HashSet_H

#include "java/util/AbstractSet.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
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

    class HashSet : public ::java::util::AbstractSet {
     public:
      enum {
        mid_init$_7ae3461a92a43152,
        mid_init$_0a2a1ac2721c0336,
        mid_init$_26b3669ec54017ce,
        mid_init$_75c5b1de54fd54f2,
        mid_add_229c87223f486349,
        mid_clear_7ae3461a92a43152,
        mid_clone_dfd7647d9110ac9f,
        mid_contains_229c87223f486349,
        mid_isEmpty_e470b6d9e0d979db,
        mid_iterator_035c6167e6569aac,
        mid_remove_229c87223f486349,
        mid_size_f2f64475e4580546,
        mid_spliterator_df0341cda53d4d48,
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
