#ifndef org_orekit_frames_TopocentricFrame_H
#define org_orekit_frames_TopocentricFrame_H

#include "org/orekit/frames/Frame.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class BodyShape;
      class GeodeticPoint;
      class FieldGeodeticPoint;
    }
    namespace utils {
      class FieldTrackingCoordinates;
      class FieldPVCoordinates;
      class TrackingCoordinates;
      class PVCoordinates;
      class PVCoordinatesProvider;
      class TimeStampedPVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    class CalculusFieldElement;
    class Field;
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class TopocentricFrame : public ::org::orekit::frames::Frame {
       public:
        enum {
          mid_init$_a53eda3e60007f98,
          mid_computeLimitVisibilityPoint_f6999efb9d99759b,
          mid_getAzimuth_337a9b2d5433d9d9,
          mid_getAzimuth_ad77259560c76546,
          mid_getCartesianPoint_f88961cca75a2c0a,
          mid_getEast_f88961cca75a2c0a,
          mid_getElevation_ad77259560c76546,
          mid_getElevation_337a9b2d5433d9d9,
          mid_getNadir_f88961cca75a2c0a,
          mid_getNorth_f88961cca75a2c0a,
          mid_getPVCoordinates_17742a9a6655bdb1,
          mid_getParentShape_f166528db337c659,
          mid_getPoint_8672b163b0e4a5a3,
          mid_getPoint_d2c5bc800d874d78,
          mid_getPosition_7ca40559664606d9,
          mid_getRange_337a9b2d5433d9d9,
          mid_getRange_ad77259560c76546,
          mid_getRangeRate_1a5c08523703bdbc,
          mid_getRangeRate_b73013eacd76d813,
          mid_getSouth_f88961cca75a2c0a,
          mid_getTrackingCoordinates_91161df1a985515e,
          mid_getTrackingCoordinates_10b9f744c9063d36,
          mid_getWest_f88961cca75a2c0a,
          mid_getZenith_f88961cca75a2c0a,
          mid_pointAtDistance_f6999efb9d99759b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TopocentricFrame(jobject obj) : ::org::orekit::frames::Frame(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TopocentricFrame(const TopocentricFrame& obj) : ::org::orekit::frames::Frame(obj) {}

        TopocentricFrame(const ::org::orekit::bodies::BodyShape &, const ::org::orekit::bodies::GeodeticPoint &, const ::java::lang::String &);

        ::org::orekit::bodies::GeodeticPoint computeLimitVisibilityPoint(jdouble, jdouble, jdouble) const;
        ::org::hipparchus::CalculusFieldElement getAzimuth(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        jdouble getAzimuth(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getCartesianPoint() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getEast() const;
        jdouble getElevation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement getElevation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getNadir() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getNorth() const;
        ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::bodies::BodyShape getParentShape() const;
        ::org::orekit::bodies::GeodeticPoint getPoint() const;
        ::org::orekit::bodies::FieldGeodeticPoint getPoint(const ::org::hipparchus::Field &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getPosition(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::CalculusFieldElement getRange(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        jdouble getRange(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        jdouble getRangeRate(const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement getRangeRate(const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getSouth() const;
        ::org::orekit::utils::TrackingCoordinates getTrackingCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::utils::FieldTrackingCoordinates getTrackingCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getWest() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getZenith() const;
        ::org::orekit::bodies::GeodeticPoint pointAtDistance(jdouble, jdouble, jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(TopocentricFrame);
      extern PyTypeObject *PY_TYPE(TopocentricFrame);

      class t_TopocentricFrame {
      public:
        PyObject_HEAD
        TopocentricFrame object;
        static PyObject *wrap_Object(const TopocentricFrame&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
