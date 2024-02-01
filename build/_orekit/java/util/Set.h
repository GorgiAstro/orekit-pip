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
        mid_add_72faff9b05f5ed5e,
        mid_addAll_61d64368c58b84f3,
        mid_clear_ff7cb6c242604316,
        mid_contains_72faff9b05f5ed5e,
        mid_containsAll_61d64368c58b84f3,
        mid_copyOf_c08b85fb6cea561c,
        mid_equals_72faff9b05f5ed5e,
        mid_hashCode_d6ab429752e7c267,
        mid_isEmpty_eee3de00fe971136,
        mid_iterator_4f613ccd2f803b4b,
        mid_of_6b191a9b12c1004b,
        mid_of_0a425ed7b931c546,
        mid_of_dd7b1a28b924e386,
        mid_of_5dea77d830943608,
        mid_of_0004910f2eb08231,
        mid_of_eedc3fa773150619,
        mid_of_d68918d63bc49421,
        mid_of_bd904d363a04741d,
        mid_of_1e7a5470eb41ba81,
        mid_of_1361ecfda280067e,
        mid_of_61c014cebcbf507f,
        mid_of_b7fe627f0b0b8f43,
        mid_remove_72faff9b05f5ed5e,
        mid_removeAll_61d64368c58b84f3,
        mid_retainAll_61d64368c58b84f3,
        mid_size_d6ab429752e7c267,
        mid_spliterator_74c84c40cacaa7be,
        mid_toArray_2ab86268ef7a6631,
        mid_toArray_f4767af6a3829fbc,
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
