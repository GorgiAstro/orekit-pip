#ifndef org_orekit_attitudes_YawSteering_H
#define org_orekit_attitudes_YawSteering_H

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
    namespace attitudes {
      class FieldAttitude;
      class AttitudeProvider;
      class Attitude;
      class AttitudeProviderModifier;
    }
    namespace frames {
      class Frame;
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
          mid_init$_512099bd19ade067,
          mid_getAttitude_77e3383de01f3e48,
          mid_getAttitude_1306ac39e1d2de3f,
          mid_getBaseState_77e3383de01f3e48,
          mid_getBaseState_1306ac39e1d2de3f,
          mid_getTargetPV_ee00ab612436435b,
          mid_getTargetPV_9e0119a6fef31431,
          mid_getUnderlyingAttitudeProvider_6df6b78ab9377151,
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

        ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::FieldAttitude getBaseState(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::Attitude getBaseState(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
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
