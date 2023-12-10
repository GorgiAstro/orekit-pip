#ifndef org_orekit_bodies_OneAxisEllipsoid_H
#define org_orekit_bodies_OneAxisEllipsoid_H

#include "org/orekit/bodies/Ellipsoid.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
          class FieldLine;
          class Line;
        }
      }
    }
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
      }
    }
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace utils {
      class PVCoordinates;
      class TimeStampedPVCoordinates;
    }
    namespace bodies {
      class GeodeticPoint;
      class FieldGeodeticPoint;
      class BodyShape;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace bodies {

      class OneAxisEllipsoid : public ::org::orekit::bodies::Ellipsoid {
       public:
        enum {
          mid_init$_67a8caec77669819,
          mid_azimuthBetweenPoints_2387a26b19d33f37,
          mid_azimuthBetweenPoints_1ba6008484813147,
          mid_geodeticToIsometricLatitude_0ba5fed9597b693e,
          mid_geodeticToIsometricLatitude_d3398190482814dc,
          mid_getBodyFrame_c8fe21bcdac65bf6,
          mid_getCartesianIntersectionPoint_d9a4eb6b6b8c2fc9,
          mid_getCartesianIntersectionPoint_979cf7d0fa5caedf,
          mid_getEccentricity_456d9a2f64d6b28d,
          mid_getEccentricitySquared_456d9a2f64d6b28d,
          mid_getEquatorialRadius_456d9a2f64d6b28d,
          mid_getFlattening_456d9a2f64d6b28d,
          mid_getIntersectionPoint_4a2d37785a37d918,
          mid_getIntersectionPoint_9dbbe2475f1298d4,
          mid_lowestAltitudeIntermediate_806e65e833ae195a,
          mid_lowestAltitudeIntermediate_4d9ea686ba1473e3,
          mid_projectToGround_6b6c0bf817ea4492,
          mid_projectToGround_a871d6772929c652,
          mid_setAngularThreshold_77e0f9a1f260e2e5,
          mid_transform_2637885099554561,
          mid_transform_393fcc10540ff032,
          mid_transform_d471208f838d1a3d,
          mid_transform_588d378a3b637077,
          mid_transform_6c1ef4a2ad0aa38e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OneAxisEllipsoid(jobject obj) : ::org::orekit::bodies::Ellipsoid(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OneAxisEllipsoid(const OneAxisEllipsoid& obj) : ::org::orekit::bodies::Ellipsoid(obj) {}

        OneAxisEllipsoid(jdouble, jdouble, const ::org::orekit::frames::Frame &);

        ::org::hipparchus::CalculusFieldElement azimuthBetweenPoints(const ::org::orekit::bodies::FieldGeodeticPoint &, const ::org::orekit::bodies::FieldGeodeticPoint &) const;
        jdouble azimuthBetweenPoints(const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::bodies::GeodeticPoint &) const;
        jdouble geodeticToIsometricLatitude(jdouble) const;
        ::org::hipparchus::CalculusFieldElement geodeticToIsometricLatitude(const ::org::hipparchus::CalculusFieldElement &) const;
        ::org::orekit::frames::Frame getBodyFrame() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getCartesianIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getCartesianIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        jdouble getEccentricity() const;
        jdouble getEccentricitySquared() const;
        jdouble getEquatorialRadius() const;
        jdouble getFlattening() const;
        ::org::orekit::bodies::GeodeticPoint getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::bodies::FieldGeodeticPoint getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::orekit::bodies::FieldGeodeticPoint lowestAltitudeIntermediate(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &) const;
        ::org::orekit::bodies::GeodeticPoint lowestAltitudeIntermediate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
        ::org::orekit::utils::TimeStampedPVCoordinates projectToGround(const ::org::orekit::utils::TimeStampedPVCoordinates &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D projectToGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        void setAngularThreshold(jdouble) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D transform(const ::org::orekit::bodies::FieldGeodeticPoint &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D transform(const ::org::orekit::bodies::GeodeticPoint &) const;
        ::org::orekit::bodies::FieldGeodeticPoint transform(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::orekit::bodies::GeodeticPoint transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::bodies::FieldGeodeticPoint transform(const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(OneAxisEllipsoid);
      extern PyTypeObject *PY_TYPE(OneAxisEllipsoid);

      class t_OneAxisEllipsoid {
      public:
        PyObject_HEAD
        OneAxisEllipsoid object;
        static PyObject *wrap_Object(const OneAxisEllipsoid&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
