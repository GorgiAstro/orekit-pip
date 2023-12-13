#ifndef java_io_Console_H
#define java_io_Console_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Flushable;
    class Console;
    class Reader;
    class PrintWriter;
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
        mid_flush_a1fa5dae97ea5ed2,
        mid_format_a753c4a6aa81d280,
        mid_printf_a753c4a6aa81d280,
        mid_readLine_1c1fa1e935d6cdcf,
        mid_readLine_a04f4df1a34e49bc,
        mid_readPassword_53a37b9a05d57059,
        mid_readPassword_58e18f61460dea56,
        mid_reader_b2bc6d3e210c2dd4,
        mid_writer_b79b488bbc5cc057,
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
