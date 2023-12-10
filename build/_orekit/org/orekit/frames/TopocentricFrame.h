#ifndef org_orekit_frames_TopocentricFrame_H
#define org_orekit_frames_TopocentricFrame_H

#include "org/orekit/frames/Frame.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace utils {
      class PVCoordinates;
      class TrackingCoordinates;
      class TimeStampedPVCoordinates;
      class FieldTrackingCoordinates;
      class FieldPVCoordinates;
      class PVCoordinatesProvider;
    }
    namespace bodies {
      class GeodeticPoint;
      class FieldGeodeticPoint;
      class BodyShape;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
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
          mid_init$_ef2c29065ec35db1,
          mid_computeLimitVisibilityPoint_5a33102dde606490,
          mid_getAzimuth_fe16490ba41bf1d5,
          mid_getAzimuth_13ec59221cabb99d,
          mid_getCartesianPoint_17a952530a808943,
          mid_getEast_17a952530a808943,
          mid_getElevation_fe16490ba41bf1d5,
          mid_getElevation_13ec59221cabb99d,
          mid_getNadir_17a952530a808943,
          mid_getNorth_17a952530a808943,
          mid_getPVCoordinates_20557c175f7cd899,
          mid_getParentShape_883d26889ee03ca8,
          mid_getPoint_fabc97b1aefe5844,
          mid_getPoint_4b35f4d29a9f8681,
          mid_getPosition_5343d34e5fbffcdd,
          mid_getRange_fe16490ba41bf1d5,
          mid_getRange_13ec59221cabb99d,
          mid_getRangeRate_ef900b74d4118403,
          mid_getRangeRate_92f9516c8df30724,
          mid_getSouth_17a952530a808943,
          mid_getTrackingCoordinates_c1bd04ec8d296726,
          mid_getTrackingCoordinates_001f8f11e26c51a3,
          mid_getWest_17a952530a808943,
          mid_getZenith_17a952530a808943,
          mid_pointAtDistance_5a33102dde606490,
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
        jdouble getAzimuth(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement getAzimuth(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
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
        jdouble getRange(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement getRange(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement getRangeRate(const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        jdouble getRangeRate(const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
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
