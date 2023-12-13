#ifndef java_lang_System$Logger_H
#define java_lang_System$Logger_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class System$Logger$Level;
    class Throwable;
    class Class;
    class String;
  }
  namespace util {
    namespace function {
      class Supplier;
    }
    class ResourceBundle;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class System$Logger : public ::java::lang::Object {
     public:
      enum {
        mid_getName_1c1fa1e935d6cdcf,
        mid_isLoggable_5a1b1513ca374069,
        mid_log_4fa7eddafa665d23,
        mid_log_e8d92e36f33b3362,
        mid_log_cc115d8ae1298d1a,
        mid_log_35bdaa7c2435c524,
        mid_log_bb7a9eb3372b842e,
        mid_log_7054b5660034cfcb,
        mid_log_6e5c0db348854a99,
        mid_log_4aa0aa0b892fb1d0,
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
