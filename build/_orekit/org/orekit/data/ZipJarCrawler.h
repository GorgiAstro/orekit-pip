#ifndef org_orekit_data_ZipJarCrawler_H
#define org_orekit_data_ZipJarCrawler_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class File;
  }
  namespace lang {
    class Class;
    class String;
    class ClassLoader;
  }
  namespace net {
    class URL;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class DataProvider;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class ZipJarCrawler : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7e1d51614d5d6a43,
          mid_init$_734b91ac30d5f9b4,
          mid_init$_c76f3e82e2dd3be4,
          mid_init$_4d20546ee4ae1447,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ZipJarCrawler(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ZipJarCrawler(const ZipJarCrawler& obj) : ::java::lang::Object(obj) {}

        ZipJarCrawler(const ::java::io::File &);
        ZipJarCrawler(const ::java::lang::String &);
        ZipJarCrawler(const ::java::net::URL &);
        ZipJarCrawler(const ::java::lang::ClassLoader &, const ::java::lang::String &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(ZipJarCrawler);
      extern PyTypeObject *PY_TYPE(ZipJarCrawler);

      class t_ZipJarCrawler {
      public:
        PyObject_HEAD
        ZipJarCrawler object;
        static PyObject *wrap_Object(const ZipJarCrawler&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
