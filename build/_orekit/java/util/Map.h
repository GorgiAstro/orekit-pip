#ifndef java_util_Map_H
#define java_util_Map_H

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
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Map : public ::java::lang::Object {
     public:
      enum {
        mid_clear_0640e6acf969ed28,
        mid_containsKey_221e8e85cb385209,
        mid_containsValue_221e8e85cb385209,
        mid_copyOf_ca09431f94120606,
        mid_entry_1391a80f2f629267,
        mid_entrySet_2dfcbd371d62f4e1,
        mid_equals_221e8e85cb385209,
        mid_get_65d69db95c5eb156,
        mid_getOrDefault_e9b6f8dd03d71e12,
        mid_hashCode_412668abc8d889e9,
        mid_isEmpty_89b302893bdbe1f1,
        mid_keySet_2dfcbd371d62f4e1,
        mid_of_1e62c2f73fbdd1c4,
        mid_of_be1ef584905f235e,
        mid_of_afe65da0f1e8ca4d,
        mid_of_a0ec658c23861a1d,
        mid_of_1d5b0576c3fdf61b,
        mid_of_5add7b125575ab54,
        mid_of_c820332be5621a8f,
        mid_of_ace850000436e41d,
        mid_of_0ea0405c53d4cebc,
        mid_of_1b7b49738db4649b,
        mid_of_850a7a0e95f71055,
        mid_ofEntries_031661cea938b506,
        mid_put_e9b6f8dd03d71e12,
        mid_putAll_6ba01303bcce0307,
        mid_putIfAbsent_e9b6f8dd03d71e12,
        mid_remove_65d69db95c5eb156,
        mid_remove_5f964797772d10ff,
        mid_replace_e9b6f8dd03d71e12,
        mid_replace_5c8006f3f1f9c96f,
        mid_size_412668abc8d889e9,
        mid_values_12ee61573a18f417,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Map(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Map(const Map& obj) : ::java::lang::Object(obj) {}

      void clear() const;
      jboolean containsKey(const ::java::lang::Object &) const;
      jboolean containsValue(const ::java::lang::Object &) const;
      static Map copyOf(const Map &);
      static ::java::util::Map$Entry entry(const ::java::lang::Object &, const ::java::lang::Object &);
      ::java::util::Set entrySet() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::Object get$(const ::java::lang::Object &) const;
      ::java::lang::Object getOrDefault(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Set keySet() const;
      static Map of();
      static Map of(const ::java::lang::Object &, const ::java::lang::Object &);
      static Map of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Map of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Map of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Map of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Map of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Map of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Map of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Map of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Map of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Map ofEntries(const JArray< ::java::util::Map$Entry > &);
      ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
      void putAll(const Map &) const;
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
    extern PyType_Def PY_TYPE_DEF(Map);
    extern PyTypeObject *PY_TYPE(Map);

    class t_Map {
    public:
      PyObject_HEAD
      Map object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_Map *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Map&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Map&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
