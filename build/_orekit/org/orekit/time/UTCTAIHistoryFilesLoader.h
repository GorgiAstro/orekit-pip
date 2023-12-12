#ifndef org_orekit_time_UTCTAIHistoryFilesLoader_H
#define org_orekit_time_UTCTAIHistoryFilesLoader_H

#include "org/orekit/data/AbstractSelfFeedingLoader.h"

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
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class UTCTAIHistoryFilesLoader : public ::org::orekit::data::AbstractSelfFeedingLoader {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_init$_451bc3479d2995cd,
          mid_loadOffsets_0d9551367f7ecdef,
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
