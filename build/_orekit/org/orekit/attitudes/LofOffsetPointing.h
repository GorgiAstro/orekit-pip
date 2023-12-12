#ifndef org_orekit_attitudes_LofOffsetPointing_H
#define org_orekit_attitudes_LofOffsetPointing_H

#include "org/orekit/attitudes/GroundPointing.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class BodyShape;
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
    namespace attitudes {
      class FieldAttitude;
      class AttitudeProvider;
      class Attitude;
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
          class Rotation;
          class FieldRotation;
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

      class LofOffsetPointing : public ::org::orekit::attitudes::GroundPointing {
       public:
        enum {
          mid_init$_894041d766a78972,
          mid_getAttitude_77e3383de01f3e48,
          mid_getAttitude_1306ac39e1d2de3f,
          mid_getAttitudeRotation_85bb0a19efdadc1d,
          mid_getAttitudeRotation_5c74bfcf2d42825a,
          mid_getTargetPV_ee00ab612436435b,
          mid_getTargetPV_9e0119a6fef31431,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LofOffsetPointing(jobject obj) : ::org::orekit::attitudes::GroundPointing(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LofOffsetPointing(const LofOffsetPointing& obj) : ::org::orekit::attitudes::GroundPointing(obj) {}

        LofOffsetPointing(const ::org::orekit::frames::Frame &, const ::org::orekit::bodies::BodyShape &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);

        ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::Rotation getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::utils::TimeStampedPVCoordinates getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(LofOffsetPointing);
      extern PyTypeObject *PY_TYPE(LofOffsetPointing);

      class t_LofOffsetPointing {
      public:
        PyObject_HEAD
        LofOffsetPointing object;
        static PyObject *wrap_Object(const LofOffsetPointing&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
