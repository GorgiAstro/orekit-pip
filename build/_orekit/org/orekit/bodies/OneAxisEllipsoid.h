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
    class CalculusFieldElement;
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
      }
    }
  }
  namespace orekit {
    namespace bodies {
      class FieldGeodeticPoint;
      class GeodeticPoint;
      class BodyShape;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class PVCoordinates;
    }
    namespace frames {
      class Frame;
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
          mid_init$_9105dccfcf1a0a84,
          mid_azimuthBetweenPoints_ed6298241367a2ac,
          mid_azimuthBetweenPoints_75a809c1a78684c5,
          mid_geodeticToIsometricLatitude_04fd0666b613d2ab,
          mid_geodeticToIsometricLatitude_6e00dc5eb352fe51,
          mid_getBodyFrame_2c51111cc6894ba1,
          mid_getCartesianIntersectionPoint_7d6dd31d54156357,
          mid_getCartesianIntersectionPoint_96cf0438ee7c1d65,
          mid_getEccentricity_b74f83833fdad017,
          mid_getEccentricitySquared_b74f83833fdad017,
          mid_getEquatorialRadius_b74f83833fdad017,
          mid_getFlattening_b74f83833fdad017,
          mid_getIntersectionPoint_f1db6d4c78519d48,
          mid_getIntersectionPoint_66b39d6d84447197,
          mid_lowestAltitudeIntermediate_15e1a026853612be,
          mid_lowestAltitudeIntermediate_820cc059309969e2,
          mid_projectToGround_3cbe213b2c291f18,
          mid_projectToGround_feded476b8bdfcfc,
          mid_setAngularThreshold_8ba9fe7a847cecad,
          mid_transform_6aa36b82e3b80b58,
          mid_transform_a840d9913a98925f,
          mid_transform_93de77ed9854e321,
          mid_transform_f67fa82bac3192f0,
          mid_transform_1f5aa9741e58fa64,
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
