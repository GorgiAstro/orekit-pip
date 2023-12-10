#ifndef org_orekit_data_ZipJarCrawler$Archive$EntryStream_H
#define org_orekit_data_ZipJarCrawler$Archive$EntryStream_H

#include "java/io/InputStream.h"

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

namespace org {
  namespace orekit {
    namespace data {

      class ZipJarCrawler$Archive$EntryStream : public ::java::io::InputStream {
       public:
        enum {
          mid_available_f2f64475e4580546,
          mid_close_7ae3461a92a43152,
          mid_getName_0090f7797e403f43,
          mid_isDirectory_e470b6d9e0d979db,
          mid_mark_0a2a1ac2721c0336,
          mid_markSupported_e470b6d9e0d979db,
          mid_read_f2f64475e4580546,
          mid_read_11d417f25cf33664,
          mid_read_4e993e185759f10d,
          mid_reset_7ae3461a92a43152,
          mid_skip_955f7541fca701ab,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ZipJarCrawler$Archive$EntryStream(jobject obj) : ::java::io::InputStream(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ZipJarCrawler$Archive$EntryStream(const ZipJarCrawler$Archive$EntryStream& obj) : ::java::io::InputStream(obj) {}

        jint available() const;
        void close() const;
        ::java::lang::String getName() const;
        jboolean isDirectory() const;
        void mark(jint) const;
        jboolean markSupported() const;
        jint read() const;
        jint read(const JArray< jbyte > &) const;
        jint read(const JArray< jbyte > &, jint, jint) const;
        void reset() const;
        jlong skip(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(ZipJarCrawler$Archive$EntryStream);
      extern PyTypeObject *PY_TYPE(ZipJarCrawler$Archive$EntryStream);

      class t_ZipJarCrawler$Archive$EntryStream {
      public:
        PyObject_HEAD
        ZipJarCrawler$Archive$EntryStream object;
        static PyObject *wrap_Object(const ZipJarCrawler$Archive$EntryStream&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
