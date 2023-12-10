#ifndef java_util_ResourceBundle_H
#define java_util_ResourceBundle_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
    class ResourceBundle;
    class ResourceBundle$Control;
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
        mid_init$_7ae3461a92a43152,
        mid_clearCache_7ae3461a92a43152,
        mid_clearCache_9d86b3b4fa2f4a01,
        mid_containsKey_6b161f495ea569b8,
        mid_getBaseBundleName_0090f7797e403f43,
        mid_getBundle_425de97a61e47560,
        mid_getBundle_8a153c72d56f6efe,
        mid_getBundle_33767e35b0a269f4,
        mid_getBundle_bd32d557436ba459,
        mid_getBundle_a97bf6ce95c5ce27,
        mid_getBundle_b9889c4f08cb9f0a,
        mid_getBundle_751b39e21330a3bf,
        mid_getBundle_6f108b24bbd564e6,
        mid_getKeys_44964b2b3d187632,
        mid_getLocale_5e8efe29e6703a20,
        mid_getObject_f3d00a864d7248c7,
        mid_getString_43625fc1c3d86afe,
        mid_getStringArray_1c925abc6f702288,
        mid_keySet_e9e1a6780fe94297,
        mid_handleGetObject_f3d00a864d7248c7,
        mid_handleKeySet_e9e1a6780fe94297,
        mid_setParent_13cfe5475bd60ad9,
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
