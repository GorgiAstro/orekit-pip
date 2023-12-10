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
    namespace frames {
      class Frame;
    }
    namespace rugged {
      namespace utils {
        class NormalizedGeodeticPoint;
      }
    }
    namespace bodies {
      class GeodeticPoint;
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
            mid_init$_67a8caec77669819,
            mid_convertLos_ccf2ee059c93e01e,
            mid_convertLos_54b6377056a157af,
            mid_pointAtAltitude_b93b7baa8492af38,
            mid_pointAtLatitude_c7c60b2b206e3e9d,
            mid_pointAtLongitude_b93b7baa8492af38,
            mid_pointOnGround_6f258df101c5dbf8,
            mid_transform_393fcc10540ff032,
            mid_transform_588d378a3b637077,
            mid_transform_cce031b164f2fb00,
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
