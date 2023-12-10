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
      class UTCTAIOffsetsLoader;
      class OffsetModel;
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
          mid_init$_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_loadOffsets_2afa36052df4765d,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
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
