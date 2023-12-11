#ifndef org_orekit_data_AbstractSelfFeedingLoader_H
#define org_orekit_data_AbstractSelfFeedingLoader_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataProvidersManager;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class AbstractSelfFeedingLoader : public ::java::lang::Object {
       public:
        enum {
          mid_init$_28c7bdc075bb74e8,
          mid_getDataProvidersManager_090dc74a0d7a5aef,
          mid_feed_8002d1bd7ca19a7b,
          mid_getSupportedNames_3cffd47377eca18a,
          mid_setSupportedNames_f5ffdf29129ef90a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractSelfFeedingLoader(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractSelfFeedingLoader(const AbstractSelfFeedingLoader& obj) : ::java::lang::Object(obj) {}

        AbstractSelfFeedingLoader(const ::java::lang::String &, const ::org::orekit::data::DataProvidersManager &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(AbstractSelfFeedingLoader);
      extern PyTypeObject *PY_TYPE(AbstractSelfFeedingLoader);

      class t_AbstractSelfFeedingLoader {
      public:
        PyObject_HEAD
        AbstractSelfFeedingLoader object;
        static PyObject *wrap_Object(const AbstractSelfFeedingLoader&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
