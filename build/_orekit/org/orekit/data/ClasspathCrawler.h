#ifndef org_orekit_data_ClasspathCrawler_H
#define org_orekit_data_ClasspathCrawler_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ClassLoader;
    class String;
    class Class;
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

      class ClasspathCrawler : public ::java::lang::Object {
       public:
        enum {
          mid_init$_4f1e9165cc3f09e7,
          mid_init$_f83536b325065468,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ClasspathCrawler(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ClasspathCrawler(const ClasspathCrawler& obj) : ::java::lang::Object(obj) {}

        ClasspathCrawler(const JArray< ::java::lang::String > &);
        ClasspathCrawler(const ::java::lang::ClassLoader &, const JArray< ::java::lang::String > &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(ClasspathCrawler);
      extern PyTypeObject *PY_TYPE(ClasspathCrawler);

      class t_ClasspathCrawler {
      public:
        PyObject_HEAD
        ClasspathCrawler object;
        static PyObject *wrap_Object(const ClasspathCrawler&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
