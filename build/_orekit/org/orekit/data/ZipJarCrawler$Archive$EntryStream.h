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
          mid_available_d6ab429752e7c267,
          mid_close_ff7cb6c242604316,
          mid_getName_d2c8eb4129821f0e,
          mid_isDirectory_eee3de00fe971136,
          mid_mark_8fd427ab23829bf5,
          mid_markSupported_eee3de00fe971136,
          mid_read_d6ab429752e7c267,
          mid_read_89e14f411787412a,
          mid_read_1351cbafe5a435a7,
          mid_reset_ff7cb6c242604316,
          mid_skip_1eaf6eb0a3f3163f,
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
