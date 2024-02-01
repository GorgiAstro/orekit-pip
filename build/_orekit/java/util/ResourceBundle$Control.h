#ifndef java_util_ResourceBundle$Control_H
#define java_util_ResourceBundle$Control_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
    class List;
    class ResourceBundle$Control;
    class ResourceBundle;
  }
  namespace lang {
    class InstantiationException;
    class IllegalAccessException;
    class Class;
    class String;
    class ClassLoader;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class ResourceBundle$Control : public ::java::lang::Object {
     public:
      enum {
        mid_getCandidateLocales_35d6013265c82aff,
        mid_getControl_4600285a79697666,
        mid_getFallbackLocale_f7f54555048bc2c6,
        mid_getFormats_7a823e7285fdf3d6,
        mid_getNoFallbackControl_4600285a79697666,
        mid_getTimeToLive_c3715d8cc0d3721b,
        mid_needsReload_455bee464b342eb0,
        mid_newBundle_9d8ce1b08b92301a,
        mid_toBundleName_641a8f26d1eabba0,
        mid_toResourceName_91d6dcf90111829e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ResourceBundle$Control(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ResourceBundle$Control(const ResourceBundle$Control& obj) : ::java::lang::Object(obj) {}

      static ::java::util::List *FORMAT_CLASS;
      static ::java::util::List *FORMAT_DEFAULT;
      static ::java::util::List *FORMAT_PROPERTIES;
      static jlong TTL_DONT_CACHE;
      static jlong TTL_NO_EXPIRATION_CONTROL;

      ::java::util::List getCandidateLocales(const ::java::lang::String &, const ::java::util::Locale &) const;
      static ResourceBundle$Control getControl(const ::java::util::List &);
      ::java::util::Locale getFallbackLocale(const ::java::lang::String &, const ::java::util::Locale &) const;
      ::java::util::List getFormats(const ::java::lang::String &) const;
      static ResourceBundle$Control getNoFallbackControl(const ::java::util::List &);
      jlong getTimeToLive(const ::java::lang::String &, const ::java::util::Locale &) const;
      jboolean needsReload(const ::java::lang::String &, const ::java::util::Locale &, const ::java::lang::String &, const ::java::lang::ClassLoader &, const ::java::util::ResourceBundle &, jlong) const;
      ::java::util::ResourceBundle newBundle(const ::java::lang::String &, const ::java::util::Locale &, const ::java::lang::String &, const ::java::lang::ClassLoader &, jboolean) const;
      ::java::lang::String toBundleName(const ::java::lang::String &, const ::java::util::Locale &) const;
      ::java::lang::String toResourceName(const ::java::lang::String &, const ::java::lang::String &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(ResourceBundle$Control);
    extern PyTypeObject *PY_TYPE(ResourceBundle$Control);

    class t_ResourceBundle$Control {
    public:
      PyObject_HEAD
      ResourceBundle$Control object;
      static PyObject *wrap_Object(const ResourceBundle$Control&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
