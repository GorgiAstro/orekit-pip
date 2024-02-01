#ifndef java_util_Properties_H
#define java_util_Properties_H

#include "java/util/Hashtable.h"

namespace java {
  namespace util {
    class Map$Entry;
    class Map;
    class Collection;
    class InvalidPropertiesFormatException;
    class Enumeration;
    class Set;
  }
  namespace io {
    class IOException;
    class InputStream;
    class OutputStream;
    class Reader;
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
        mid_init$_ff7cb6c242604316,
        mid_init$_8fd427ab23829bf5,
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
        mid_getProperty_95277969d373e11f,
        mid_getProperty_91d6dcf90111829e,
        mid_hashCode_d6ab429752e7c267,
        mid_isEmpty_eee3de00fe971136,
        mid_keySet_6b191a9b12c1004b,
        mid_keys_21566f230cac5c4a,
        mid_list_7a6583f48fc2663f,
        mid_list_742cc9c22b5169e7,
        mid_load_8f4bef0679d2f8d5,
        mid_load_fdff785437afea93,
        mid_loadFromXML_8f4bef0679d2f8d5,
        mid_propertyNames_21566f230cac5c4a,
        mid_put_ca14a13ec9c67cd5,
        mid_putAll_df2bb61624910c2a,
        mid_putIfAbsent_ca14a13ec9c67cd5,
        mid_remove_05290476c26136d7,
        mid_remove_3bf9f05b3327e056,
        mid_replace_ca14a13ec9c67cd5,
        mid_replace_9bb49a94d944b361,
        mid_save_b27d45c3effd3a77,
        mid_setProperty_60b85247cb54000f,
        mid_size_d6ab429752e7c267,
        mid_store_b27d45c3effd3a77,
        mid_store_c65209b838646f3a,
        mid_storeToXML_b27d45c3effd3a77,
        mid_storeToXML_56c938f549c63433,
        mid_stringPropertyNames_6b191a9b12c1004b,
        mid_toString_d2c8eb4129821f0e,
        mid_values_3bfef5c77ceb081a,
        mid_rehash_ff7cb6c242604316,
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
