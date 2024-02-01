#ifndef org_orekit_frames_EopHistoryLoader_H
#define org_orekit_frames_EopHistoryLoader_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class IERSConventions$NutationCorrectionConverter;
    }
    namespace frames {
      class EOPEntry;
    }
  }
}
namespace java {
  namespace util {
    class SortedSet;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class EopHistoryLoader : public ::java::lang::Object {
       public:
        enum {
          mid_fillHistory_09d2fc89df23cd1a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit EopHistoryLoader(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        EopHistoryLoader(const EopHistoryLoader& obj) : ::java::lang::Object(obj) {}

        void fillHistory(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter &, const ::java::util::SortedSet &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(EopHistoryLoader);
      extern PyTypeObject *PY_TYPE(EopHistoryLoader);

      class t_EopHistoryLoader {
      public:
        PyObject_HEAD
        EopHistoryLoader object;
        static PyObject *wrap_Object(const EopHistoryLoader&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
