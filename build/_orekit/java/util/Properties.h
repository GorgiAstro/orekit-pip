#ifndef java_util_Properties_H
#define java_util_Properties_H

#include "java/util/Hashtable.h"

namespace java {
  namespace util {
    class Map$Entry;
    class Map;
    class InvalidPropertiesFormatException;
    class Collection;
    class Enumeration;
    class Set;
  }
  namespace io {
    class InputStream;
    class OutputStream;
    class Reader;
    class PrintWriter;
    class IOException;
    class Writer;
    class PrintStream;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Properties : public ::java::util::Hashtable {
     public:
      enum {
        mid_init$_a1fa5dae97ea5ed2,
        mid_init$_44ed599e93e8a30c,
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
        mid_getProperty_6f0f3576df9f75ee,
        mid_getProperty_88f2f8c619f3cbd0,
        mid_hashCode_55546ef6a647f39b,
        mid_isEmpty_9ab94ac1dc23b105,
        mid_keySet_7e8f11dd23d1142c,
        mid_keys_57aeac8743844cd2,
        mid_list_5820b90479773400,
        mid_list_9ccc55eb3506a3d6,
        mid_load_471a178453aa39ad,
        mid_load_e1a387c1ca9243a3,
        mid_loadFromXML_471a178453aa39ad,
        mid_propertyNames_57aeac8743844cd2,
        mid_put_2329cf24e33e570d,
        mid_putAll_6648520b18d8ef1d,
        mid_putIfAbsent_2329cf24e33e570d,
        mid_remove_5804c890f94a02b6,
        mid_remove_b13624253707cc45,
        mid_replace_2329cf24e33e570d,
        mid_replace_9e90e99288cb1520,
        mid_save_da35cb4b68e0734e,
        mid_setProperty_c48c6297bfeb4866,
        mid_size_55546ef6a647f39b,
        mid_store_da35cb4b68e0734e,
        mid_store_633d333981600a7f,
        mid_storeToXML_da35cb4b68e0734e,
        mid_storeToXML_4106e7ac2f1e348d,
        mid_stringPropertyNames_7e8f11dd23d1142c,
        mid_toString_1c1fa1e935d6cdcf,
        mid_values_cb666ea1a15f5210,
        mid_rehash_a1fa5dae97ea5ed2,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Properties(jobject obj) : ::java::util::Hashtable(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Properties(const Properties& obj) : ::java::util::Hashtable(obj) {}

      Properties();
      Properties(jint);

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
      ::java::lang::String getProperty(const ::java::lang::String &) const;
      ::java::lang::String getProperty(const ::java::lang::String &, const ::java::lang::String &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Set keySet() const;
      ::java::util::Enumeration keys() const;
      void list(const ::java::io::PrintStream &) const;
      void list(const ::java::io::PrintWriter &) const;
      void load(const ::java::io::InputStream &) const;
      void load(const ::java::io::Reader &) const;
      void loadFromXML(const ::java::io::InputStream &) const;
      ::java::util::Enumeration propertyNames() const;
      ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
      void putAll(const ::java::util::Map &) const;
      ::java::lang::Object putIfAbsent(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object remove(const ::java::lang::Object &) const;
      jboolean remove(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object replace(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jboolean replace(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &) const;
      void save(const ::java::io::OutputStream &, const ::java::lang::String &) const;
      ::java::lang::Object setProperty(const ::java::lang::String &, const ::java::lang::String &) const;
      jint size() const;
      void store(const ::java::io::OutputStream &, const ::java::lang::String &) const;
      void store(const ::java::io::Writer &, const ::java::lang::String &) const;
      void storeToXML(const ::java::io::OutputStream &, const ::java::lang::String &) const;
      void storeToXML(const ::java::io::OutputStream &, const ::java::lang::String &, const ::java::lang::String &) const;
      ::java::util::Set stringPropertyNames() const;
      ::java::lang::String toString() const;
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Properties);
    extern PyTypeObject *PY_TYPE(Properties);

    class t_Properties {
    public:
      PyObject_HEAD
      Properties object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_Properties *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Properties&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Properties&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
