#ifndef org_orekit_data_PythonAbstractSelfFeedingLoader_H
#define org_orekit_data_PythonAbstractSelfFeedingLoader_H

#include "org/orekit/data/AbstractSelfFeedingLoader.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class DataProvidersManager;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class PythonAbstractSelfFeedingLoader : public ::org::orekit::data::AbstractSelfFeedingLoader {
       public:
        enum {
          mid_init$_0343d25c5af74eca,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonAbstractSelfFeedingLoader(jobject obj) : ::org::orekit::data::AbstractSelfFeedingLoader(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonAbstractSelfFeedingLoader(const PythonAbstractSelfFeedingLoader& obj) : ::org::orekit::data::AbstractSelfFeedingLoader(obj) {}

        PythonAbstractSelfFeedingLoader(const ::java::lang::String &, const ::org::orekit::data::DataProvidersManager &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(PythonAbstractSelfFeedingLoader);
      extern PyTypeObject *PY_TYPE(PythonAbstractSelfFeedingLoader);

      class t_PythonAbstractSelfFeedingLoader {
      public:
        PyObject_HEAD
        PythonAbstractSelfFeedingLoader object;
        static PyObject *wrap_Object(const PythonAbstractSelfFeedingLoader&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
