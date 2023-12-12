#ifndef org_orekit_data_NetworkCrawler_H
#define org_orekit_data_NetworkCrawler_H

#include "org/orekit/data/AbstractListCrawler.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace net {
    class URL;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class NetworkCrawler : public ::org::orekit::data::AbstractListCrawler {
       public:
        enum {
          mid_init$_547df9b9500361a7,
          mid_setTimeout_a3da1a935cb37f7b,
          mid_getCompleteName_13c5aa3bcbbd9c42,
          mid_getBaseName_13c5aa3bcbbd9c42,
          mid_getZipJarCrawler_28ea1f296b724d3d,
          mid_getStream_4c4eb733996e551b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit NetworkCrawler(jobject obj) : ::org::orekit::data::AbstractListCrawler(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        NetworkCrawler(const NetworkCrawler& obj) : ::org::orekit::data::AbstractListCrawler(obj) {}

        NetworkCrawler(const JArray< ::java::net::URL > &);

        void setTimeout(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(NetworkCrawler);
      extern PyTypeObject *PY_TYPE(NetworkCrawler);

      class t_NetworkCrawler {
      public:
        PyObject_HEAD
        NetworkCrawler object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_NetworkCrawler *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const NetworkCrawler&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const NetworkCrawler&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
