#ifndef java_io_Reader_H
#define java_io_Reader_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Readable;
    class Class;
  }
  namespace io {
    class Reader;
    class IOException;
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
        mid_close_a1fa5dae97ea5ed2,
        mid_mark_44ed599e93e8a30c,
        mid_markSupported_9ab94ac1dc23b105,
        mid_nullReader_b2bc6d3e210c2dd4,
        mid_read_55546ef6a647f39b,
        mid_read_cedc4c6898e22fb4,
        mid_read_a45a4db28976f262,
        mid_ready_9ab94ac1dc23b105,
        mid_reset_a1fa5dae97ea5ed2,
        mid_skip_9db63109f74a74fc,
        mid_transferTo_1da1e24641b39913,
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
