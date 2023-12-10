#ifndef java_io_PrintWriter_H
#define java_io_PrintWriter_H

#include "java/io/Writer.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class CharSequence;
    class Class;
    class Object;
    class String;
  }
  namespace io {
    class OutputStream;
    class PrintWriter;
    class FileNotFoundException;
    class File;
    class UnsupportedEncodingException;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class PrintWriter : public ::java::io::Writer {
     public:
      enum {
        mid_init$_46e66c77c82c9a6b,
        mid_init$_255f64cf1272816f,
        mid_init$_645294b7123ff437,
        mid_init$_e939c6558ae8d313,
        mid_init$_94be9c6310e15013,
        mid_init$_96073c87872b7a97,
        mid_init$_50d10d496ad84231,
        mid_init$_411e711b28768b62,
        mid_append_004a5bd76bea8481,
        mid_append_38d9518804582ecd,
        mid_append_a56e4dafa3445fa2,
        mid_checkError_e470b6d9e0d979db,
        mid_close_7ae3461a92a43152,
        mid_flush_7ae3461a92a43152,
        mid_format_b6f08f464ed76c3b,
        mid_format_3f2e19a6dabe53ae,
        mid_print_819ed274952f967e,
        mid_print_e939c6558ae8d313,
        mid_print_50a2e0b139e80a58,
        mid_print_be0046d7f7239695,
        mid_print_77e0f9a1f260e2e5,
        mid_print_ca234f4580d28ea3,
        mid_print_0a2a1ac2721c0336,
        mid_print_7ca0d9438822cb0b,
        mid_print_fefb08975c10f0a1,
        mid_printf_b6f08f464ed76c3b,
        mid_printf_3f2e19a6dabe53ae,
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
        mid_write_819ed274952f967e,
        mid_write_e939c6558ae8d313,
        mid_write_0a2a1ac2721c0336,
        mid_write_2df38be22737223f,
        mid_write_10ca79ad48bfee14,
        mid_setError_7ae3461a92a43152,
        mid_clearError_7ae3461a92a43152,
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
