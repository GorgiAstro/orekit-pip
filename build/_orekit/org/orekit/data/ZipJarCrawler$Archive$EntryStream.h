#ifndef org_orekit_data_ZipJarCrawler$Archive$EntryStream_H
#define org_orekit_data_ZipJarCrawler$Archive$EntryStream_H

#include "java/io/InputStream.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class ZipJarCrawler$Archive$EntryStream : public ::java::io::InputStream {
       public:
        enum {
          mid_available_55546ef6a647f39b,
          mid_close_a1fa5dae97ea5ed2,
          mid_getName_1c1fa1e935d6cdcf,
          mid_isDirectory_9ab94ac1dc23b105,
          mid_mark_44ed599e93e8a30c,
          mid_markSupported_9ab94ac1dc23b105,
          mid_read_55546ef6a647f39b,
          mid_read_53324f422c2c7f64,
          mid_read_296dd75c373e2c1d,
          mid_reset_a1fa5dae97ea5ed2,
          mid_skip_9db63109f74a74fc,
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
