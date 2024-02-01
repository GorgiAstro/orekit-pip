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
        mid_init$_fdff785437afea93,
        mid_init$_26cc506a7e4e00cb,
        mid_close_ff7cb6c242604316,
        mid_lines_11e4ca8182c1933d,
        mid_mark_8fd427ab23829bf5,
        mid_markSupported_eee3de00fe971136,
        mid_read_d6ab429752e7c267,
        mid_read_1f255a7d724a5165,
        mid_readLine_d2c8eb4129821f0e,
        mid_ready_eee3de00fe971136,
        mid_reset_ff7cb6c242604316,
        mid_skip_1eaf6eb0a3f3163f,
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
