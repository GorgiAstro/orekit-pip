#ifndef org_orekit_attitudes_YawCompensation_H
#define org_orekit_attitudes_YawCompensation_H

#include "org/orekit/attitudes/GroundPointing.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
      class AttitudeProviderModifier;
      class FieldAttitude;
      class Attitude;
    }
    namespace utils {
      class FieldPVCoordinatesProvider;
      class TimeStampedPVCoordinates;
      class TimeStampedFieldPVCoordinates;
      class PVCoordinatesProvider;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
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
          mid_init$_49240b6f46f84815,
          mid_getAttitude_a02177519e1b6a45,
          mid_getAttitude_aab1c6ab68ffdcbb,
          mid_getBaseState_aab1c6ab68ffdcbb,
          mid_getBaseState_a02177519e1b6a45,
          mid_getTargetPV_19719ebf0495cd86,
          mid_getTargetPV_11bfbaf3cce3e66c,
          mid_getUnderlyingAttitudeProvider_2f73d1f4460b8d6c,
          mid_getYawAngle_0cd7fb3ba780c7b9,
          mid_getYawAngle_7f0c088969d99c56,
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
        ::org::orekit::attitudes::FieldAttitude getBaseState(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::Attitude getBaseState(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
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
