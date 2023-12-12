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
        mid_init$_0640e6acf969ed28,
        mid_init$_f5ffdf29129ef90a,
        mid_init$_0701bef404aae0c6,
        mid_addSuppressed_7d9320fd2ea36122,
        mid_fillInStackTrace_1541e293f3dffabf,
        mid_getCause_1541e293f3dffabf,
        mid_getLocalizedMessage_3cffd47377eca18a,
        mid_getMessage_3cffd47377eca18a,
        mid_getStackTrace_8174c106a73a6243,
        mid_getSuppressed_42a44538f3fb6b65,
        mid_initCause_57bab603b01a2550,
        mid_printStackTrace_0640e6acf969ed28,
        mid_printStackTrace_bbeebf9dbb580a3d,
        mid_printStackTrace_b077047c9598ae7e,
        mid_setStackTrace_c1f85ec4ff7a3450,
        mid_toString_3cffd47377eca18a,
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
