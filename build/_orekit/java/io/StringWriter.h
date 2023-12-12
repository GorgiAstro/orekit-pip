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
    class Class;
    class StringBuffer;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class StringWriter : public ::java::io::Writer {
     public:
      enum {
        mid_init$_0640e6acf969ed28,
        mid_init$_a3da1a935cb37f7b,
        mid_append_3fe6ca893e43779c,
        mid_append_854f9de13a7975d8,
        mid_append_928c9018f85fa8fb,
        mid_close_0640e6acf969ed28,
        mid_flush_0640e6acf969ed28,
        mid_getBuffer_94bc674fec0d7bbe,
        mid_toString_3cffd47377eca18a,
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
