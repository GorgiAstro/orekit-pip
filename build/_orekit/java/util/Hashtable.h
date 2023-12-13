#ifndef java_util_Hashtable_H
#define java_util_Hashtable_H

#include "java/util/Dictionary.h"

namespace java {
  namespace util {
    class Map$Entry;
    class Map;
    class Collection;
    class Enumeration;
    class Set;
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
        mid_init$_a1fa5dae97ea5ed2,
        mid_init$_44ed599e93e8a30c,
        mid_init$_6648520b18d8ef1d,
        mid_init$_71c8ec50293ab209,
        mid_clear_a1fa5dae97ea5ed2,
        mid_clone_541690f9ee81d3ad,
        mid_contains_460c5e2d9d51c6cc,
        mid_containsKey_460c5e2d9d51c6cc,
        mid_containsValue_460c5e2d9d51c6cc,
        mid_elements_57aeac8743844cd2,
        mid_entrySet_7e8f11dd23d1142c,
        mid_equals_460c5e2d9d51c6cc,
        mid_get_5804c890f94a02b6,
        mid_getOrDefault_2329cf24e33e570d,
        mid_hashCode_55546ef6a647f39b,
        mid_isEmpty_9ab94ac1dc23b105,
        mid_keySet_7e8f11dd23d1142c,
        mid_keys_57aeac8743844cd2,
        mid_put_2329cf24e33e570d,
        mid_putAll_6648520b18d8ef1d,
        mid_putIfAbsent_2329cf24e33e570d,
        mid_remove_5804c890f94a02b6,
        mid_remove_b13624253707cc45,
        mid_replace_2329cf24e33e570d,
        mid_replace_9e90e99288cb1520,
        mid_size_55546ef6a647f39b,
        mid_toString_1c1fa1e935d6cdcf,
        mid_values_cb666ea1a15f5210,
        mid_rehash_a1fa5dae97ea5ed2,
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
