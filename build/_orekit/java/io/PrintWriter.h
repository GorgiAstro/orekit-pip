#ifndef java_io_PrintWriter_H
#define java_io_PrintWriter_H

#include "java/io/Writer.h"

namespace java {
  namespace io {
    class UnsupportedEncodingException;
    class FileNotFoundException;
    class OutputStream;
    class PrintWriter;
    class File;
  }
  namespace util {
    class Locale;
  }
  namespace lang {
    class CharSequence;
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class PrintWriter : public ::java::io::Writer {
     public:
      enum {
        mid_init$_0613af62f2ba5dba,
        mid_init$_fd7cb6689cfa6eeb,
        mid_init$_46e98d3f266d9b2f,
        mid_init$_d0bc48d5b00dc40c,
        mid_init$_94ced6352b9e37c8,
        mid_init$_6a2001eff0605f71,
        mid_init$_91fa247883002c58,
        mid_init$_a295dc3cee02283d,
        mid_append_4a7919589bf96cf5,
        mid_append_25da441494026c24,
        mid_append_8e17b09960d065a0,
        mid_checkError_b108b35ef48e27bd,
        mid_close_0fa09c18fee449d5,
        mid_flush_0fa09c18fee449d5,
        mid_format_46403640cc63e5d7,
        mid_format_94bed11dedfa9845,
        mid_print_3534e8e092c162a5,
        mid_print_d0bc48d5b00dc40c,
        mid_print_bd04c9335fb9e4cf,
        mid_print_636c0bbb96cab723,
        mid_print_17db3a65980d3441,
        mid_print_f63147a1690942cc,
        mid_print_99803b0791f320ff,
        mid_print_2990946c992aafed,
        mid_print_3a8e7649f31fdb20,
        mid_printf_46403640cc63e5d7,
        mid_printf_94bed11dedfa9845,
        mid_println_0fa09c18fee449d5,
        mid_println_3534e8e092c162a5,
        mid_println_d0bc48d5b00dc40c,
        mid_println_bd04c9335fb9e4cf,
        mid_println_636c0bbb96cab723,
        mid_println_17db3a65980d3441,
        mid_println_f63147a1690942cc,
        mid_println_99803b0791f320ff,
        mid_println_2990946c992aafed,
        mid_println_3a8e7649f31fdb20,
        mid_write_3534e8e092c162a5,
        mid_write_d0bc48d5b00dc40c,
        mid_write_99803b0791f320ff,
        mid_write_44aecef33af91018,
        mid_write_04eb5531e9227c93,
        mid_setError_0fa09c18fee449d5,
        mid_clearError_0fa09c18fee449d5,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit PrintWriter(jobject obj) : ::java::io::Writer(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      PrintWriter(const PrintWriter& obj) : ::java::io::Writer(obj) {}

      PrintWriter(const ::java::io::File &);
      PrintWriter(const ::java::io::OutputStream &);
      PrintWriter(const ::java::io::Writer &);
      PrintWriter(const ::java::lang::String &);
      PrintWriter(const ::java::io::File &, const ::java::lang::String &);
      PrintWriter(const ::java::lang::String &, const ::java::lang::String &);
      PrintWriter(const ::java::io::OutputStream &, jboolean);
      PrintWriter(const ::java::io::Writer &, jboolean);

      PrintWriter append(jchar) const;
      PrintWriter append(const ::java::lang::CharSequence &) const;
      PrintWriter append(const ::java::lang::CharSequence &, jint, jint) const;
      jboolean checkError() const;
      void close() const;
      void flush() const;
      PrintWriter format(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      PrintWriter format(const ::java::util::Locale &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      void print(const JArray< jchar > &) const;
      void print(const ::java::lang::String &) const;
      void print(jboolean) const;
      void print(jchar) const;
      void print(jdouble) const;
      void print(jfloat) const;
      void print(jint) const;
      void print(const ::java::lang::Object &) const;
      void print(jlong) const;
      PrintWriter printf(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      PrintWriter printf(const ::java::util::Locale &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      void println() const;
      void println(const JArray< jchar > &) const;
      void println(const ::java::lang::String &) const;
      void println(jboolean) const;
      void println(jchar) const;
      void println(jdouble) const;
      void println(jfloat) const;
      void println(jint) const;
      void println(const ::java::lang::Object &) const;
      void println(jlong) const;
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
    extern PyType_Def PY_TYPE_DEF(PrintWriter);
    extern PyTypeObject *PY_TYPE(PrintWriter);

    class t_PrintWriter {
    public:
      PyObject_HEAD
      PrintWriter object;
      static PyObject *wrap_Object(const PrintWriter&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
