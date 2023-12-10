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
      class EopHistoryLoader;
      class EOPEntry;
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
          mid_init$_7ae3461a92a43152,
          mid_fillHistory_28ed459287c4a62f,
          mid_finalize_7ae3461a92a43152,
          mid_pythonDecRef_7ae3461a92a43152,
          mid_pythonExtension_a27fc9afd27e559d,
          mid_pythonExtension_fefb08975c10f0a1,
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
