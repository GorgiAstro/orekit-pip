#ifndef java_io_InputStreamReader_H
#define java_io_InputStreamReader_H

#include "java/io/Reader.h"

namespace java {
  namespace io {
    class InputStream;
    class UnsupportedEncodingException;
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

    class InputStreamReader : public ::java::io::Reader {
     public:
      enum {
        mid_init$_471a178453aa39ad,
        mid_init$_360461e719fb564c,
        mid_close_a1fa5dae97ea5ed2,
        mid_getEncoding_1c1fa1e935d6cdcf,
        mid_read_55546ef6a647f39b,
        mid_read_a45a4db28976f262,
        mid_ready_9ab94ac1dc23b105,
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
