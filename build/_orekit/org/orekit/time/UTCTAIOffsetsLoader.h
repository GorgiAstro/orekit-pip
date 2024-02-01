#ifndef org_orekit_time_UTCTAIOffsetsLoader_H
#define org_orekit_time_UTCTAIOffsetsLoader_H

#include "java/lang/Object.h"

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
      class OffsetModel;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class UTCTAIOffsetsLoader : public ::java::lang::Object {
       public:
        enum {
          mid_loadOffsets_d751c1a57012b438,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit UTCTAIOffsetsLoader(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        UTCTAIOffsetsLoader(const UTCTAIOffsetsLoader& obj) : ::java::lang::Object(obj) {}

        ::java::util::List loadOffsets() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(UTCTAIOffsetsLoader);
      extern PyTypeObject *PY_TYPE(UTCTAIOffsetsLoader);

      class t_UTCTAIOffsetsLoader {
      public:
        PyObject_HEAD
        UTCTAIOffsetsLoader object;
        static PyObject *wrap_Object(const UTCTAIOffsetsLoader&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
