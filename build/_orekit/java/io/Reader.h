#ifndef java_io_Reader_H
#define java_io_Reader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Reader;
    class Closeable;
    class Writer;
  }
  namespace lang {
    class Readable;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class Reader : public ::java::lang::Object {
     public:
      enum {
        mid_close_0640e6acf969ed28,
        mid_mark_a3da1a935cb37f7b,
        mid_markSupported_89b302893bdbe1f1,
        mid_nullReader_db817b1afec8e8b3,
        mid_read_412668abc8d889e9,
        mid_read_25cfe021b074188a,
        mid_read_f0b052b9721148b0,
        mid_ready_89b302893bdbe1f1,
        mid_reset_0640e6acf969ed28,
        mid_skip_f4ad805a81234b49,
        mid_transferTo_d97a4dacf4792294,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Reader(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Reader(const Reader& obj) : ::java::lang::Object(obj) {}

      void close() const;
      void mark(jint) const;
      jboolean markSupported() const;
      static Reader nullReader();
      jint read() const;
      jint read(const JArray< jchar > &) const;
      jint read(const JArray< jchar > &, jint, jint) const;
      jboolean ready() const;
      void reset() const;
      jlong skip(jlong) const;
      jlong transferTo(const ::java::io::Writer &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(Reader);
    extern PyTypeObject *PY_TYPE(Reader);

    class t_Reader {
    public:
      PyObject_HEAD
      Reader object;
      static PyObject *wrap_Object(const Reader&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
