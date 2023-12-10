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
    namespace data {
      class DataProvidersManager;
    }
    namespace time {
      class UTCTAIOffsetsLoader;
      class OffsetModel;
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
          mid_init$_0fa09c18fee449d5,
          mid_init$_2ce23204880a56c8,
          mid_loadOffsets_2afa36052df4765d,
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
