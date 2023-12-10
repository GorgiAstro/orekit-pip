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
    class Throwable;
    class System$Logger$Level;
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
        mid_getName_11b109bd155ca898,
        mid_isLoggable_f3bee7568d22bab7,
        mid_log_4fc1faf6d98530df,
        mid_log_8075ac60c2498ce5,
        mid_log_376f9678ec757672,
        mid_log_a2145bb1e1cf08e9,
        mid_log_5b32bc2fcbc7ab37,
        mid_log_826a17a9525dd3b3,
        mid_log_8d1c006254da0d24,
        mid_log_a9d5e47bc3bdd2da,
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
