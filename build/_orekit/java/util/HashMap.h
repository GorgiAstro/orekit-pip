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
        mid_init$_0fa09c18fee449d5,
        mid_init$_99803b0791f320ff,
        mid_init$_db8de8bc54857165,
        mid_init$_76637231e1f360e3,
        mid_clear_0fa09c18fee449d5,
        mid_clone_4d26fd885228c716,
        mid_containsKey_65c7d273e80d497a,
        mid_containsValue_65c7d273e80d497a,
        mid_entrySet_015730311a5bacdc,
        mid_get_9facd1449e0950d3,
        mid_getOrDefault_af8aa32ee9c1f184,
        mid_isEmpty_b108b35ef48e27bd,
        mid_keySet_015730311a5bacdc,
        mid_put_af8aa32ee9c1f184,
        mid_putAll_db8de8bc54857165,
        mid_putIfAbsent_af8aa32ee9c1f184,
        mid_remove_9facd1449e0950d3,
        mid_remove_83750138b7b51bf4,
        mid_replace_af8aa32ee9c1f184,
        mid_replace_25e3a1e437d39751,
        mid_size_570ce0828f81a2c1,
        mid_values_37528d110cff6b74,
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
