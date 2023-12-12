#ifndef org_orekit_data_AbstractListCrawler_H
#define org_orekit_data_AbstractListCrawler_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
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

      class AbstractListCrawler : public ::java::lang::Object {
       public:
        enum {
          mid_addInput_009757f2c0fd9090,
          mid_getInputs_0d9551367f7ecdef,
          mid_getCompleteName_fa48e6cfb0766bbf,
          mid_getBaseName_fa48e6cfb0766bbf,
          mid_getZipJarCrawler_bb8b4fd10482c728,
          mid_getStream_9f5def4cb35ed37f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractListCrawler(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractListCrawler(const AbstractListCrawler& obj) : ::java::lang::Object(obj) {}

        void addInput(const ::java::lang::Object &) const;
        ::java::util::List getInputs() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(AbstractListCrawler);
      extern PyTypeObject *PY_TYPE(AbstractListCrawler);

      class t_AbstractListCrawler {
      public:
        PyObject_HEAD
        AbstractListCrawler object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_AbstractListCrawler *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const AbstractListCrawler&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const AbstractListCrawler&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
