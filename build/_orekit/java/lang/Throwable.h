#ifndef java_lang_Throwable_H
#define java_lang_Throwable_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class StackTraceElement;
    class Class;
    class String;
  }
  namespace io {
    class Serializable;
    class PrintWriter;
    class PrintStream;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Throwable : public ::java::lang::Object {
     public:
      enum {
        mid_init$_a1fa5dae97ea5ed2,
        mid_init$_734b91ac30d5f9b4,
        mid_init$_9d7a6ef9713b9df2,
        mid_addSuppressed_c5d3549d4f245728,
        mid_fillInStackTrace_8ccc799e0abbc77e,
        mid_getCause_8ccc799e0abbc77e,
        mid_getLocalizedMessage_1c1fa1e935d6cdcf,
        mid_getMessage_1c1fa1e935d6cdcf,
        mid_getStackTrace_17c6439d4c7f5646,
        mid_getSuppressed_3b8bdf81e815c0a6,
        mid_initCause_ec584df1afedc80c,
        mid_printStackTrace_a1fa5dae97ea5ed2,
        mid_printStackTrace_5820b90479773400,
        mid_printStackTrace_9ccc55eb3506a3d6,
        mid_setStackTrace_392578951a1ba08c,
        mid_toString_1c1fa1e935d6cdcf,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Throwable(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Throwable(const Throwable& obj) : ::java::lang::Object(obj) {}

      Throwable();
      Throwable(const ::java::lang::String &);
      Throwable(const ::java::lang::String &, const Throwable &);

      void addSuppressed(const Throwable &) const;
      Throwable fillInStackTrace() const;
      Throwable getCause() const;
      ::java::lang::String getLocalizedMessage() const;
      ::java::lang::String getMessage() const;
      JArray< ::java::lang::StackTraceElement > getStackTrace() const;
      JArray< Throwable > getSuppressed() const;
      Throwable initCause(const Throwable &) const;
      void printStackTrace() const;
      void printStackTrace(const ::java::io::PrintStream &) const;
      void printStackTrace(const ::java::io::PrintWriter &) const;
      void setStackTrace(const JArray< ::java::lang::StackTraceElement > &) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Throwable);
    extern PyTypeObject *PY_TYPE(Throwable);

    class t_Throwable {
    public:
      PyObject_HEAD
      Throwable object;
      static PyObject *wrap_Object(const Throwable&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
