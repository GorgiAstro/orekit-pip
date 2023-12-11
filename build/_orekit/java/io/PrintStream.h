#ifndef java_io_PrintStream_H
#define java_io_PrintStream_H

#include "java/io/FilterOutputStream.h"

namespace java {
  namespace io {
    class UnsupportedEncodingException;
    class OutputStream;
    class FileNotFoundException;
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
        mid_init$_5d6bcca91ae998ee,
        mid_init$_a093374b16e6c27d,
        mid_init$_f5ffdf29129ef90a,
        mid_init$_7a5b31fafc364859,
        mid_init$_630071dd94c59169,
        mid_init$_c53621196bb83b72,
        mid_init$_c2b3ab497d54aa82,
        mid_append_0c0ceeafac08086d,
        mid_append_7c9d6bd819de0015,
        mid_append_08e20acc9aee2acd,
        mid_checkError_89b302893bdbe1f1,
        mid_close_0640e6acf969ed28,
        mid_flush_0640e6acf969ed28,
        mid_format_1df10a6ed0835cfe,
        mid_format_cbd641757d6f146e,
        mid_print_916bf6d42d285c69,
        mid_print_f5ffdf29129ef90a,
        mid_print_ed2afdb8506b9742,
        mid_print_102587d250c3217b,
        mid_print_10f281d777284cea,
        mid_print_3ac7cc3def9efaa9,
        mid_print_a3da1a935cb37f7b,
        mid_print_009757f2c0fd9090,
        mid_print_3cd6a6b354c6aa22,
        mid_printf_1df10a6ed0835cfe,
        mid_printf_cbd641757d6f146e,
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
        mid_write_a3da1a935cb37f7b,
        mid_write_ac782c7077255dd3,
        mid_setError_0640e6acf969ed28,
        mid_clearError_0640e6acf969ed28,
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
