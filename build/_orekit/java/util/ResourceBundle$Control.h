#ifndef java_util_ResourceBundle$Control_H
#define java_util_ResourceBundle$Control_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
    class List;
    class ResourceBundle;
    class ResourceBundle$Control;
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
        mid_getCandidateLocales_0ce6fdc79798094e,
        mid_getControl_0f34a07e65cacad0,
        mid_getFallbackLocale_735143ee48f37be6,
        mid_getFormats_abe6e889bc24795d,
        mid_getNoFallbackControl_0f34a07e65cacad0,
        mid_getTimeToLive_e68533389ce9fba8,
        mid_needsReload_5007a333490ad2f4,
        mid_newBundle_8ca50bd8ea3c1503,
        mid_toBundleName_9c65f36218adb4b6,
        mid_toResourceName_88f2f8c619f3cbd0,
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
