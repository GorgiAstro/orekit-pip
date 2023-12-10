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
          mid_init$_053f7944f8d95650,
          mid_setTimeout_0a2a1ac2721c0336,
          mid_getStream_2ba93d6ec2f236e4,
          mid_getCompleteName_372a1415f57bf367,
          mid_getBaseName_372a1415f57bf367,
          mid_getZipJarCrawler_97a5bb6f12c21365,
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
