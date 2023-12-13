#ifndef org_orekit_data_PythonDataFilter_H
#define org_orekit_data_PythonDataFilter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataFilter;
      class DataSource;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class PythonDataFilter : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_filter_bbc30294b1b0b691,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
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
