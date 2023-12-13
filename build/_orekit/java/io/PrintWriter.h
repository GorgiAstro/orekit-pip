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
    class PrintWriter;
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
        mid_init$_7e1d51614d5d6a43,
        mid_init$_9601da1efb310931,
        mid_init$_bfd715bc0a817931,
        mid_init$_734b91ac30d5f9b4,
        mid_init$_6e63b60ae073cb68,
        mid_init$_a627ad9c5959309d,
        mid_init$_41d3e7c3eb1b0829,
        mid_init$_ff2dc942d12762c0,
        mid_append_0b46a52ebe27c7b2,
        mid_append_f1d6dad2f74f8d10,
        mid_append_ddc6d90b9be8e5d3,
        mid_checkError_9ab94ac1dc23b105,
        mid_close_a1fa5dae97ea5ed2,
        mid_flush_a1fa5dae97ea5ed2,
        mid_format_6256abe5f68071a9,
        mid_format_10e678c88f06f955,
        mid_print_dd3f254991df5d48,
        mid_print_734b91ac30d5f9b4,
        mid_print_fcb96c98de6fad04,
        mid_print_df95ad02f5b4acd9,
        mid_print_8ba9fe7a847cecad,
        mid_print_bb7181dc3b1dc22b,
        mid_print_44ed599e93e8a30c,
        mid_print_55f3c894852c27a3,
        mid_print_3d7dd2314a0dd456,
        mid_printf_6256abe5f68071a9,
        mid_printf_10e678c88f06f955,
        mid_println_a1fa5dae97ea5ed2,
        mid_println_dd3f254991df5d48,
        mid_println_734b91ac30d5f9b4,
        mid_println_fcb96c98de6fad04,
        mid_println_df95ad02f5b4acd9,
        mid_println_8ba9fe7a847cecad,
        mid_println_bb7181dc3b1dc22b,
        mid_println_44ed599e93e8a30c,
        mid_println_55f3c894852c27a3,
        mid_println_3d7dd2314a0dd456,
        mid_write_dd3f254991df5d48,
        mid_write_734b91ac30d5f9b4,
        mid_write_44ed599e93e8a30c,
        mid_write_d23ba6c655e17478,
        mid_write_eb74d6dc93e0751e,
        mid_setError_a1fa5dae97ea5ed2,
        mid_clearError_a1fa5dae97ea5ed2,
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
