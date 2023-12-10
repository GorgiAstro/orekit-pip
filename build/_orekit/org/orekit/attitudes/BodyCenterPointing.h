#ifndef org_orekit_attitudes_BodyCenterPointing_H
#define org_orekit_attitudes_BodyCenterPointing_H

#include "org/orekit/attitudes/GroundPointing.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedPVCoordinates;
      class TimeStampedFieldPVCoordinates;
      class FieldPVCoordinatesProvider;
      class PVCoordinatesProvider;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace bodies {
      class Ellipsoid;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace attitudes {

      class BodyCenterPointing : public ::org::orekit::attitudes::GroundPointing {
       public:
        enum {
          mid_init$_a50bbae75e449f8b,
          mid_getTargetPV_99b96e260ceb5fe3,
          mid_getTargetPV_ab0341569f219f18,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BodyCenterPointing(jobject obj) : ::org::orekit::attitudes::GroundPointing(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BodyCenterPointing(const BodyCenterPointing& obj) : ::org::orekit::attitudes::GroundPointing(obj) {}

        BodyCenterPointing(const ::org::orekit::frames::Frame &, const ::org::orekit::bodies::Ellipsoid &);

        ::org::orekit::utils::TimeStampedFieldPVCoordinates getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::utils::TimeStampedPVCoordinates getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(BodyCenterPointing);
      extern PyTypeObject *PY_TYPE(BodyCenterPointing);

      class t_BodyCenterPointing {
      public:
        PyObject_HEAD
        BodyCenterPointing object;
        static PyObject *wrap_Object(const BodyCenterPointing&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
