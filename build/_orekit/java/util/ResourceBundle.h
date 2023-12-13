#ifndef java_util_ResourceBundle_H
#define java_util_ResourceBundle_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
    class ResourceBundle;
    class Enumeration;
    class Set;
    class ResourceBundle$Control;
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
        mid_init$_a1fa5dae97ea5ed2,
        mid_clearCache_a1fa5dae97ea5ed2,
        mid_clearCache_453dfedd86409b20,
        mid_containsKey_cde6b28e15c96b75,
        mid_getBaseBundleName_1c1fa1e935d6cdcf,
        mid_getBundle_87958702449aa9de,
        mid_getBundle_f30e31aff086822a,
        mid_getBundle_492c838d4e514eed,
        mid_getBundle_91e3a25906092405,
        mid_getBundle_5732ed4040ee3707,
        mid_getBundle_d4b10dbe28d13a94,
        mid_getBundle_e9111f85c389cfab,
        mid_getBundle_25c01a326a80559e,
        mid_getKeys_57aeac8743844cd2,
        mid_getLocale_179409cdd40bde08,
        mid_getObject_b5bfd4959be00bde,
        mid_getString_6f0f3576df9f75ee,
        mid_getStringArray_fb693b259486c655,
        mid_keySet_7e8f11dd23d1142c,
        mid_handleGetObject_b5bfd4959be00bde,
        mid_handleKeySet_7e8f11dd23d1142c,
        mid_setParent_a5272d4f65ea6ec7,
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
