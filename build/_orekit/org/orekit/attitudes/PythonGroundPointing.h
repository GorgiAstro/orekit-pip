#ifndef org_orekit_attitudes_PythonGroundPointing_H
#define org_orekit_attitudes_PythonGroundPointing_H

#include "org/orekit/attitudes/GroundPointing.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
      class TimeStampedPVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace attitudes {

      class PythonGroundPointing : public ::org::orekit::attitudes::GroundPointing {
       public:
        enum {
          mid_init$_16d9dfdcb9768806,
          mid_finalize_0640e6acf969ed28,
          mid_getTargetPV_ee00ab612436435b,
          mid_getTargetPV_9e0119a6fef31431,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonGroundPointing(jobject obj) : ::org::orekit::attitudes::GroundPointing(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonGroundPointing(const PythonGroundPointing& obj) : ::org::orekit::attitudes::GroundPointing(obj) {}

        PythonGroundPointing(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &);

        void finalize() const;
        ::org::orekit::utils::TimeStampedPVCoordinates getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
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
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(PythonGroundPointing);
      extern PyTypeObject *PY_TYPE(PythonGroundPointing);

      class t_PythonGroundPointing {
      public:
        PyObject_HEAD
        PythonGroundPointing object;
        static PyObject *wrap_Object(const PythonGroundPointing&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
