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
          class FieldLine;
          class Vector3D;
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
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace bodies {
      class FieldGeodeticPoint;
      class GeodeticPoint;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
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
            mid_init$_4df5b2f5167a1585,
            mid_getBodyFrame_cb151471db4570f0,
            mid_getEllipsoid_cff2eba11ebd2420,
            mid_getIntersectionPoint_9f0bcc9c00772903,
            mid_getIntersectionPoint_ade5649cae5a4672,
            mid_getUndulation_aae72683f06306ac,
            mid_projectToGround_28dd2a6cc35491d2,
            mid_projectToGround_26b1db430bbeb49e,
            mid_transform_f974aaaf2e73b405,
            mid_transform_0bfc32b1890053a9,
            mid_transform_82a0f6c52928ba20,
            mid_transform_52f3336802c12846,
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
