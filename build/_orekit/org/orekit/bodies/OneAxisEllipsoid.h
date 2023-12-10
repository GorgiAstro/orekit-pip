#ifndef org_orekit_bodies_OneAxisEllipsoid_H
#define org_orekit_bodies_OneAxisEllipsoid_H

#include "org/orekit/bodies/Ellipsoid.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldLine;
          class FieldVector3D;
          class Vector3D;
          class Line;
        }
      }
    }
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
      }
    }
  }
  namespace orekit {
    namespace bodies {
      class GeodeticPoint;
      class BodyShape;
      class FieldGeodeticPoint;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class PVCoordinates;
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
          mid_init$_b0fb2e2980abbca2,
          mid_azimuthBetweenPoints_a8e4a0dd2661b2d0,
          mid_azimuthBetweenPoints_b1542168e1baec35,
          mid_geodeticToIsometricLatitude_dcbc7ce2902fa136,
          mid_geodeticToIsometricLatitude_a4b1871f4d29e58b,
          mid_getBodyFrame_b86f9f61d97a7244,
          mid_getCartesianIntersectionPoint_aca444df6b127f07,
          mid_getCartesianIntersectionPoint_efede67c706139e8,
          mid_getEccentricity_dff5885c2c873297,
          mid_getEccentricitySquared_dff5885c2c873297,
          mid_getEquatorialRadius_dff5885c2c873297,
          mid_getFlattening_dff5885c2c873297,
          mid_getIntersectionPoint_ec4b828b0bd3964b,
          mid_getIntersectionPoint_e81d59d1bc381e5e,
          mid_lowestAltitudeIntermediate_51836b0574583a60,
          mid_lowestAltitudeIntermediate_ee2d5dca684c02a1,
          mid_projectToGround_7ddc39790e3dd04b,
          mid_projectToGround_73ba258c5f91e9db,
          mid_setAngularThreshold_17db3a65980d3441,
          mid_transform_5f1451dffd8cde56,
          mid_transform_6cf64433187e46c3,
          mid_transform_dd18b1b42137f809,
          mid_transform_e019f2426bfb11d5,
          mid_transform_9957e685900e59e0,
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
        ::org::orekit::bodies::GeodeticPoint transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::bodies::FieldGeodeticPoint transform(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
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
