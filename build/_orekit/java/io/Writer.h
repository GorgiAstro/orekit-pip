#ifndef java_io_Writer_H
#define java_io_Writer_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Flushable;
    class Closeable;
    class Writer;
  }
  namespace lang {
    class CharSequence;
    class Appendable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class Writer : public ::java::lang::Object {
     public:
      enum {
        mid_append_640b78bb78e686df,
        mid_append_422fd4dbedc8618d,
        mid_append_390c58dd5a41f119,
        mid_close_0640e6acf969ed28,
        mid_flush_0640e6acf969ed28,
        mid_nullWriter_d780d9f7db270aad,
        mid_write_916bf6d42d285c69,
        mid_write_f5ffdf29129ef90a,
        mid_write_a3da1a935cb37f7b,
        mid_write_5421d1c1f03cf945,
        mid_write_96097c5e4aacac76,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Writer(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Writer(const Writer& obj) : ::java::lang::Object(obj) {}

      Writer append(jchar) const;
      Writer append(const ::java::lang::CharSequence &) const;
      Writer append(const ::java::lang::CharSequence &, jint, jint) const;
      void close() const;
      void flush() const;
      static Writer nullWriter();
      void write(const JArray< jchar > &) const;
      void write(const ::java::lang::String &) const;
      void write(jint) const;
      void write(const JArray< jchar > &, jint, jint) const;
      void write(const ::java::lang::String &, jint, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(Writer);
    extern PyTypeObject *PY_TYPE(Writer);

    class t_Writer {
    public:
      PyObject_HEAD
      Writer object;
      static PyObject *wrap_Object(const Writer&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
