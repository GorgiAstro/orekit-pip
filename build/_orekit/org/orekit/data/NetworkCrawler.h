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
          mid_init$_71010176ce552a15,
          mid_setTimeout_44ed599e93e8a30c,
          mid_getStream_a7576d5d76a89054,
          mid_getZipJarCrawler_dce0a16ba3296f61,
          mid_getBaseName_4863d430baae1067,
          mid_getCompleteName_4863d430baae1067,
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
