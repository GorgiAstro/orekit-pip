#ifndef org_orekit_attitudes_PythonGroundPointing_H
#define org_orekit_attitudes_PythonGroundPointing_H

#include "org/orekit/attitudes/GroundPointing.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
      class TimeStampedPVCoordinates;
      class TimeStampedFieldPVCoordinates;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace attitudes {

      class PythonGroundPointing : public ::org::orekit::attitudes::GroundPointing {
       public:
        enum {
          mid_init$_48e1525249177158,
          mid_finalize_0fa09c18fee449d5,
          mid_getTargetPV_ad3e02e6f0d115f2,
          mid_getTargetPV_129d59e5c897146f,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
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
