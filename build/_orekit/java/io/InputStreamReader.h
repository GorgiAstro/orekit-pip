#ifndef java_io_InputStreamReader_H
#define java_io_InputStreamReader_H

#include "java/io/Reader.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
    class UnsupportedEncodingException;
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
        mid_init$_8f4bef0679d2f8d5,
        mid_init$_bec0f846e5ec73da,
        mid_close_ff7cb6c242604316,
        mid_getEncoding_d2c8eb4129821f0e,
        mid_read_d6ab429752e7c267,
        mid_read_1f255a7d724a5165,
        mid_ready_eee3de00fe971136,
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
