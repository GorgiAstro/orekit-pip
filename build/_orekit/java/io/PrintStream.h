#ifndef java_io_PrintStream_H
#define java_io_PrintStream_H

#include "java/io/FilterOutputStream.h"

namespace java {
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
  namespace io {
    class OutputStream;
    class FileNotFoundException;
    class File;
    class UnsupportedEncodingException;
    class PrintStream;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class PrintStream : public ::java::io::FilterOutputStream {
     public:
      enum {
        mid_init$_46e66c77c82c9a6b,
        mid_init$_255f64cf1272816f,
        mid_init$_e939c6558ae8d313,
        mid_init$_94be9c6310e15013,
        mid_init$_96073c87872b7a97,
        mid_init$_50d10d496ad84231,
        mid_init$_f4c1b5b660f432c1,
        mid_append_b4a29e5b1832be06,
        mid_append_a625692949f008d0,
        mid_append_cfd922c78b5c4ae5,
        mid_checkError_e470b6d9e0d979db,
        mid_close_7ae3461a92a43152,
        mid_flush_7ae3461a92a43152,
        mid_format_7ebe1682194bec75,
        mid_format_f3cc9b4235667f5d,
        mid_print_819ed274952f967e,
        mid_print_e939c6558ae8d313,
        mid_print_50a2e0b139e80a58,
        mid_print_be0046d7f7239695,
        mid_print_77e0f9a1f260e2e5,
        mid_print_ca234f4580d28ea3,
        mid_print_0a2a1ac2721c0336,
        mid_print_7ca0d9438822cb0b,
        mid_print_fefb08975c10f0a1,
        mid_printf_7ebe1682194bec75,
        mid_printf_f3cc9b4235667f5d,
        mid_println_7ae3461a92a43152,
        mid_println_819ed274952f967e,
        mid_println_e939c6558ae8d313,
        mid_println_50a2e0b139e80a58,
        mid_println_be0046d7f7239695,
        mid_println_77e0f9a1f260e2e5,
        mid_println_ca234f4580d28ea3,
        mid_println_0a2a1ac2721c0336,
        mid_println_7ca0d9438822cb0b,
        mid_println_fefb08975c10f0a1,
        mid_write_0a2a1ac2721c0336,
        mid_write_125b1e9f043b29f8,
        mid_setError_7ae3461a92a43152,
        mid_clearError_7ae3461a92a43152,
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
