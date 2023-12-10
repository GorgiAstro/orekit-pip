#ifndef java_io_Reader_H
#define java_io_Reader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Closeable;
    class Writer;
    class Reader;
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
        mid_close_0fa09c18fee449d5,
        mid_mark_99803b0791f320ff,
        mid_markSupported_b108b35ef48e27bd,
        mid_nullReader_26c6a3f16521a493,
        mid_read_570ce0828f81a2c1,
        mid_read_881698425abcbe49,
        mid_read_e1525dbb996fb0b1,
        mid_ready_b108b35ef48e27bd,
        mid_reset_0fa09c18fee449d5,
        mid_skip_02b241598e254a3f,
        mid_transferTo_a3aea31848e09c40,
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
