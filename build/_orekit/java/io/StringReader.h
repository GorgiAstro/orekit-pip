#ifndef java_io_StringReader_H
#define java_io_StringReader_H

#include "java/io/Reader.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class StringReader : public ::java::io::Reader {
     public:
      enum {
        mid_init$_d0bc48d5b00dc40c,
        mid_close_0fa09c18fee449d5,
        mid_mark_99803b0791f320ff,
        mid_markSupported_b108b35ef48e27bd,
        mid_read_570ce0828f81a2c1,
        mid_read_e1525dbb996fb0b1,
        mid_ready_b108b35ef48e27bd,
        mid_reset_0fa09c18fee449d5,
        mid_skip_02b241598e254a3f,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit StringReader(jobject obj) : ::java::io::Reader(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      StringReader(const StringReader& obj) : ::java::io::Reader(obj) {}

      StringReader(const ::java::lang::String &);

      void close() const;
      void mark(jint) const;
      jboolean markSupported() const;
      jint read() const;
      jint read(const JArray< jchar > &, jint, jint) const;
      jboolean ready() const;
      void reset() const;
      jlong skip(jlong) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(StringReader);
    extern PyTypeObject *PY_TYPE(StringReader);

    class t_StringReader {
    public:
      PyObject_HEAD
      StringReader object;
      static PyObject *wrap_Object(const StringReader&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
