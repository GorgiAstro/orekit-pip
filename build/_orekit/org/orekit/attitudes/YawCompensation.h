#ifndef org_orekit_attitudes_YawCompensation_H
#define org_orekit_attitudes_YawCompensation_H

#include "org/orekit/attitudes/GroundPointing.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class Attitude;
      class FieldAttitude;
      class AttitudeProvider;
      class AttitudeProviderModifier;
    }
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
  namespace hipparchus {
    class CalculusFieldElement;
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

      class YawCompensation : public ::org::orekit::attitudes::GroundPointing {
       public:
        enum {
          mid_init$_e52dd4acf08c7383,
          mid_getAttitude_1306ac39e1d2de3f,
          mid_getAttitude_77e3383de01f3e48,
          mid_getBaseState_1306ac39e1d2de3f,
          mid_getBaseState_77e3383de01f3e48,
          mid_getTargetPV_ee00ab612436435b,
          mid_getTargetPV_9e0119a6fef31431,
          mid_getUnderlyingAttitudeProvider_6df6b78ab9377151,
          mid_getYawAngle_943fd94a25b2c056,
          mid_getYawAngle_b6c12af81c60eb89,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit YawCompensation(jobject obj) : ::org::orekit::attitudes::GroundPointing(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        YawCompensation(const YawCompensation& obj) : ::org::orekit::attitudes::GroundPointing(obj) {}

        YawCompensation(const ::org::orekit::frames::Frame &, const ::org::orekit::attitudes::GroundPointing &);

        ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::Attitude getBaseState(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::FieldAttitude getBaseState(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::utils::TimeStampedPVCoordinates getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::AttitudeProvider getUnderlyingAttitudeProvider() const;
        jdouble getYawAngle(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::CalculusFieldElement getYawAngle(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(YawCompensation);
      extern PyTypeObject *PY_TYPE(YawCompensation);

      class t_YawCompensation {
      public:
        PyObject_HEAD
        YawCompensation object;
        static PyObject *wrap_Object(const YawCompensation&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
