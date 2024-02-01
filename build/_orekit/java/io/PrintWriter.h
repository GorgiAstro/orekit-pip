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
    class FileNotFoundException;
    class UnsupportedEncodingException;
    class PrintWriter;
    class File;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class PrintWriter : public ::java::io::Writer {
     public:
      enum {
        mid_init$_44d81342f3d8a712,
        mid_init$_da52d6defb468793,
        mid_init$_13af21b8af50a8bb,
        mid_init$_105e1eadb709d9ac,
        mid_init$_e73c97ae824bba63,
        mid_init$_771aee6c143cc92a,
        mid_init$_0d7a9075a057453b,
        mid_init$_0fa1a9b187f87b6f,
        mid_append_c90d048eaa594b5d,
        mid_append_95d4763637eca9e0,
        mid_append_b7c0e741810c3eb3,
        mid_checkError_eee3de00fe971136,
        mid_close_ff7cb6c242604316,
        mid_flush_ff7cb6c242604316,
        mid_format_313b00b400d6fbde,
        mid_format_cfdd53ddc61245c9,
        mid_print_e22e96b35f4145e4,
        mid_print_105e1eadb709d9ac,
        mid_print_b35db77cae58639e,
        mid_print_e8d07df586815a42,
        mid_print_1ad26e8c8c0cd65b,
        mid_print_11c95dcd1c301708,
        mid_print_8fd427ab23829bf5,
        mid_print_83ee235bb1e64e94,
        mid_print_f5bbab7e97879358,
        mid_printf_313b00b400d6fbde,
        mid_printf_cfdd53ddc61245c9,
        mid_println_ff7cb6c242604316,
        mid_println_e22e96b35f4145e4,
        mid_println_105e1eadb709d9ac,
        mid_println_b35db77cae58639e,
        mid_println_e8d07df586815a42,
        mid_println_1ad26e8c8c0cd65b,
        mid_println_11c95dcd1c301708,
        mid_println_8fd427ab23829bf5,
        mid_println_83ee235bb1e64e94,
        mid_println_f5bbab7e97879358,
        mid_write_e22e96b35f4145e4,
        mid_write_105e1eadb709d9ac,
        mid_write_8fd427ab23829bf5,
        mid_write_6f10578448832e2a,
        mid_write_c9a77c84756b106b,
        mid_setError_ff7cb6c242604316,
        mid_clearError_ff7cb6c242604316,
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
