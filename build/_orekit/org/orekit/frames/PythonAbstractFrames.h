#ifndef org_orekit_frames_PythonAbstractFrames_H
#define org_orekit_frames_PythonAbstractFrames_H

#include "org/orekit/frames/AbstractFrames.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeScales;
    }
    namespace frames {
      class Frame;
      class EOPHistory;
    }
    namespace utils {
      class IERSConventions;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class PythonAbstractFrames : public ::org::orekit::frames::AbstractFrames {
       public:
        enum {
          mid_init$_2e8e53c66e9d36c4,
          mid_finalize_7ae3461a92a43152,
          mid_getEOPHistory_7544a283da003d74,
          mid_pythonDecRef_7ae3461a92a43152,
          mid_pythonExtension_a27fc9afd27e559d,
          mid_pythonExtension_fefb08975c10f0a1,
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
