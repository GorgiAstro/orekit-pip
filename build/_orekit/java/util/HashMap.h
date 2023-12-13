#ifndef java_util_HashMap_H
#define java_util_HashMap_H

#include "java/util/AbstractMap.h"

namespace java {
  namespace util {
    class Map$Entry;
    class Map;
    class Collection;
    class Set;
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

    class HashMap : public ::java::util::AbstractMap {
     public:
      enum {
        mid_init$_a1fa5dae97ea5ed2,
        mid_init$_44ed599e93e8a30c,
        mid_init$_6648520b18d8ef1d,
        mid_init$_71c8ec50293ab209,
        mid_clear_a1fa5dae97ea5ed2,
        mid_clone_541690f9ee81d3ad,
        mid_containsKey_460c5e2d9d51c6cc,
        mid_containsValue_460c5e2d9d51c6cc,
        mid_entrySet_7e8f11dd23d1142c,
        mid_get_5804c890f94a02b6,
        mid_getOrDefault_2329cf24e33e570d,
        mid_isEmpty_9ab94ac1dc23b105,
        mid_keySet_7e8f11dd23d1142c,
        mid_put_2329cf24e33e570d,
        mid_putAll_6648520b18d8ef1d,
        mid_putIfAbsent_2329cf24e33e570d,
        mid_remove_5804c890f94a02b6,
        mid_remove_b13624253707cc45,
        mid_replace_2329cf24e33e570d,
        mid_replace_9e90e99288cb1520,
        mid_size_55546ef6a647f39b,
        mid_values_cb666ea1a15f5210,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit HashMap(jobject obj) : ::java::util::AbstractMap(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      HashMap(const HashMap& obj) : ::java::util::AbstractMap(obj) {}

      HashMap();
      HashMap(jint);
      HashMap(const ::java::util::Map &);
      HashMap(jint, jfloat);

      void clear() const;
      ::java::lang::Object clone() const;
      jboolean containsKey(const ::java::lang::Object &) const;
      jboolean containsValue(const ::java::lang::Object &) const;
      ::java::util::Set entrySet() const;
      ::java::lang::Object get$(const ::java::lang::Object &) const;
      ::java::lang::Object getOrDefault(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jboolean isEmpty() const;
      ::java::util::Set keySet() const;
      ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
      void putAll(const ::java::util::Map &) const;
      ::java::lang::Object putIfAbsent(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object remove(const ::java::lang::Object &) const;
      jboolean remove(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object replace(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jboolean replace(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &) const;
      jint size() const;
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(HashMap);
    extern PyTypeObject *PY_TYPE(HashMap);

    class t_HashMap {
    public:
      PyObject_HEAD
      HashMap object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_HashMap *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const HashMap&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const HashMap&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
