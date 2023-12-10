#ifndef org_orekit_attitudes_YawSteering_H
#define org_orekit_attitudes_YawSteering_H

#include "org/orekit/attitudes/GroundPointing.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class Attitude;
      class FieldAttitude;
      class AttitudeProvider;
      class AttitudeProviderModifier;
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
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
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

      class YawSteering : public ::org::orekit::attitudes::GroundPointing {
       public:
        enum {
          mid_init$_f9f34c850e6edf41,
          mid_getAttitude_d2b70935d932b5c5,
          mid_getAttitude_4e541876ea7d5bd0,
          mid_getBaseState_d2b70935d932b5c5,
          mid_getBaseState_4e541876ea7d5bd0,
          mid_getTargetPV_ad3e02e6f0d115f2,
          mid_getTargetPV_129d59e5c897146f,
          mid_getUnderlyingAttitudeProvider_a904f3d015a354a0,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit YawSteering(jobject obj) : ::org::orekit::attitudes::GroundPointing(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        YawSteering(const YawSteering& obj) : ::org::orekit::attitudes::GroundPointing(obj) {}

        YawSteering(const ::org::orekit::frames::Frame &, const ::org::orekit::attitudes::GroundPointing &, const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);

        ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::Attitude getBaseState(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::FieldAttitude getBaseState(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::utils::TimeStampedPVCoordinates getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::AttitudeProvider getUnderlyingAttitudeProvider() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(YawSteering);
      extern PyTypeObject *PY_TYPE(YawSteering);

      class t_YawSteering {
      public:
        PyObject_HEAD
        YawSteering object;
        static PyObject *wrap_Object(const YawSteering&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
