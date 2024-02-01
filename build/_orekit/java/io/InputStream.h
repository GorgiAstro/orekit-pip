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
        mid_init$_ff7cb6c242604316,
        mid_available_d6ab429752e7c267,
        mid_close_ff7cb6c242604316,
        mid_mark_8fd427ab23829bf5,
        mid_markSupported_eee3de00fe971136,
        mid_nullInputStream_af9d97da329e95d9,
        mid_read_d6ab429752e7c267,
        mid_read_89e14f411787412a,
        mid_read_1351cbafe5a435a7,
        mid_readAllBytes_7b0acd212e47f280,
        mid_readNBytes_14e0df864d3b6f60,
        mid_readNBytes_1351cbafe5a435a7,
        mid_reset_ff7cb6c242604316,
        mid_skip_1eaf6eb0a3f3163f,
        mid_transferTo_529fd65c3d4bffcb,
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
