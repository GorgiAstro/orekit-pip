#ifndef org_orekit_frames_PythonEOPHistoryLoader_H
#define org_orekit_frames_PythonEOPHistoryLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
  namespace util {
    class SortedSet;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class EOPEntry;
      class EopHistoryLoader;
    }
    namespace utils {
      class IERSConventions$NutationCorrectionConverter;
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
          mid_init$_ff7cb6c242604316,
          mid_fillHistory_09d2fc89df23cd1a,
          mid_finalize_ff7cb6c242604316,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
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
