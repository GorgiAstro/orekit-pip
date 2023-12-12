#ifndef java_util_Set_H
#define java_util_Set_H

#include "java/util/Collection.h"

namespace java {
  namespace util {
    class Iterator;
    class Spliterator;
    class Set;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Set : public ::java::util::Collection {
     public:
      enum {
        mid_add_221e8e85cb385209,
        mid_addAll_15ecf331dcc5aaf3,
        mid_clear_0640e6acf969ed28,
        mid_contains_221e8e85cb385209,
        mid_containsAll_15ecf331dcc5aaf3,
        mid_copyOf_eaf82a41b60fcb5a,
        mid_equals_221e8e85cb385209,
        mid_hashCode_412668abc8d889e9,
        mid_isEmpty_89b302893bdbe1f1,
        mid_iterator_834a3801c426326d,
        mid_of_2dfcbd371d62f4e1,
        mid_of_d6456602906d57e6,
        mid_of_6459512c177e7487,
        mid_of_8a965f74d6131377,
        mid_of_f57530e6ea576bb5,
        mid_of_09e567b2bb3add30,
        mid_of_af2f8f32107687bd,
        mid_of_38e2afb23e227320,
        mid_of_8f075837d6ee7cbf,
        mid_of_5f65cd7ea119758f,
        mid_of_9930f3a9d057e17d,
        mid_of_c5f04903206f4633,
        mid_remove_221e8e85cb385209,
        mid_removeAll_15ecf331dcc5aaf3,
        mid_retainAll_15ecf331dcc5aaf3,
        mid_size_412668abc8d889e9,
        mid_spliterator_0a89e3b18808f850,
        mid_toArray_6555a5198c71b73a,
        mid_toArray_73423092793bcd23,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Set(jobject obj) : ::java::util::Collection(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Set(const Set& obj) : ::java::util::Collection(obj) {}

      jboolean add(const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      void clear() const;
      jboolean contains(const ::java::lang::Object &) const;
      jboolean containsAll(const ::java::util::Collection &) const;
      static Set copyOf(const ::java::util::Collection &);
      jboolean equals(const ::java::lang::Object &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      static Set of();
      static Set of(const JArray< ::java::lang::Object > &);
      static Set of(const ::java::lang::Object &);
      static Set of(const ::java::lang::Object &, const ::java::lang::Object &);
      static Set of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Set of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Set of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Set of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Set of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Set of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Set of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Set of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      jboolean remove(const ::java::lang::Object &) const;
      jboolean removeAll(const ::java::util::Collection &) const;
      jboolean retainAll(const ::java::util::Collection &) const;
      jint size() const;
      ::java::util::Spliterator spliterator() const;
      JArray< ::java::lang::Object > toArray() const;
      JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Set);
    extern PyTypeObject *PY_TYPE(Set);

    class t_Set {
    public:
      PyObject_HEAD
      Set object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Set *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Set&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Set&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
