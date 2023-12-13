#ifndef org_orekit_frames_TopocentricFrame_H
#define org_orekit_frames_TopocentricFrame_H

#include "org/orekit/frames/Frame.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
      class FieldTrackingCoordinates;
      class TimeStampedPVCoordinates;
      class PVCoordinatesProvider;
      class PVCoordinates;
      class TrackingCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace bodies {
      class FieldGeodeticPoint;
      class GeodeticPoint;
      class BodyShape;
    }
  }
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
          mid_init$_018f438eb74dd0e8,
          mid_computeLimitVisibilityPoint_df31fb81cb65757b,
          mid_getAzimuth_2342fcde92b13419,
          mid_getAzimuth_f039e0e7c3af3187,
          mid_getCartesianPoint_8b724f8b4fdad1a2,
          mid_getEast_8b724f8b4fdad1a2,
          mid_getElevation_2342fcde92b13419,
          mid_getElevation_f039e0e7c3af3187,
          mid_getNadir_8b724f8b4fdad1a2,
          mid_getNorth_8b724f8b4fdad1a2,
          mid_getPVCoordinates_e5d15ef236cd9ffe,
          mid_getParentShape_95d324082d4f411b,
          mid_getPoint_963915d358b1e63a,
          mid_getPoint_93fb10f989dbc484,
          mid_getPosition_42ef2ff6aede2782,
          mid_getRange_f039e0e7c3af3187,
          mid_getRange_2342fcde92b13419,
          mid_getRangeRate_dd88e7bf2f4356ab,
          mid_getRangeRate_eeb1fd384390b5cb,
          mid_getSouth_8b724f8b4fdad1a2,
          mid_getTrackingCoordinates_ff66135290f6515b,
          mid_getTrackingCoordinates_55136a7ee658aa9b,
          mid_getWest_8b724f8b4fdad1a2,
          mid_getZenith_8b724f8b4fdad1a2,
          mid_pointAtDistance_df31fb81cb65757b,
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
        ::org::hipparchus::CalculusFieldElement getElevation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        jdouble getElevation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getNadir() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getNorth() const;
        ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::bodies::BodyShape getParentShape() const;
        ::org::orekit::bodies::GeodeticPoint getPoint() const;
        ::org::orekit::bodies::FieldGeodeticPoint getPoint(const ::org::hipparchus::Field &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getPosition(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        jdouble getRange(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement getRange(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
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
