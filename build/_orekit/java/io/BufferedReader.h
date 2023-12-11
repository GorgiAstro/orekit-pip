#ifndef java_io_BufferedReader_H
#define java_io_BufferedReader_H

#include "java/io/Reader.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    namespace stream {
      class Stream;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class BufferedReader : public ::java::io::Reader {
     public:
      enum {
        mid_init$_d679cb724d14a1e8,
        mid_init$_bef797222a3f4702,
        mid_close_0640e6acf969ed28,
        mid_lines_d7cce92225eb0db2,
        mid_mark_a3da1a935cb37f7b,
        mid_markSupported_89b302893bdbe1f1,
        mid_read_412668abc8d889e9,
        mid_read_f0b052b9721148b0,
        mid_readLine_3cffd47377eca18a,
        mid_ready_89b302893bdbe1f1,
        mid_reset_0640e6acf969ed28,
        mid_skip_f4ad805a81234b49,
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
