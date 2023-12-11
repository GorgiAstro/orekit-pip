#ifndef org_orekit_frames_AbstractEopLoader_H
#define org_orekit_frames_AbstractEopLoader_H

#include "org/orekit/data/AbstractSelfFeedingLoader.h"

namespace java {
  namespace util {
    namespace function {
      class Supplier;
    }
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class DataProvidersManager;
    }
    namespace time {
      class TimeScale;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class AbstractEopLoader : public ::org::orekit::data::AbstractSelfFeedingLoader {
       public:
        enum {
          mid_init$_1b3e3ade57ae798c,
          mid_getUtc_527ee9dde1a96470,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractEopLoader(jobject obj) : ::org::orekit::data::AbstractSelfFeedingLoader(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractEopLoader(const AbstractEopLoader& obj) : ::org::orekit::data::AbstractSelfFeedingLoader(obj) {}

        AbstractEopLoader(const ::java::lang::String &, const ::org::orekit::data::DataProvidersManager &, const ::java::util::function::Supplier &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(AbstractEopLoader);
      extern PyTypeObject *PY_TYPE(AbstractEopLoader);

      class t_AbstractEopLoader {
      public:
        PyObject_HEAD
        AbstractEopLoader object;
        static PyObject *wrap_Object(const AbstractEopLoader&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
