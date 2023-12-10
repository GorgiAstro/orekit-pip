#ifndef org_orekit_data_FilesListCrawler_H
#define org_orekit_data_FilesListCrawler_H

#include "org/orekit/data/AbstractListCrawler.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class File;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class FilesListCrawler : public ::org::orekit::data::AbstractListCrawler {
       public:
        enum {
          mid_init$_890a2dfd24c3cadc,
          mid_getStream_7fae51e7cfe91ce7,
          mid_getCompleteName_259b0019ab7aa9fd,
          mid_getBaseName_259b0019ab7aa9fd,
          mid_getZipJarCrawler_702af3fe6b3a612f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FilesListCrawler(jobject obj) : ::org::orekit::data::AbstractListCrawler(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FilesListCrawler(const FilesListCrawler& obj) : ::org::orekit::data::AbstractListCrawler(obj) {}

        FilesListCrawler(const JArray< ::java::io::File > &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(FilesListCrawler);
      extern PyTypeObject *PY_TYPE(FilesListCrawler);

      class t_FilesListCrawler {
      public:
        PyObject_HEAD
        FilesListCrawler object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FilesListCrawler *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FilesListCrawler&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FilesListCrawler&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
