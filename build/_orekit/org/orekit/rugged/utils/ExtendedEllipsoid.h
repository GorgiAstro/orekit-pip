#ifndef org_orekit_rugged_utils_ExtendedEllipsoid_H
#define org_orekit_rugged_utils_ExtendedEllipsoid_H

#include "org/orekit/bodies/OneAxisEllipsoid.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        class NormalizedGeodeticPoint;
      }
    }
    namespace bodies {
      class GeodeticPoint;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
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
    namespace rugged {
      namespace utils {

        class ExtendedEllipsoid : public ::org::orekit::bodies::OneAxisEllipsoid {
         public:
          enum {
            mid_init$_77eb4a8c540c1776,
            mid_convertLos_720ad0a891308b00,
            mid_convertLos_f2c2bb1cbe3e7f2c,
            mid_pointAtAltitude_28192f68d01b7004,
            mid_pointAtLatitude_d3cfd591214a3799,
            mid_pointAtLongitude_28192f68d01b7004,
            mid_pointOnGround_ac6328a8b4073d8f,
            mid_transform_8b264141c1de262c,
            mid_transform_4dfad8dc678d42b2,
            mid_transform_fc69cddc64da17bc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ExtendedEllipsoid(jobject obj) : ::org::orekit::bodies::OneAxisEllipsoid(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ExtendedEllipsoid(const ExtendedEllipsoid& obj) : ::org::orekit::bodies::OneAxisEllipsoid(obj) {}

          ExtendedEllipsoid(jdouble, jdouble, const ::org::orekit::frames::Frame &);

          ::org::hipparchus::geometry::euclidean::threed::Vector3D convertLos(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D convertLos(const ::org::orekit::bodies::GeodeticPoint &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D pointAtAltitude(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D pointAtLatitude(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D pointAtLongitude(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble) const;
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint pointOnGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D transform(const ::org::orekit::bodies::GeodeticPoint &) const;
          ::org::orekit::bodies::GeodeticPoint transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        extern PyType_Def PY_TYPE_DEF(ExtendedEllipsoid);
        extern PyTypeObject *PY_TYPE(ExtendedEllipsoid);

        class t_ExtendedEllipsoid {
        public:
          PyObject_HEAD
          ExtendedEllipsoid object;
          static PyObject *wrap_Object(const ExtendedEllipsoid&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
