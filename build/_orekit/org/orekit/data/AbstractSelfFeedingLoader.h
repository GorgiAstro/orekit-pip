#ifndef org_orekit_data_AbstractSelfFeedingLoader_H
#define org_orekit_data_AbstractSelfFeedingLoader_H

#include "java/lang/Object.h"

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

      class AbstractSelfFeedingLoader : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0343d25c5af74eca,
          mid_getSupportedNames_1c1fa1e935d6cdcf,
          mid_getDataProvidersManager_58cee34d9bd73f33,
          mid_feed_e85cadd85939e324,
          mid_setSupportedNames_734b91ac30d5f9b4,
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
