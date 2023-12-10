#ifndef java_io_Console_H
#define java_io_Console_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Reader;
    class Flushable;
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
        mid_flush_0fa09c18fee449d5,
        mid_format_e74765ad272a293e,
        mid_printf_e74765ad272a293e,
        mid_readLine_11b109bd155ca898,
        mid_readLine_f5b4dd623dba97e9,
        mid_readPassword_1c41284d788a6957,
        mid_readPassword_a7132a73eeb55370,
        mid_reader_26c6a3f16521a493,
        mid_writer_aac0951e65427d21,
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
