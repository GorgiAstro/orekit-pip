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
        mid_init$_f5ffdf29129ef90a,
        mid_close_0640e6acf969ed28,
        mid_mark_a3da1a935cb37f7b,
        mid_markSupported_89b302893bdbe1f1,
        mid_read_412668abc8d889e9,
        mid_read_f0b052b9721148b0,
        mid_ready_89b302893bdbe1f1,
        mid_reset_0640e6acf969ed28,
        mid_skip_f4ad805a81234b49,
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
