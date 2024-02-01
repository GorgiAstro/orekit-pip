#ifndef java_util_AbstractMap_H
#define java_util_AbstractMap_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map$Entry;
    class Map;
    class Collection;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class AbstractMap : public ::java::lang::Object {
     public:
      enum {
        mid_clear_ff7cb6c242604316,
        mid_containsKey_72faff9b05f5ed5e,
        mid_containsValue_72faff9b05f5ed5e,
        mid_entrySet_6b191a9b12c1004b,
        mid_equals_72faff9b05f5ed5e,
        mid_get_05290476c26136d7,
        mid_hashCode_d6ab429752e7c267,
        mid_isEmpty_eee3de00fe971136,
        mid_keySet_6b191a9b12c1004b,
        mid_put_ca14a13ec9c67cd5,
        mid_putAll_df2bb61624910c2a,
        mid_remove_05290476c26136d7,
        mid_size_d6ab429752e7c267,
        mid_toString_d2c8eb4129821f0e,
        mid_values_3bfef5c77ceb081a,
        mid_clone_704a5bee58538972,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit AbstractMap(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      AbstractMap(const AbstractMap& obj) : ::java::lang::Object(obj) {}

      void clear() const;
      jboolean containsKey(const ::java::lang::Object &) const;
      jboolean containsValue(const ::java::lang::Object &) const;
      ::java::util::Set entrySet() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::Object get$(const ::java::lang::Object &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Set keySet() const;
      ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
      void putAll(const ::java::util::Map &) const;
      ::java::lang::Object remove(const ::java::lang::Object &) const;
      jint size() const;
      ::java::lang::String toString() const;
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(AbstractMap);
    extern PyTypeObject *PY_TYPE(AbstractMap);

    class t_AbstractMap {
    public:
      PyObject_HEAD
      AbstractMap object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_AbstractMap *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const AbstractMap&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const AbstractMap&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
