#ifndef java_util_ResourceBundle_H
#define java_util_ResourceBundle_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class ResourceBundle$Control;
    class Locale;
    class ResourceBundle;
    class Enumeration;
    class Set;
  }
  namespace lang {
    class Module;
    class Class;
    class String;
    class ClassLoader;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class ResourceBundle : public ::java::lang::Object {
     public:
      enum {
        mid_init$_0640e6acf969ed28,
        mid_clearCache_0640e6acf969ed28,
        mid_clearCache_3cf05a86101dd452,
        mid_containsKey_fd2162b8a05a22fe,
        mid_getBaseBundleName_3cffd47377eca18a,
        mid_getBundle_e0da9fa628df6799,
        mid_getBundle_7b6c9c1764085eea,
        mid_getBundle_4751b51e2cea8067,
        mid_getBundle_33e498a9d5a4d5af,
        mid_getBundle_4cc81d9f43c60e1f,
        mid_getBundle_8e47a1358bccd05d,
        mid_getBundle_4c02f480d3600c6f,
        mid_getBundle_b3b885301694fe90,
        mid_getKeys_00b99a423cfc29b8,
        mid_getLocale_dbe2fc8ef8b3e0a1,
        mid_getObject_86c4b8560f4aa70f,
        mid_getString_60bb1b490b673cbf,
        mid_getStringArray_c6b001d9fe3bba6d,
        mid_keySet_2dfcbd371d62f4e1,
        mid_handleGetObject_86c4b8560f4aa70f,
        mid_handleKeySet_2dfcbd371d62f4e1,
        mid_setParent_da729090bfa11ea4,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ResourceBundle(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ResourceBundle(const ResourceBundle& obj) : ::java::lang::Object(obj) {}

      ResourceBundle();

      static void clearCache();
      static void clearCache(const ::java::lang::ClassLoader &);
      jboolean containsKey(const ::java::lang::String &) const;
      ::java::lang::String getBaseBundleName() const;
      static ResourceBundle getBundle(const ::java::lang::String &);
      static ResourceBundle getBundle(const ::java::lang::String &, const ::java::lang::Module &);
      static ResourceBundle getBundle(const ::java::lang::String &, const ::java::util::Locale &);
      static ResourceBundle getBundle(const ::java::lang::String &, const ::java::util::ResourceBundle$Control &);
      static ResourceBundle getBundle(const ::java::lang::String &, const ::java::util::Locale &, const ::java::lang::ClassLoader &);
      static ResourceBundle getBundle(const ::java::lang::String &, const ::java::util::Locale &, const ::java::lang::Module &);
      static ResourceBundle getBundle(const ::java::lang::String &, const ::java::util::Locale &, const ::java::util::ResourceBundle$Control &);
      static ResourceBundle getBundle(const ::java::lang::String &, const ::java::util::Locale &, const ::java::lang::ClassLoader &, const ::java::util::ResourceBundle$Control &);
      ::java::util::Enumeration getKeys() const;
      ::java::util::Locale getLocale() const;
      ::java::lang::Object getObject(const ::java::lang::String &) const;
      ::java::lang::String getString(const ::java::lang::String &) const;
      JArray< ::java::lang::String > getStringArray(const ::java::lang::String &) const;
      ::java::util::Set keySet() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(ResourceBundle);
    extern PyTypeObject *PY_TYPE(ResourceBundle);

    class t_ResourceBundle {
    public:
      PyObject_HEAD
      ResourceBundle object;
      static PyObject *wrap_Object(const ResourceBundle&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
