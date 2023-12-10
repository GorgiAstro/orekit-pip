#ifndef java_io_InputStream_H
#define java_io_InputStream_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
    class OutputStream;
    class Closeable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class InputStream : public ::java::lang::Object {
     public:
      enum {
        mid_init$_0fa09c18fee449d5,
        mid_available_570ce0828f81a2c1,
        mid_close_0fa09c18fee449d5,
        mid_mark_99803b0791f320ff,
        mid_markSupported_b108b35ef48e27bd,
        mid_nullInputStream_51fdc45647b8e866,
        mid_read_570ce0828f81a2c1,
        mid_read_5702323b606d072b,
        mid_read_619434785725cc72,
        mid_readAllBytes_d1c0cd497c1897cd,
        mid_readNBytes_7f79e47f12cfba98,
        mid_readNBytes_619434785725cc72,
        mid_reset_0fa09c18fee449d5,
        mid_skip_02b241598e254a3f,
        mid_transferTo_f60a6bdc9571a688,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit InputStream(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      InputStream(const InputStream& obj) : ::java::lang::Object(obj) {}

      InputStream();

      jint available() const;
      void close() const;
      void mark(jint) const;
      jboolean markSupported() const;
      static InputStream nullInputStream();
      jint read() const;
      jint read(const JArray< jbyte > &) const;
      jint read(const JArray< jbyte > &, jint, jint) const;
      JArray< jbyte > readAllBytes() const;
      JArray< jbyte > readNBytes(jint) const;
      jint readNBytes(const JArray< jbyte > &, jint, jint) const;
      void reset() const;
      jlong skip(jlong) const;
      jlong transferTo(const ::java::io::OutputStream &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(InputStream);
    extern PyTypeObject *PY_TYPE(InputStream);

    class t_InputStream {
    public:
      PyObject_HEAD
      InputStream object;
      static PyObject *wrap_Object(const InputStream&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
