#ifndef org_orekit_data_DirectoryCrawler_H
#define org_orekit_data_DirectoryCrawler_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class File;
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

      class DirectoryCrawler : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7e1d51614d5d6a43,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DirectoryCrawler(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DirectoryCrawler(const DirectoryCrawler& obj) : ::java::lang::Object(obj) {}

        DirectoryCrawler(const ::java::io::File &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(DirectoryCrawler);
      extern PyTypeObject *PY_TYPE(DirectoryCrawler);

      class t_DirectoryCrawler {
      public:
        PyObject_HEAD
        DirectoryCrawler object;
        static PyObject *wrap_Object(const DirectoryCrawler&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
