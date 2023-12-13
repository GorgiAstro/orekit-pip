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
        mid_clear_a1fa5dae97ea5ed2,
        mid_containsKey_460c5e2d9d51c6cc,
        mid_containsValue_460c5e2d9d51c6cc,
        mid_copyOf_1219d2729927aa1d,
        mid_entry_36adb9ab5a7c355a,
        mid_entrySet_7e8f11dd23d1142c,
        mid_equals_460c5e2d9d51c6cc,
        mid_get_5804c890f94a02b6,
        mid_getOrDefault_2329cf24e33e570d,
        mid_hashCode_55546ef6a647f39b,
        mid_isEmpty_9ab94ac1dc23b105,
        mid_keySet_7e8f11dd23d1142c,
        mid_of_810bed48fafb0b9a,
        mid_of_dc0b43c0c4f53fdb,
        mid_of_a2c331f5e0732b51,
        mid_of_c2742e4003620972,
        mid_of_8edfe967fb5c72ec,
        mid_of_9c96fdfd3457d799,
        mid_of_3e79769dbff41dbc,
        mid_of_9c53791d1b7b3e79,
        mid_of_d9f0867ac977a8eb,
        mid_of_3850697a43b7038a,
        mid_of_f73d9f07ec861495,
        mid_ofEntries_b1792a9df91f3b51,
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
