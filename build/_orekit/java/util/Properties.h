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
    class IOException;
    class InputStream;
    class OutputStream;
    class PrintWriter;
    class Reader;
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
        mid_init$_0640e6acf969ed28,
        mid_init$_a3da1a935cb37f7b,
        mid_clear_0640e6acf969ed28,
        mid_clone_e661fe3ba2fafb22,
        mid_contains_221e8e85cb385209,
        mid_containsKey_221e8e85cb385209,
        mid_containsValue_221e8e85cb385209,
        mid_elements_00b99a423cfc29b8,
        mid_entrySet_2dfcbd371d62f4e1,
        mid_equals_221e8e85cb385209,
        mid_get_65d69db95c5eb156,
        mid_getOrDefault_e9b6f8dd03d71e12,
        mid_getProperty_60bb1b490b673cbf,
        mid_getProperty_495add03b8c9417b,
        mid_hashCode_412668abc8d889e9,
        mid_isEmpty_89b302893bdbe1f1,
        mid_keySet_2dfcbd371d62f4e1,
        mid_keys_00b99a423cfc29b8,
        mid_list_bbeebf9dbb580a3d,
        mid_list_b077047c9598ae7e,
        mid_load_115bc9fcd812647a,
        mid_load_d679cb724d14a1e8,
        mid_loadFromXML_115bc9fcd812647a,
        mid_propertyNames_00b99a423cfc29b8,
        mid_put_e9b6f8dd03d71e12,
        mid_putAll_6ba01303bcce0307,
        mid_putIfAbsent_e9b6f8dd03d71e12,
        mid_remove_65d69db95c5eb156,
        mid_remove_5f964797772d10ff,
        mid_replace_e9b6f8dd03d71e12,
        mid_replace_5c8006f3f1f9c96f,
        mid_save_207a8313515c6ca8,
        mid_setProperty_63fc77e6d24b7a67,
        mid_size_412668abc8d889e9,
        mid_store_207a8313515c6ca8,
        mid_store_a67829916a4b8bcb,
        mid_storeToXML_207a8313515c6ca8,
        mid_storeToXML_eeb3e1bed9e221e7,
        mid_stringPropertyNames_2dfcbd371d62f4e1,
        mid_toString_3cffd47377eca18a,
        mid_values_12ee61573a18f417,
        mid_rehash_0640e6acf969ed28,
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
