#ifndef org_orekit_attitudes_PythonGroundPointing_H
#define org_orekit_attitudes_PythonGroundPointing_H

#include "org/orekit/attitudes/GroundPointing.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
      class TimeStampedFieldPVCoordinates;
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
          mid_init$_c2861e84272185b6,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_getTargetPV_0c9a6603286e7c6f,
          mid_getTargetPV_4a6b199bd28f952f,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
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
