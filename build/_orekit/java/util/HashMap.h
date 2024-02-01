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
        mid_init$_ff7cb6c242604316,
        mid_init$_8fd427ab23829bf5,
        mid_init$_df2bb61624910c2a,
        mid_init$_3c81d70650b38107,
        mid_clear_ff7cb6c242604316,
        mid_clone_704a5bee58538972,
        mid_containsKey_72faff9b05f5ed5e,
        mid_containsValue_72faff9b05f5ed5e,
        mid_entrySet_6b191a9b12c1004b,
        mid_get_05290476c26136d7,
        mid_getOrDefault_ca14a13ec9c67cd5,
        mid_isEmpty_eee3de00fe971136,
        mid_keySet_6b191a9b12c1004b,
        mid_put_ca14a13ec9c67cd5,
        mid_putAll_df2bb61624910c2a,
        mid_putIfAbsent_ca14a13ec9c67cd5,
        mid_remove_05290476c26136d7,
        mid_remove_3bf9f05b3327e056,
        mid_replace_ca14a13ec9c67cd5,
        mid_replace_9bb49a94d944b361,
        mid_size_d6ab429752e7c267,
        mid_values_3bfef5c77ceb081a,
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
