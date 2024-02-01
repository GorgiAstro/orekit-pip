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
          mid_init$_a060fadda655b8dd,
          mid_setTimeout_8fd427ab23829bf5,
          mid_getCompleteName_51f6f7513d4e198f,
          mid_getBaseName_51f6f7513d4e198f,
          mid_getZipJarCrawler_3f6467e33f877b63,
          mid_getStream_bcb2a49a31478ed4,
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
