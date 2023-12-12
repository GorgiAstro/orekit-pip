#ifndef java_io_PrintWriter_H
#define java_io_PrintWriter_H

#include "java/io/Writer.h"

namespace java {
  namespace io {
    class UnsupportedEncodingException;
    class OutputStream;
    class FileNotFoundException;
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
        mid_init$_5d6bcca91ae998ee,
        mid_init$_a093374b16e6c27d,
        mid_init$_dc57885568ee69d8,
        mid_init$_f5ffdf29129ef90a,
        mid_init$_7a5b31fafc364859,
        mid_init$_630071dd94c59169,
        mid_init$_c53621196bb83b72,
        mid_init$_00a7008a3d227a48,
        mid_append_3d7b7f34c7e866b9,
        mid_append_63b63110d827e004,
        mid_append_fb6ff00a35d01723,
        mid_checkError_89b302893bdbe1f1,
        mid_close_0640e6acf969ed28,
        mid_flush_0640e6acf969ed28,
        mid_format_79f8580f1f3d79bd,
        mid_format_969e36524826a60c,
        mid_print_916bf6d42d285c69,
        mid_print_f5ffdf29129ef90a,
        mid_print_ed2afdb8506b9742,
        mid_print_102587d250c3217b,
        mid_print_10f281d777284cea,
        mid_print_3ac7cc3def9efaa9,
        mid_print_a3da1a935cb37f7b,
        mid_print_009757f2c0fd9090,
        mid_print_3cd6a6b354c6aa22,
        mid_printf_79f8580f1f3d79bd,
        mid_printf_969e36524826a60c,
        mid_println_0640e6acf969ed28,
        mid_println_916bf6d42d285c69,
        mid_println_f5ffdf29129ef90a,
        mid_println_ed2afdb8506b9742,
        mid_println_102587d250c3217b,
        mid_println_10f281d777284cea,
        mid_println_3ac7cc3def9efaa9,
        mid_println_a3da1a935cb37f7b,
        mid_println_009757f2c0fd9090,
        mid_println_3cd6a6b354c6aa22,
        mid_write_916bf6d42d285c69,
        mid_write_f5ffdf29129ef90a,
        mid_write_a3da1a935cb37f7b,
        mid_write_5421d1c1f03cf945,
        mid_write_96097c5e4aacac76,
        mid_setError_0640e6acf969ed28,
        mid_clearError_0640e6acf969ed28,
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
