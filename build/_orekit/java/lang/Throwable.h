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
        mid_init$_ff7cb6c242604316,
        mid_init$_105e1eadb709d9ac,
        mid_init$_e6096d9f5fb551a3,
        mid_addSuppressed_0a70d77e3c5fdad0,
        mid_fillInStackTrace_a725264cecc16b6f,
        mid_getCause_a725264cecc16b6f,
        mid_getLocalizedMessage_d2c8eb4129821f0e,
        mid_getMessage_d2c8eb4129821f0e,
        mid_getStackTrace_21f9fd78d23bbd0b,
        mid_getSuppressed_bf5807806a48678d,
        mid_initCause_c52829658c2e8f90,
        mid_printStackTrace_ff7cb6c242604316,
        mid_printStackTrace_7a6583f48fc2663f,
        mid_printStackTrace_742cc9c22b5169e7,
        mid_setStackTrace_1ced2dda8e39a296,
        mid_toString_d2c8eb4129821f0e,
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
