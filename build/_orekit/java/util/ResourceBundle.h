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
        mid_init$_0fa09c18fee449d5,
        mid_clearCache_0fa09c18fee449d5,
        mid_clearCache_5b2cbf1cefa98954,
        mid_containsKey_7edad2c2f64f4d68,
        mid_getBaseBundleName_11b109bd155ca898,
        mid_getBundle_e3321a87167f3b01,
        mid_getBundle_d805a6a98954e809,
        mid_getBundle_85e9b7f4ce4632dd,
        mid_getBundle_da57cf588f56405d,
        mid_getBundle_5b90e45e7082cba8,
        mid_getBundle_44f2f3b93de92349,
        mid_getBundle_134ae29f6d067afc,
        mid_getBundle_51a3deac5be470eb,
        mid_getKeys_0dc02dfa0be4cd25,
        mid_getLocale_d31b3a14c10c739b,
        mid_getObject_f639320a33718c6c,
        mid_getString_92807efd57acb082,
        mid_getStringArray_f96e27ad15cba282,
        mid_keySet_015730311a5bacdc,
        mid_handleKeySet_015730311a5bacdc,
        mid_handleGetObject_f639320a33718c6c,
        mid_setParent_734f3117d00f9ab6,
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
