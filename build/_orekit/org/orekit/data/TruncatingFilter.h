#ifndef org_orekit_data_TruncatingFilter_H
#define org_orekit_data_TruncatingFilter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class DataFilter;
      class DataSource;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class TruncatingFilter : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a3da1a935cb37f7b,
          mid_filter_d33f4b0b3a1030ad,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TruncatingFilter(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TruncatingFilter(const TruncatingFilter& obj) : ::java::lang::Object(obj) {}

        TruncatingFilter(jint);

        ::org::orekit::data::DataSource filter(const ::org::orekit::data::DataSource &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(TruncatingFilter);
      extern PyTypeObject *PY_TYPE(TruncatingFilter);

      class t_TruncatingFilter {
      public:
        PyObject_HEAD
        TruncatingFilter object;
        static PyObject *wrap_Object(const TruncatingFilter&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
