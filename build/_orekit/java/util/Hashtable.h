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
        mid_init$_0fa09c18fee449d5,
        mid_init$_99803b0791f320ff,
        mid_init$_db8de8bc54857165,
        mid_init$_76637231e1f360e3,
        mid_clear_0fa09c18fee449d5,
        mid_clone_4d26fd885228c716,
        mid_contains_65c7d273e80d497a,
        mid_containsKey_65c7d273e80d497a,
        mid_containsValue_65c7d273e80d497a,
        mid_elements_0dc02dfa0be4cd25,
        mid_entrySet_015730311a5bacdc,
        mid_equals_65c7d273e80d497a,
        mid_get_9facd1449e0950d3,
        mid_getOrDefault_af8aa32ee9c1f184,
        mid_hashCode_570ce0828f81a2c1,
        mid_isEmpty_b108b35ef48e27bd,
        mid_keySet_015730311a5bacdc,
        mid_keys_0dc02dfa0be4cd25,
        mid_put_af8aa32ee9c1f184,
        mid_putAll_db8de8bc54857165,
        mid_putIfAbsent_af8aa32ee9c1f184,
        mid_remove_9facd1449e0950d3,
        mid_remove_83750138b7b51bf4,
        mid_replace_af8aa32ee9c1f184,
        mid_replace_25e3a1e437d39751,
        mid_size_570ce0828f81a2c1,
        mid_toString_11b109bd155ca898,
        mid_values_37528d110cff6b74,
        mid_rehash_0fa09c18fee449d5,
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
