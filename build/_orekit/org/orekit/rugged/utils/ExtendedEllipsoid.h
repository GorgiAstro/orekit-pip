#ifndef org_orekit_rugged_utils_ExtendedEllipsoid_H
#define org_orekit_rugged_utils_ExtendedEllipsoid_H

#include "org/orekit/bodies/OneAxisEllipsoid.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace rugged {
      namespace utils {
        class NormalizedGeodeticPoint;
      }
    }
    namespace bodies {
      class GeodeticPoint;
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
            mid_init$_b0fb2e2980abbca2,
            mid_convertLos_e2a27ed5c4e12f6f,
            mid_convertLos_82744d9863c444fe,
            mid_pointAtAltitude_de52532c17b2a672,
            mid_pointAtLatitude_a6d54ec6f4d1012e,
            mid_pointAtLongitude_de52532c17b2a672,
            mid_pointOnGround_d269da9b33be9c15,
            mid_transform_6cf64433187e46c3,
            mid_transform_dd18b1b42137f809,
            mid_transform_5402a59525ad1a15,
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
