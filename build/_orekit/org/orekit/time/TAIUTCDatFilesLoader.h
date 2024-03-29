#ifndef org_orekit_time_TAIUTCDatFilesLoader_H
#define org_orekit_time_TAIUTCDatFilesLoader_H

#include "org/orekit/data/AbstractSelfFeedingLoader.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class UTCTAIOffsetsLoader;
      class OffsetModel;
    }
    namespace data {
      class DataProvidersManager;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class TAIUTCDatFilesLoader : public ::org::orekit::data::AbstractSelfFeedingLoader {
       public:
        enum {
          mid_init$_105e1eadb709d9ac,
          mid_init$_4c16e57d19ddaa09,
          mid_loadOffsets_d751c1a57012b438,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TAIUTCDatFilesLoader(jobject obj) : ::org::orekit::data::AbstractSelfFeedingLoader(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TAIUTCDatFilesLoader(const TAIUTCDatFilesLoader& obj) : ::org::orekit::data::AbstractSelfFeedingLoader(obj) {}

        static ::java::lang::String *DEFAULT_SUPPORTED_NAMES;

        TAIUTCDatFilesLoader(const ::java::lang::String &);
        TAIUTCDatFilesLoader(const ::java::lang::String &, const ::org::orekit::data::DataProvidersManager &);

        ::java::util::List loadOffsets() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(TAIUTCDatFilesLoader);
      extern PyTypeObject *PY_TYPE(TAIUTCDatFilesLoader);

      class t_TAIUTCDatFilesLoader {
      public:
        PyObject_HEAD
        TAIUTCDatFilesLoader object;
        static PyObject *wrap_Object(const TAIUTCDatFilesLoader&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
