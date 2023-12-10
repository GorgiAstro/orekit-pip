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
        mid_init$_0fa09c18fee449d5,
        mid_init$_99803b0791f320ff,
        mid_init$_f72f53318f80c525,
        mid_init$_76637231e1f360e3,
        mid_add_65c7d273e80d497a,
        mid_clear_0fa09c18fee449d5,
        mid_clone_4d26fd885228c716,
        mid_contains_65c7d273e80d497a,
        mid_isEmpty_b108b35ef48e27bd,
        mid_iterator_4d23511a9f0db098,
        mid_remove_65c7d273e80d497a,
        mid_size_570ce0828f81a2c1,
        mid_spliterator_ef1070394b413a84,
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
