#ifndef java_util_ResourceBundle$Control_H
#define java_util_ResourceBundle$Control_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class ResourceBundle$Control;
    class Locale;
    class List;
    class ResourceBundle;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class InstantiationException;
    class IllegalAccessException;
    class Class;
    class String;
    class ClassLoader;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class ResourceBundle$Control : public ::java::lang::Object {
     public:
      enum {
        mid_getCandidateLocales_31d5ff3a82e11577,
        mid_getControl_5a94baa170b5bb61,
        mid_getFallbackLocale_5b93a5dd19b99d50,
        mid_getFormats_112f9b169ddc4fbe,
        mid_getNoFallbackControl_5a94baa170b5bb61,
        mid_getTimeToLive_5b4fedcee16880a3,
        mid_needsReload_65cfc4d7faf66b3e,
        mid_newBundle_c5caa61954589488,
        mid_toBundleName_23e0ac6ff2600e8d,
        mid_toResourceName_495add03b8c9417b,
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
