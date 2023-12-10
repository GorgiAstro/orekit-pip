#ifndef org_orekit_frames_TopocentricFrame_H
#define org_orekit_frames_TopocentricFrame_H

#include "org/orekit/frames/Frame.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    class Field;
  }
  namespace orekit {
    namespace utils {
      class TrackingCoordinates;
      class FieldPVCoordinates;
      class PVCoordinatesProvider;
      class FieldTrackingCoordinates;
      class TimeStampedPVCoordinates;
      class PVCoordinates;
    }
    namespace bodies {
      class BodyShape;
      class FieldGeodeticPoint;
      class GeodeticPoint;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
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
          mid_init$_22214b4e0a0618d9,
          mid_computeLimitVisibilityPoint_e0252b988abb1621,
          mid_getAzimuth_8c23f60ad4db1eb6,
          mid_getAzimuth_a11434d7a0d8b70a,
          mid_getCartesianPoint_d52645e0d4c07563,
          mid_getEast_d52645e0d4c07563,
          mid_getElevation_8c23f60ad4db1eb6,
          mid_getElevation_a11434d7a0d8b70a,
          mid_getNadir_d52645e0d4c07563,
          mid_getNorth_d52645e0d4c07563,
          mid_getPVCoordinates_cfeec55f7c63ec64,
          mid_getParentShape_6f78da94fd048d9d,
          mid_getPoint_82d0a9bcd06489bb,
          mid_getPoint_2b46ad9185564a13,
          mid_getPosition_41a826780212dfea,
          mid_getRange_a11434d7a0d8b70a,
          mid_getRange_8c23f60ad4db1eb6,
          mid_getRangeRate_79226fc2f8237988,
          mid_getRangeRate_d352cafcc3467c37,
          mid_getSouth_d52645e0d4c07563,
          mid_getTrackingCoordinates_eaeabf0239522653,
          mid_getTrackingCoordinates_2f7baca1366109eb,
          mid_getWest_d52645e0d4c07563,
          mid_getZenith_d52645e0d4c07563,
          mid_pointAtDistance_e0252b988abb1621,
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
