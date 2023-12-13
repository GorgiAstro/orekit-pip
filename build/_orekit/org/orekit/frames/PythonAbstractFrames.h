#ifndef org_orekit_frames_PythonAbstractFrames_H
#define org_orekit_frames_PythonAbstractFrames_H

#include "org/orekit/frames/AbstractFrames.h"

namespace java {
  namespace util {
    namespace function {
      class Supplier;
    }
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class IERSConventions;
    }
    namespace frames {
      class EOPHistory;
      class Frame;
    }
    namespace time {
      class TimeScales;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class PythonAbstractFrames : public ::org::orekit::frames::AbstractFrames {
       public:
        enum {
          mid_init$_49fbab41a915bed1,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_getEOPHistory_a77e9d6bc0da2439,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonAbstractFrames(jobject obj) : ::org::orekit::frames::AbstractFrames(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonAbstractFrames(const PythonAbstractFrames& obj) : ::org::orekit::frames::AbstractFrames(obj) {}

        PythonAbstractFrames(const ::org::orekit::time::TimeScales &, const ::java::util::function::Supplier &);

        void finalize() const;
        ::org::orekit::frames::EOPHistory getEOPHistory(const ::org::orekit::utils::IERSConventions &, jboolean) const;
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
      extern PyType_Def PY_TYPE_DEF(PythonAbstractFrames);
      extern PyTypeObject *PY_TYPE(PythonAbstractFrames);

      class t_PythonAbstractFrames {
      public:
        PyObject_HEAD
        PythonAbstractFrames object;
        static PyObject *wrap_Object(const PythonAbstractFrames&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
