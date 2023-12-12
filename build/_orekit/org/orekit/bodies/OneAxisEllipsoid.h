#ifndef org_orekit_bodies_OneAxisEllipsoid_H
#define org_orekit_bodies_OneAxisEllipsoid_H

#include "org/orekit/bodies/Ellipsoid.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class BodyShape;
      class GeodeticPoint;
      class FieldGeodeticPoint;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinates;
      class TimeStampedPVCoordinates;
    }
    namespace frames {
      class Frame;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Line;
          class Vector3D;
          class FieldLine;
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
          mid_init$_77eb4a8c540c1776,
          mid_azimuthBetweenPoints_c12f05cc315a69e3,
          mid_azimuthBetweenPoints_f8a18075cef9d5b5,
          mid_geodeticToIsometricLatitude_7e960cd6eee376d8,
          mid_geodeticToIsometricLatitude_6672ad854985cb64,
          mid_getBodyFrame_6c9bc0a928c56d4e,
          mid_getCartesianIntersectionPoint_9e2216b0767a7217,
          mid_getCartesianIntersectionPoint_5b94a85bc390db61,
          mid_getEccentricity_557b8123390d8d0c,
          mid_getEccentricitySquared_557b8123390d8d0c,
          mid_getEquatorialRadius_557b8123390d8d0c,
          mid_getFlattening_557b8123390d8d0c,
          mid_getIntersectionPoint_6391bd6fdaac29a3,
          mid_getIntersectionPoint_884873e1d3d77c4e,
          mid_lowestAltitudeIntermediate_0a6051973c8e743d,
          mid_lowestAltitudeIntermediate_4d15c4bf1b2cd849,
          mid_projectToGround_3d4e9a6447a03aa9,
          mid_projectToGround_4c5eeaf1ff845fca,
          mid_setAngularThreshold_10f281d777284cea,
          mid_transform_8b70a50ea3e1f728,
          mid_transform_8b264141c1de262c,
          mid_transform_50a4031074ed92da,
          mid_transform_8e052cb77f98e021,
          mid_transform_4dfad8dc678d42b2,
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
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getCartesianIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getCartesianIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
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
        ::org::orekit::bodies::FieldGeodeticPoint transform(const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::bodies::FieldGeodeticPoint transform(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::orekit::bodies::GeodeticPoint transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
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
