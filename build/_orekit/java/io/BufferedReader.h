#ifndef java_io_BufferedReader_H
#define java_io_BufferedReader_H

#include "java/io/Reader.h"

namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class BufferedReader : public ::java::io::Reader {
     public:
      enum {
        mid_init$_6bec8244898df009,
        mid_init$_d4490f7274978073,
        mid_close_0fa09c18fee449d5,
        mid_lines_20f6d2b462aaef4b,
        mid_mark_99803b0791f320ff,
        mid_markSupported_b108b35ef48e27bd,
        mid_read_570ce0828f81a2c1,
        mid_read_e1525dbb996fb0b1,
        mid_readLine_11b109bd155ca898,
        mid_ready_b108b35ef48e27bd,
        mid_reset_0fa09c18fee449d5,
        mid_skip_02b241598e254a3f,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit BufferedReader(jobject obj) : ::java::io::Reader(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      BufferedReader(const BufferedReader& obj) : ::java::io::Reader(obj) {}

      BufferedReader(const ::java::io::Reader &);
      BufferedReader(const ::java::io::Reader &, jint);

      void close() const;
      ::java::util::stream::Stream lines() const;
      void mark(jint) const;
      jboolean markSupported() const;
      jint read() const;
      jint read(const JArray< jchar > &, jint, jint) const;
      ::java::lang::String readLine() const;
      jboolean ready() const;
      void reset() const;
      jlong skip(jlong) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(BufferedReader);
    extern PyTypeObject *PY_TYPE(BufferedReader);

    class t_BufferedReader {
    public:
      PyObject_HEAD
      BufferedReader object;
      static PyObject *wrap_Object(const BufferedReader&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
