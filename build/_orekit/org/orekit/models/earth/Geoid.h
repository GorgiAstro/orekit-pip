#ifndef org_orekit_models_earth_Geoid_H
#define org_orekit_models_earth_Geoid_H

#include "java/lang/Object.h"

namespace org {
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
  }
  namespace orekit {
    namespace models {
      namespace earth {
        class ReferenceEllipsoid;
        class EarthShape;
      }
    }
    namespace bodies {
      class GeodeticPoint;
      class FieldGeodeticPoint;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class NormalizedSphericalHarmonicsProvider;
        }
      }
    }
    namespace utils {
      class TimeStampedPVCoordinates;
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
    namespace models {
      namespace earth {

        class Geoid : public ::java::lang::Object {
         public:
          enum {
            mid_init$_213180f7826041a3,
            mid_getBodyFrame_6c9bc0a928c56d4e,
            mid_getEllipsoid_576f0b44e8384336,
            mid_getIntersectionPoint_6391bd6fdaac29a3,
            mid_getIntersectionPoint_884873e1d3d77c4e,
            mid_getUndulation_b013e8eac006d836,
            mid_projectToGround_3d4e9a6447a03aa9,
            mid_projectToGround_4c5eeaf1ff845fca,
            mid_transform_8b70a50ea3e1f728,
            mid_transform_8b264141c1de262c,
            mid_transform_8e052cb77f98e021,
            mid_transform_4dfad8dc678d42b2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Geoid(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Geoid(const Geoid& obj) : ::java::lang::Object(obj) {}

          Geoid(const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider &, const ::org::orekit::models::earth::ReferenceEllipsoid &);

          ::org::orekit::frames::Frame getBodyFrame() const;
          ::org::orekit::models::earth::ReferenceEllipsoid getEllipsoid() const;
          ::org::orekit::bodies::GeodeticPoint getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::bodies::FieldGeodeticPoint getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
          jdouble getUndulation(jdouble, jdouble, const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::utils::TimeStampedPVCoordinates projectToGround(const ::org::orekit::utils::TimeStampedPVCoordinates &, const ::org::orekit::frames::Frame &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D projectToGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D transform(const ::org::orekit::bodies::FieldGeodeticPoint &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D transform(const ::org::orekit::bodies::GeodeticPoint &) const;
          ::org::orekit::bodies::FieldGeodeticPoint transform(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
          ::org::orekit::bodies::GeodeticPoint transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        extern PyType_Def PY_TYPE_DEF(Geoid);
        extern PyTypeObject *PY_TYPE(Geoid);

        class t_Geoid {
        public:
          PyObject_HEAD
          Geoid object;
          static PyObject *wrap_Object(const Geoid&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
