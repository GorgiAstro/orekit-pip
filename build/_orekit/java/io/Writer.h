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
        mid_append_b9bb9c1cf9ac79f5,
        mid_append_28ef4a32b3361ee5,
        mid_append_e12a3710561f822f,
        mid_close_ff7cb6c242604316,
        mid_flush_ff7cb6c242604316,
        mid_nullWriter_0fa081fa24ab266a,
        mid_write_e22e96b35f4145e4,
        mid_write_105e1eadb709d9ac,
        mid_write_8fd427ab23829bf5,
        mid_write_6f10578448832e2a,
        mid_write_c9a77c84756b106b,
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
