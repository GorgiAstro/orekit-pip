#ifndef org_orekit_time_UTCTAIHistoryFilesLoader_H
#define org_orekit_time_UTCTAIHistoryFilesLoader_H

#include "org/orekit/data/AbstractSelfFeedingLoader.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
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

      class UTCTAIHistoryFilesLoader : public ::org::orekit::data::AbstractSelfFeedingLoader {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_init$_f44b5b919beca6bf,
          mid_loadOffsets_d751c1a57012b438,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit UTCTAIHistoryFilesLoader(jobject obj) : ::org::orekit::data::AbstractSelfFeedingLoader(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        UTCTAIHistoryFilesLoader(const UTCTAIHistoryFilesLoader& obj) : ::org::orekit::data::AbstractSelfFeedingLoader(obj) {}

        UTCTAIHistoryFilesLoader();
        UTCTAIHistoryFilesLoader(const ::org::orekit::data::DataProvidersManager &);

        ::java::util::List loadOffsets() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(UTCTAIHistoryFilesLoader);
      extern PyTypeObject *PY_TYPE(UTCTAIHistoryFilesLoader);

      class t_UTCTAIHistoryFilesLoader {
      public:
        PyObject_HEAD
        UTCTAIHistoryFilesLoader object;
        static PyObject *wrap_Object(const UTCTAIHistoryFilesLoader&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
