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
    class UnsupportedEncodingException;
    class File;
    class PrintStream;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class PrintStream : public ::java::io::FilterOutputStream {
     public:
      enum {
        mid_init$_44d81342f3d8a712,
        mid_init$_da52d6defb468793,
        mid_init$_105e1eadb709d9ac,
        mid_init$_e73c97ae824bba63,
        mid_init$_771aee6c143cc92a,
        mid_init$_0d7a9075a057453b,
        mid_init$_a34c1807509034a7,
        mid_append_544e826c1ff0bf31,
        mid_append_8000ca83dcdf4e5f,
        mid_append_e8426d9ad26245a5,
        mid_checkError_eee3de00fe971136,
        mid_close_ff7cb6c242604316,
        mid_flush_ff7cb6c242604316,
        mid_format_dc6a2fa85fdfc412,
        mid_format_67e6c2092d224f02,
        mid_print_e22e96b35f4145e4,
        mid_print_105e1eadb709d9ac,
        mid_print_b35db77cae58639e,
        mid_print_e8d07df586815a42,
        mid_print_1ad26e8c8c0cd65b,
        mid_print_11c95dcd1c301708,
        mid_print_8fd427ab23829bf5,
        mid_print_83ee235bb1e64e94,
        mid_print_f5bbab7e97879358,
        mid_printf_dc6a2fa85fdfc412,
        mid_printf_67e6c2092d224f02,
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
        mid_write_8fd427ab23829bf5,
        mid_write_e4288ba5fbf20d28,
        mid_setError_ff7cb6c242604316,
        mid_clearError_ff7cb6c242604316,
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
