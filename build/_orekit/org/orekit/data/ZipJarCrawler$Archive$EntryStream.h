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
          mid_available_570ce0828f81a2c1,
          mid_close_0fa09c18fee449d5,
          mid_getName_11b109bd155ca898,
          mid_isDirectory_b108b35ef48e27bd,
          mid_mark_99803b0791f320ff,
          mid_markSupported_b108b35ef48e27bd,
          mid_read_570ce0828f81a2c1,
          mid_read_5702323b606d072b,
          mid_read_619434785725cc72,
          mid_reset_0fa09c18fee449d5,
          mid_skip_02b241598e254a3f,
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
