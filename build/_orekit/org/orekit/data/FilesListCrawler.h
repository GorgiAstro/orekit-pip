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
          mid_init$_374b2b754d881b88,
          mid_getCompleteName_b717dae808c0c49c,
          mid_getBaseName_b717dae808c0c49c,
          mid_getZipJarCrawler_93f20e0a9bd16ec7,
          mid_getStream_84f8ce8d5e5e97b4,
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
