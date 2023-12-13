#ifndef org_orekit_rugged_utils_ExtendedEllipsoid_H
#define org_orekit_rugged_utils_ExtendedEllipsoid_H

#include "org/orekit/bodies/OneAxisEllipsoid.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace bodies {
      class GeodeticPoint;
    }
    namespace frames {
      class Frame;
    }
    namespace rugged {
      namespace utils {
        class NormalizedGeodeticPoint;
      }
    }
    namespace time {
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
    namespace rugged {
      namespace utils {

        class ExtendedEllipsoid : public ::org::orekit::bodies::OneAxisEllipsoid {
         public:
          enum {
            mid_init$_9105dccfcf1a0a84,
            mid_convertLos_301a09f2b4c627de,
            mid_convertLos_b587e9d28a0048fe,
            mid_pointAtAltitude_21c804d1eea56b9e,
            mid_pointAtLatitude_196d74ae532b61ef,
            mid_pointAtLongitude_21c804d1eea56b9e,
            mid_pointOnGround_74f6e7db1afa1d6c,
            mid_transform_a840d9913a98925f,
            mid_transform_f67fa82bac3192f0,
            mid_transform_dd2ad2f711f150ec,
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
