#ifndef java_io_Reader_H
#define java_io_Reader_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Readable;
    class Class;
  }
  namespace io {
    class IOException;
    class Reader;
    class Closeable;
    class Writer;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class Reader : public ::java::lang::Object {
     public:
      enum {
        mid_close_ff7cb6c242604316,
        mid_mark_8fd427ab23829bf5,
        mid_markSupported_eee3de00fe971136,
        mid_nullReader_0a92f974b39121e6,
        mid_read_d6ab429752e7c267,
        mid_read_8ff26d6b29141036,
        mid_read_1f255a7d724a5165,
        mid_ready_eee3de00fe971136,
        mid_reset_ff7cb6c242604316,
        mid_skip_1eaf6eb0a3f3163f,
        mid_transferTo_6550890cb150ad82,
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
