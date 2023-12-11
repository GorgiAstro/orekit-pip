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
        mid_init$_0640e6acf969ed28,
        mid_available_412668abc8d889e9,
        mid_close_0640e6acf969ed28,
        mid_mark_a3da1a935cb37f7b,
        mid_markSupported_89b302893bdbe1f1,
        mid_nullInputStream_ce4348991af8a1a1,
        mid_read_412668abc8d889e9,
        mid_read_67c88f2bf4e7f8b2,
        mid_read_68a76742c8623fb3,
        mid_readAllBytes_db390e6336d82be3,
        mid_readNBytes_370924a79b5496dd,
        mid_readNBytes_68a76742c8623fb3,
        mid_reset_0640e6acf969ed28,
        mid_skip_f4ad805a81234b49,
        mid_transferTo_780ebc62202e0349,
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
