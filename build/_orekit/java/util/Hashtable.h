#ifndef java_util_Hashtable_H
#define java_util_Hashtable_H

#include "java/util/Dictionary.h"

namespace java {
  namespace util {
    class Map$Entry;
    class Map;
    class Collection;
    class Set;
    class Enumeration;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class Object;
    class Cloneable;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Hashtable : public ::java::util::Dictionary {
     public:
      enum {
        mid_init$_0640e6acf969ed28,
        mid_init$_a3da1a935cb37f7b,
        mid_init$_6ba01303bcce0307,
        mid_init$_7c1037ab599ac362,
        mid_clear_0640e6acf969ed28,
        mid_clone_e661fe3ba2fafb22,
        mid_contains_221e8e85cb385209,
        mid_containsKey_221e8e85cb385209,
        mid_containsValue_221e8e85cb385209,
        mid_elements_00b99a423cfc29b8,
        mid_entrySet_2dfcbd371d62f4e1,
        mid_equals_221e8e85cb385209,
        mid_get_65d69db95c5eb156,
        mid_getOrDefault_e9b6f8dd03d71e12,
        mid_hashCode_412668abc8d889e9,
        mid_isEmpty_89b302893bdbe1f1,
        mid_keySet_2dfcbd371d62f4e1,
        mid_keys_00b99a423cfc29b8,
        mid_put_e9b6f8dd03d71e12,
        mid_putAll_6ba01303bcce0307,
        mid_putIfAbsent_e9b6f8dd03d71e12,
        mid_remove_65d69db95c5eb156,
        mid_remove_5f964797772d10ff,
        mid_replace_e9b6f8dd03d71e12,
        mid_replace_5c8006f3f1f9c96f,
        mid_size_412668abc8d889e9,
        mid_toString_3cffd47377eca18a,
        mid_values_12ee61573a18f417,
        mid_rehash_0640e6acf969ed28,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Hashtable(jobject obj) : ::java::util::Dictionary(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Hashtable(const Hashtable& obj) : ::java::util::Dictionary(obj) {}

      Hashtable();
      Hashtable(jint);
      Hashtable(const ::java::util::Map &);
      Hashtable(jint, jfloat);

      void clear() const;
      ::java::lang::Object clone() const;
      jboolean contains(const ::java::lang::Object &) const;
      jboolean containsKey(const ::java::lang::Object &) const;
      jboolean containsValue(const ::java::lang::Object &) const;
      ::java::util::Enumeration elements() const;
      ::java::util::Set entrySet() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::Object get$(const ::java::lang::Object &) const;
      ::java::lang::Object getOrDefault(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Set keySet() const;
      ::java::util::Enumeration keys() const;
      ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
      void putAll(const ::java::util::Map &) const;
      ::java::lang::Object putIfAbsent(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object remove(const ::java::lang::Object &) const;
      jboolean remove(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object replace(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jboolean replace(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &) const;
      jint size() const;
      ::java::lang::String toString() const;
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Hashtable);
    extern PyTypeObject *PY_TYPE(Hashtable);

    class t_Hashtable {
    public:
      PyObject_HEAD
      Hashtable object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_Hashtable *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Hashtable&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Hashtable&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
