#ifndef java_io_InputStreamReader_H
#define java_io_InputStreamReader_H

#include "java/io/Reader.h"

namespace java {
  namespace io {
    class UnsupportedEncodingException;
    class IOException;
    class InputStream;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class InputStreamReader : public ::java::io::Reader {
     public:
      enum {
        mid_init$_42871fcf824ad25f,
        mid_init$_1815f85c118161ad,
        mid_close_0fa09c18fee449d5,
        mid_getEncoding_11b109bd155ca898,
        mid_read_570ce0828f81a2c1,
        mid_read_e1525dbb996fb0b1,
        mid_ready_b108b35ef48e27bd,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit InputStreamReader(jobject obj) : ::java::io::Reader(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      InputStreamReader(const InputStreamReader& obj) : ::java::io::Reader(obj) {}

      InputStreamReader(const ::java::io::InputStream &);
      InputStreamReader(const ::java::io::InputStream &, const ::java::lang::String &);

      void close() const;
      ::java::lang::String getEncoding() const;
      jint read() const;
      jint read(const JArray< jchar > &, jint, jint) const;
      jboolean ready() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(InputStreamReader);
    extern PyTypeObject *PY_TYPE(InputStreamReader);

    class t_InputStreamReader {
    public:
      PyObject_HEAD
      InputStreamReader object;
      static PyObject *wrap_Object(const InputStreamReader&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
