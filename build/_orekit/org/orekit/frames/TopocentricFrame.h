#ifndef org_orekit_frames_TopocentricFrame_H
#define org_orekit_frames_TopocentricFrame_H

#include "org/orekit/frames/Frame.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class BodyShape;
      class FieldGeodeticPoint;
      class GeodeticPoint;
    }
    namespace utils {
      class FieldTrackingCoordinates;
      class FieldPVCoordinates;
      class TrackingCoordinates;
      class PVCoordinates;
      class TimeStampedPVCoordinates;
      class PVCoordinatesProvider;
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
          mid_init$_13cf7cb6a56f5a80,
          mid_computeLimitVisibilityPoint_b5f28aaa3cf2ecb4,
          mid_getAzimuth_6de8bf4681bff197,
          mid_getAzimuth_755a202772a3b64e,
          mid_getCartesianPoint_032312bdeb3f2f93,
          mid_getEast_032312bdeb3f2f93,
          mid_getElevation_755a202772a3b64e,
          mid_getElevation_6de8bf4681bff197,
          mid_getNadir_032312bdeb3f2f93,
          mid_getNorth_032312bdeb3f2f93,
          mid_getPVCoordinates_6236a35378ed47a5,
          mid_getParentShape_6f2d25f6f71d01ca,
          mid_getPoint_bdca252cae79438c,
          mid_getPoint_d09f9a5f23288a12,
          mid_getPosition_abe01c75f7e82353,
          mid_getRange_755a202772a3b64e,
          mid_getRange_6de8bf4681bff197,
          mid_getRangeRate_ecaa5202c9765db9,
          mid_getRangeRate_ca0e04919483eecd,
          mid_getSouth_032312bdeb3f2f93,
          mid_getTrackingCoordinates_3c1e226d9659d04e,
          mid_getTrackingCoordinates_e722131265d68a84,
          mid_getWest_032312bdeb3f2f93,
          mid_getZenith_032312bdeb3f2f93,
          mid_pointAtDistance_b5f28aaa3cf2ecb4,
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
        ::org::hipparchus::CalculusFieldElement getElevation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        jdouble getElevation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getNadir() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getNorth() const;
        ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::bodies::BodyShape getParentShape() const;
        ::org::orekit::bodies::GeodeticPoint getPoint() const;
        ::org::orekit::bodies::FieldGeodeticPoint getPoint(const ::org::hipparchus::Field &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getPosition(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::CalculusFieldElement getRange(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        jdouble getRange(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
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
