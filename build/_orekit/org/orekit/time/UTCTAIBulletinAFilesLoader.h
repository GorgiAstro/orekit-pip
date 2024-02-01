#ifndef org_orekit_time_UTCTAIBulletinAFilesLoader_H
#define org_orekit_time_UTCTAIBulletinAFilesLoader_H

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

      class UTCTAIBulletinAFilesLoader : public ::org::orekit::data::AbstractSelfFeedingLoader {
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

        explicit UTCTAIBulletinAFilesLoader(jobject obj) : ::org::orekit::data::AbstractSelfFeedingLoader(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        UTCTAIBulletinAFilesLoader(const UTCTAIBulletinAFilesLoader& obj) : ::org::orekit::data::AbstractSelfFeedingLoader(obj) {}

        UTCTAIBulletinAFilesLoader(const ::java::lang::String &);
        UTCTAIBulletinAFilesLoader(const ::java::lang::String &, const ::org::orekit::data::DataProvidersManager &);

        ::java::util::List loadOffsets() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(UTCTAIBulletinAFilesLoader);
      extern PyTypeObject *PY_TYPE(UTCTAIBulletinAFilesLoader);

      class t_UTCTAIBulletinAFilesLoader {
      public:
        PyObject_HEAD
        UTCTAIBulletinAFilesLoader object;
        static PyObject *wrap_Object(const UTCTAIBulletinAFilesLoader&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
