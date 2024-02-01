#ifndef java_lang_System$Logger_H
#define java_lang_System$Logger_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Supplier;
    }
    class ResourceBundle;
  }
  namespace lang {
    class System$Logger$Level;
    class Throwable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class System$Logger : public ::java::lang::Object {
     public:
      enum {
        mid_getName_d2c8eb4129821f0e,
        mid_isLoggable_6482ac68f75b234a,
        mid_log_35b756f3c0150a68,
        mid_log_e24e7e06b7dd1d55,
        mid_log_c5ea91070c7877af,
        mid_log_87b1e104721cc475,
        mid_log_c7e83afb098bc0c7,
        mid_log_454c3d5cce8beda5,
        mid_log_d846c53c1be12311,
        mid_log_9141164ca925417e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit System$Logger(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      System$Logger(const System$Logger& obj) : ::java::lang::Object(obj) {}

      ::java::lang::String getName() const;
      jboolean isLoggable(const ::java::lang::System$Logger$Level &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::lang::String &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::lang::Object &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::util::function::Supplier &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::lang::String &, const ::java::lang::Throwable &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::util::function::Supplier &, const ::java::lang::Throwable &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::util::ResourceBundle &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::util::ResourceBundle &, const ::java::lang::String &, const ::java::lang::Throwable &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(System$Logger);
    extern PyTypeObject *PY_TYPE(System$Logger);

    class t_System$Logger {
    public:
      PyObject_HEAD
      System$Logger object;
      static PyObject *wrap_Object(const System$Logger&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
