#ifndef org_orekit_time_PythonUTCTAIOffsetsLoader_H
#define org_orekit_time_PythonUTCTAIOffsetsLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class OffsetModel;
      class UTCTAIOffsetsLoader;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class PythonUTCTAIOffsetsLoader : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_loadOffsets_e62d3bb06d56d7e3,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonUTCTAIOffsetsLoader(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonUTCTAIOffsetsLoader(const PythonUTCTAIOffsetsLoader& obj) : ::java::lang::Object(obj) {}

        PythonUTCTAIOffsetsLoader();

        void finalize() const;
        ::java::util::List loadOffsets() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(PythonUTCTAIOffsetsLoader);
      extern PyTypeObject *PY_TYPE(PythonUTCTAIOffsetsLoader);

      class t_PythonUTCTAIOffsetsLoader {
      public:
        PyObject_HEAD
        PythonUTCTAIOffsetsLoader object;
        static PyObject *wrap_Object(const PythonUTCTAIOffsetsLoader&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
