#ifndef java_util_Properties_H
#define java_util_Properties_H

#include "java/util/Hashtable.h"

namespace java {
  namespace util {
    class Map$Entry;
    class Map;
    class Collection;
    class Set;
    class Enumeration;
    class InvalidPropertiesFormatException;
  }
  namespace io {
    class Reader;
    class IOException;
    class InputStream;
    class OutputStream;
    class PrintWriter;
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
        mid_init$_0fa09c18fee449d5,
        mid_init$_99803b0791f320ff,
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
        mid_getProperty_92807efd57acb082,
        mid_getProperty_d3f6016a3bf93dcd,
        mid_hashCode_570ce0828f81a2c1,
        mid_isEmpty_b108b35ef48e27bd,
        mid_keySet_015730311a5bacdc,
        mid_keys_0dc02dfa0be4cd25,
        mid_list_d7059445128d3e18,
        mid_list_4999b5b1f2d8269b,
        mid_load_42871fcf824ad25f,
        mid_load_6bec8244898df009,
        mid_loadFromXML_42871fcf824ad25f,
        mid_propertyNames_0dc02dfa0be4cd25,
        mid_put_af8aa32ee9c1f184,
        mid_putAll_db8de8bc54857165,
        mid_putIfAbsent_af8aa32ee9c1f184,
        mid_remove_9facd1449e0950d3,
        mid_remove_83750138b7b51bf4,
        mid_replace_af8aa32ee9c1f184,
        mid_replace_25e3a1e437d39751,
        mid_save_c55dfb0939e8fb48,
        mid_setProperty_117fa3e1caf1236b,
        mid_size_570ce0828f81a2c1,
        mid_store_c55dfb0939e8fb48,
        mid_store_aace611d43734887,
        mid_storeToXML_c55dfb0939e8fb48,
        mid_storeToXML_78f8716e1ece5bfa,
        mid_stringPropertyNames_015730311a5bacdc,
        mid_toString_11b109bd155ca898,
        mid_values_37528d110cff6b74,
        mid_rehash_0fa09c18fee449d5,
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
