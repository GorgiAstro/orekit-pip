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
        mid_init$_ff7cb6c242604316,
        mid_init$_8fd427ab23829bf5,
        mid_init$_df2bb61624910c2a,
        mid_init$_3c81d70650b38107,
        mid_clear_ff7cb6c242604316,
        mid_clone_704a5bee58538972,
        mid_contains_72faff9b05f5ed5e,
        mid_containsKey_72faff9b05f5ed5e,
        mid_containsValue_72faff9b05f5ed5e,
        mid_elements_21566f230cac5c4a,
        mid_entrySet_6b191a9b12c1004b,
        mid_equals_72faff9b05f5ed5e,
        mid_get_05290476c26136d7,
        mid_getOrDefault_ca14a13ec9c67cd5,
        mid_hashCode_d6ab429752e7c267,
        mid_isEmpty_eee3de00fe971136,
        mid_keySet_6b191a9b12c1004b,
        mid_keys_21566f230cac5c4a,
        mid_put_ca14a13ec9c67cd5,
        mid_putAll_df2bb61624910c2a,
        mid_putIfAbsent_ca14a13ec9c67cd5,
        mid_remove_05290476c26136d7,
        mid_remove_3bf9f05b3327e056,
        mid_replace_ca14a13ec9c67cd5,
        mid_replace_9bb49a94d944b361,
        mid_size_d6ab429752e7c267,
        mid_toString_d2c8eb4129821f0e,
        mid_values_3bfef5c77ceb081a,
        mid_rehash_ff7cb6c242604316,
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
