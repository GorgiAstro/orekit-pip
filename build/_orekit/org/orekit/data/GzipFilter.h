#ifndef org_orekit_data_GzipFilter_H
#define org_orekit_data_GzipFilter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataSource;
      class DataFilter;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class GzipFilter : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_filter_716adf7a6da8b4d7,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit GzipFilter(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        GzipFilter(const GzipFilter& obj) : ::java::lang::Object(obj) {}

        GzipFilter();

        ::org::orekit::data::DataSource filter(const ::org::orekit::data::DataSource &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(GzipFilter);
      extern PyTypeObject *PY_TYPE(GzipFilter);

      class t_GzipFilter {
      public:
        PyObject_HEAD
        GzipFilter object;
        static PyObject *wrap_Object(const GzipFilter&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
