#ifndef org_orekit_frames_PythonEOPHistoryLoader_H
#define org_orekit_frames_PythonEOPHistoryLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class SortedSet;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class IERSConventions$NutationCorrectionConverter;
    }
    namespace frames {
      class EopHistoryLoader;
      class EOPEntry;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class PythonEOPHistoryLoader : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_fillHistory_dc8806c52abe2b9d,
          mid_finalize_0640e6acf969ed28,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonEOPHistoryLoader(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonEOPHistoryLoader(const PythonEOPHistoryLoader& obj) : ::java::lang::Object(obj) {}

        PythonEOPHistoryLoader();

        void fillHistory(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter &, const ::java::util::SortedSet &) const;
        void finalize() const;
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
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(PythonEOPHistoryLoader);
      extern PyTypeObject *PY_TYPE(PythonEOPHistoryLoader);

      class t_PythonEOPHistoryLoader {
      public:
        PyObject_HEAD
        PythonEOPHistoryLoader object;
        static PyObject *wrap_Object(const PythonEOPHistoryLoader&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
