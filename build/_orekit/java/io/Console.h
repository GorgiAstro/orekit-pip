#ifndef java_io_Console_H
#define java_io_Console_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Flushable;
    class Reader;
    class PrintWriter;
    class Console;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class Console : public ::java::lang::Object {
     public:
      enum {
        mid_flush_ff7cb6c242604316,
        mid_format_c28261cfaff181dd,
        mid_printf_c28261cfaff181dd,
        mid_readLine_d2c8eb4129821f0e,
        mid_readLine_c9595ebc2d5f5371,
        mid_readPassword_dc85a3bfc14a8b31,
        mid_readPassword_b28b527b55e31f38,
        mid_reader_0a92f974b39121e6,
        mid_writer_38e3d00017946494,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Console(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Console(const Console& obj) : ::java::lang::Object(obj) {}

      void flush() const;
      Console format(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      Console printf(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      ::java::lang::String readLine() const;
      ::java::lang::String readLine(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      JArray< jchar > readPassword() const;
      JArray< jchar > readPassword(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      ::java::io::Reader reader() const;
      ::java::io::PrintWriter writer() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(Console);
    extern PyTypeObject *PY_TYPE(Console);

    class t_Console {
    public:
      PyObject_HEAD
      Console object;
      static PyObject *wrap_Object(const Console&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
