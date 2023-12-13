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
        mid_init$_7e1d51614d5d6a43,
        mid_init$_9601da1efb310931,
        mid_init$_734b91ac30d5f9b4,
        mid_init$_6e63b60ae073cb68,
        mid_init$_a627ad9c5959309d,
        mid_init$_41d3e7c3eb1b0829,
        mid_init$_595843ddec8a90ca,
        mid_append_b1b6ed812f278d3f,
        mid_append_a93aca03ab265567,
        mid_append_4930f6548c58c9a7,
        mid_checkError_9ab94ac1dc23b105,
        mid_close_a1fa5dae97ea5ed2,
        mid_flush_a1fa5dae97ea5ed2,
        mid_format_bf26a86a1af4f777,
        mid_format_d32d82855f8adc41,
        mid_print_dd3f254991df5d48,
        mid_print_734b91ac30d5f9b4,
        mid_print_fcb96c98de6fad04,
        mid_print_df95ad02f5b4acd9,
        mid_print_8ba9fe7a847cecad,
        mid_print_bb7181dc3b1dc22b,
        mid_print_44ed599e93e8a30c,
        mid_print_55f3c894852c27a3,
        mid_print_3d7dd2314a0dd456,
        mid_printf_bf26a86a1af4f777,
        mid_printf_d32d82855f8adc41,
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
        mid_write_44ed599e93e8a30c,
        mid_write_a9fddc59b07ce512,
        mid_setError_a1fa5dae97ea5ed2,
        mid_clearError_a1fa5dae97ea5ed2,
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
