#ifndef org_orekit_files_rinex_HatanakaCompressFilter_H
#define org_orekit_files_rinex_HatanakaCompressFilter_H

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
    namespace files {
      namespace rinex {

        class HatanakaCompressFilter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_filter_4edc3983a04dd819,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit HatanakaCompressFilter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          HatanakaCompressFilter(const HatanakaCompressFilter& obj) : ::java::lang::Object(obj) {}

          HatanakaCompressFilter();

          ::org::orekit::data::DataSource filter(const ::org::orekit::data::DataSource &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        extern PyType_Def PY_TYPE_DEF(HatanakaCompressFilter);
        extern PyTypeObject *PY_TYPE(HatanakaCompressFilter);

        class t_HatanakaCompressFilter {
        public:
          PyObject_HEAD
          HatanakaCompressFilter object;
          static PyObject *wrap_Object(const HatanakaCompressFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
