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
          mid_init$_4c16e57d19ddaa09,
          mid_getSupportedNames_d2c8eb4129821f0e,
          mid_feed_80470b81e91fe5f9,
          mid_setSupportedNames_105e1eadb709d9ac,
          mid_getDataProvidersManager_f0a5ee63a7def5aa,
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
