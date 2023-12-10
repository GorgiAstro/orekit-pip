#ifndef org_orekit_data_PythonAbstractListCrawler_H
#define org_orekit_data_PythonAbstractListCrawler_H

#include "org/orekit/data/AbstractListCrawler.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace lang {
    class Throwable;
    class Class;
    class Object;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class ZipJarCrawler;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class PythonAbstractListCrawler : public ::org::orekit::data::AbstractListCrawler {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_finalize_7ae3461a92a43152,
          mid_getBaseName_d5950e748b97110b,
          mid_getCompleteName_d5950e748b97110b,
          mid_getStream_25301161b6e4daa9,
          mid_getZipJarCrawler_5aeaff72b829467a,
          mid_pythonDecRef_7ae3461a92a43152,
          mid_pythonExtension_a27fc9afd27e559d,
          mid_pythonExtension_fefb08975c10f0a1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonAbstractListCrawler(jobject obj) : ::org::orekit::data::AbstractListCrawler(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonAbstractListCrawler(const PythonAbstractListCrawler& obj) : ::org::orekit::data::AbstractListCrawler(obj) {}

        PythonAbstractListCrawler();

        void finalize() const;
        ::java::lang::String getBaseName(const ::java::lang::Object &) const;
        ::java::lang::String getCompleteName(const ::java::lang::Object &) const;
        ::java::io::InputStream getStream(const ::java::lang::Object &) const;
        ::org::orekit::data::ZipJarCrawler getZipJarCrawler(const ::java::lang::Object &) const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(PythonAbstractListCrawler);
      extern PyTypeObject *PY_TYPE(PythonAbstractListCrawler);

      class t_PythonAbstractListCrawler {
      public:
        PyObject_HEAD
        PythonAbstractListCrawler object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_PythonAbstractListCrawler *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PythonAbstractListCrawler&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PythonAbstractListCrawler&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
