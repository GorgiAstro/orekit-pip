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
    namespace frames {
      class Frame;
      class EOPHistory;
    }
    namespace time {
      class TimeScales;
    }
    namespace utils {
      class IERSConventions;
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
          mid_init$_079a6d283d35a519,
          mid_finalize_0640e6acf969ed28,
          mid_getEOPHistory_9cf4a1ec2e53bbd3,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
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
