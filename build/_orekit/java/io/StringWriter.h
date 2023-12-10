#ifndef java_io_StringWriter_H
#define java_io_StringWriter_H

#include "java/io/Writer.h"

namespace java {
  namespace io {
    class StringWriter;
    class IOException;
  }
  namespace lang {
    class CharSequence;
    class StringBuffer;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class StringWriter : public ::java::io::Writer {
     public:
      enum {
        mid_init$_0fa09c18fee449d5,
        mid_init$_99803b0791f320ff,
        mid_append_c9dee83fc65ff581,
        mid_append_309c2d2b5283fcb8,
        mid_append_b5b42dd578ef8c49,
        mid_close_0fa09c18fee449d5,
        mid_flush_0fa09c18fee449d5,
        mid_getBuffer_8ebc622be17217f1,
        mid_toString_11b109bd155ca898,
        mid_write_d0bc48d5b00dc40c,
        mid_write_99803b0791f320ff,
        mid_write_44aecef33af91018,
        mid_write_04eb5531e9227c93,
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
