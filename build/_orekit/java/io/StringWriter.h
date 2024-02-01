#ifndef java_io_StringWriter_H
#define java_io_StringWriter_H

#include "java/io/Writer.h"

namespace java {
  namespace lang {
    class StringBuffer;
    class CharSequence;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
    class StringWriter;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class StringWriter : public ::java::io::Writer {
     public:
      enum {
        mid_init$_ff7cb6c242604316,
        mid_init$_8fd427ab23829bf5,
        mid_append_ced84d40a330cb87,
        mid_append_711d0d8909e52768,
        mid_append_fc72a286a05709d6,
        mid_close_ff7cb6c242604316,
        mid_flush_ff7cb6c242604316,
        mid_getBuffer_eb1ec7cf84c46af7,
        mid_toString_d2c8eb4129821f0e,
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

      explicit StringWriter(jobject obj) : ::java::io::Writer(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      StringWriter(const StringWriter& obj) : ::java::io::Writer(obj) {}

      StringWriter();
      StringWriter(jint);

      StringWriter append(jchar) const;
      StringWriter append(const ::java::lang::CharSequence &) const;
      StringWriter append(const ::java::lang::CharSequence &, jint, jint) const;
      void close() const;
      void flush() const;
      ::java::lang::StringBuffer getBuffer() const;
      ::java::lang::String toString() const;
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
    extern PyType_Def PY_TYPE_DEF(StringWriter);
    extern PyTypeObject *PY_TYPE(StringWriter);

    class t_StringWriter {
    public:
      PyObject_HEAD
      StringWriter object;
      static PyObject *wrap_Object(const StringWriter&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
