#ifndef java_io_InputStream_H
#define java_io_InputStream_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
    class OutputStream;
    class IOException;
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
        mid_init$_a1fa5dae97ea5ed2,
        mid_available_55546ef6a647f39b,
        mid_close_a1fa5dae97ea5ed2,
        mid_mark_44ed599e93e8a30c,
        mid_markSupported_9ab94ac1dc23b105,
        mid_nullInputStream_6c37d64ac8173086,
        mid_read_55546ef6a647f39b,
        mid_read_53324f422c2c7f64,
        mid_read_296dd75c373e2c1d,
        mid_readAllBytes_b7afa59f65f6aa9b,
        mid_readNBytes_0e3a76bff4aae34c,
        mid_readNBytes_296dd75c373e2c1d,
        mid_reset_a1fa5dae97ea5ed2,
        mid_skip_9db63109f74a74fc,
        mid_transferTo_840671b76994c8a8,
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
