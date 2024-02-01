#ifndef org_orekit_bodies_OneAxisEllipsoid_H
#define org_orekit_bodies_OneAxisEllipsoid_H

#include "org/orekit/bodies/Ellipsoid.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class GeodeticPoint;
      class BodyShape;
      class FieldGeodeticPoint;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
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
          class FieldLine;
          class Vector3D;
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
          mid_init$_ba4696e0d7f6f24b,
          mid_azimuthBetweenPoints_d068340f0881721a,
          mid_azimuthBetweenPoints_42ce0d79e4873dba,
          mid_geodeticToIsometricLatitude_bf28ed64d6e8576b,
          mid_geodeticToIsometricLatitude_a3b854adede8eaaa,
          mid_getBodyFrame_cb151471db4570f0,
          mid_getCartesianIntersectionPoint_7cd19c1d95732808,
          mid_getCartesianIntersectionPoint_f772271ca5bb60b6,
          mid_getEccentricity_9981f74b2d109da6,
          mid_getEccentricitySquared_9981f74b2d109da6,
          mid_getEquatorialRadius_9981f74b2d109da6,
          mid_getFlattening_9981f74b2d109da6,
          mid_getIntersectionPoint_9f0bcc9c00772903,
          mid_getIntersectionPoint_ade5649cae5a4672,
          mid_lowestAltitudeIntermediate_6357fc3fac3850cf,
          mid_lowestAltitudeIntermediate_b55048092d248675,
          mid_projectToGround_28dd2a6cc35491d2,
          mid_projectToGround_26b1db430bbeb49e,
          mid_setAngularThreshold_1ad26e8c8c0cd65b,
          mid_transform_f974aaaf2e73b405,
          mid_transform_0bfc32b1890053a9,
          mid_transform_82a0f6c52928ba20,
          mid_transform_52f3336802c12846,
          mid_transform_b9470a5aa5e1e222,
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
