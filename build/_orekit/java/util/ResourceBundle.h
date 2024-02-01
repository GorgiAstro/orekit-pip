#ifndef java_util_ResourceBundle_H
#define java_util_ResourceBundle_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
    class ResourceBundle$Control;
    class Enumeration;
    class Set;
    class ResourceBundle;
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
        mid_init$_ff7cb6c242604316,
        mid_clearCache_ff7cb6c242604316,
        mid_clearCache_a61ce527d5e72f5b,
        mid_containsKey_df4c65b2aede5c41,
        mid_getBaseBundleName_d2c8eb4129821f0e,
        mid_getBundle_28d801a7a9e4fcc5,
        mid_getBundle_1a5482ec6ba3acfb,
        mid_getBundle_1e239705ec6f776d,
        mid_getBundle_07340b09173eae4b,
        mid_getBundle_5374368a5a436b81,
        mid_getBundle_f8dd4077cd9fa3df,
        mid_getBundle_ddcefc58f8bc9f25,
        mid_getBundle_4345967f9a576955,
        mid_getKeys_21566f230cac5c4a,
        mid_getLocale_19f55af8c42f77cb,
        mid_getObject_bb1ff484ae64c57e,
        mid_getString_95277969d373e11f,
        mid_getStringArray_8e8aaefa3268abcf,
        mid_keySet_6b191a9b12c1004b,
        mid_handleGetObject_bb1ff484ae64c57e,
        mid_handleKeySet_6b191a9b12c1004b,
        mid_setParent_d452cc51c7625c54,
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
