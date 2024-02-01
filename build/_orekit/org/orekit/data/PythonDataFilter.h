#ifndef org_orekit_data_PythonDataFilter_H
#define org_orekit_data_PythonDataFilter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Throwable;
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

      class PythonDataFilter : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_filter_4edc3983a04dd819,
          mid_finalize_ff7cb6c242604316,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonDataFilter(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonDataFilter(const PythonDataFilter& obj) : ::java::lang::Object(obj) {}

        PythonDataFilter();

        ::org::orekit::data::DataSource filter(const ::org::orekit::data::DataSource &) const;
        void finalize() const;
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
      extern PyType_Def PY_TYPE_DEF(PythonDataFilter);
      extern PyTypeObject *PY_TYPE(PythonDataFilter);

      class t_PythonDataFilter {
      public:
        PyObject_HEAD
        PythonDataFilter object;
        static PyObject *wrap_Object(const PythonDataFilter&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
