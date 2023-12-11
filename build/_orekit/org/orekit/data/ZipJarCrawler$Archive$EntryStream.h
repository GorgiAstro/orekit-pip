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
          mid_available_412668abc8d889e9,
          mid_close_0640e6acf969ed28,
          mid_getName_3cffd47377eca18a,
          mid_isDirectory_89b302893bdbe1f1,
          mid_mark_a3da1a935cb37f7b,
          mid_markSupported_89b302893bdbe1f1,
          mid_read_412668abc8d889e9,
          mid_read_67c88f2bf4e7f8b2,
          mid_read_68a76742c8623fb3,
          mid_reset_0640e6acf969ed28,
          mid_skip_f4ad805a81234b49,
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
