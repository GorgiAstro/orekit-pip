#ifndef java_io_PrintStream_H
#define java_io_PrintStream_H

#include "java/io/FilterOutputStream.h"

namespace java {
  namespace io {
    class UnsupportedEncodingException;
    class FileNotFoundException;
    class OutputStream;
    class File;
    class PrintStream;
  }
  namespace util {
    class Locale;
  }
  namespace lang {
    class CharSequence;
    class Appendable;
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class PrintStream : public ::java::io::FilterOutputStream {
     public:
      enum {
        mid_init$_0613af62f2ba5dba,
        mid_init$_fd7cb6689cfa6eeb,
        mid_init$_d0bc48d5b00dc40c,
        mid_init$_94ced6352b9e37c8,
        mid_init$_6a2001eff0605f71,
        mid_init$_91fa247883002c58,
        mid_init$_e2328c2458390b01,
        mid_append_f651c37cfe755030,
        mid_append_facd8e19ee14efd5,
        mid_append_b87828872129844f,
        mid_checkError_b108b35ef48e27bd,
        mid_close_0fa09c18fee449d5,
        mid_flush_0fa09c18fee449d5,
        mid_format_02b89e48e7e4c6fd,
        mid_format_b18b969c71bc0850,
        mid_print_3534e8e092c162a5,
        mid_print_d0bc48d5b00dc40c,
        mid_print_bd04c9335fb9e4cf,
        mid_print_636c0bbb96cab723,
        mid_print_17db3a65980d3441,
        mid_print_f63147a1690942cc,
        mid_print_99803b0791f320ff,
        mid_print_2990946c992aafed,
        mid_print_3a8e7649f31fdb20,
        mid_printf_02b89e48e7e4c6fd,
        mid_printf_b18b969c71bc0850,
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
        mid_write_99803b0791f320ff,
        mid_write_d7af9aedcdd3845b,
        mid_setError_0fa09c18fee449d5,
        mid_clearError_0fa09c18fee449d5,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit PrintStream(jobject obj) : ::java::io::FilterOutputStream(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      PrintStream(const PrintStream& obj) : ::java::io::FilterOutputStream(obj) {}

      PrintStream(const ::java::io::File &);
      PrintStream(const ::java::io::OutputStream &);
      PrintStream(const ::java::lang::String &);
      PrintStream(const ::java::io::File &, const ::java::lang::String &);
      PrintStream(const ::java::lang::String &, const ::java::lang::String &);
      PrintStream(const ::java::io::OutputStream &, jboolean);
      PrintStream(const ::java::io::OutputStream &, jboolean, const ::java::lang::String &);

      PrintStream append(jchar) const;
      PrintStream append(const ::java::lang::CharSequence &) const;
      PrintStream append(const ::java::lang::CharSequence &, jint, jint) const;
      jboolean checkError() const;
      void close() const;
      void flush() const;
      PrintStream format(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      PrintStream format(const ::java::util::Locale &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      void print(const JArray< jchar > &) const;
      void print(const ::java::lang::String &) const;
      void print(jboolean) const;
      void print(jchar) const;
      void print(jdouble) const;
      void print(jfloat) const;
      void print(jint) const;
      void print(const ::java::lang::Object &) const;
      void print(jlong) const;
      PrintStream printf(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      PrintStream printf(const ::java::util::Locale &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
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
      void write(jint) const;
      void write(const JArray< jbyte > &, jint, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(PrintStream);
    extern PyTypeObject *PY_TYPE(PrintStream);

    class t_PrintStream {
    public:
      PyObject_HEAD
      PrintStream object;
      static PyObject *wrap_Object(const PrintStream&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
