#ifndef org_orekit_rugged_utils_ExtendedEllipsoid_H
#define org_orekit_rugged_utils_ExtendedEllipsoid_H

#include "org/orekit/bodies/OneAxisEllipsoid.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class GeodeticPoint;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace rugged {
      namespace utils {
        class NormalizedGeodeticPoint;
      }
    }
    namespace frames {
      class Frame;
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
            mid_init$_ba4696e0d7f6f24b,
            mid_convertLos_ff0107f3aab86815,
            mid_convertLos_57f9586225dba278,
            mid_pointAtAltitude_ccc9d16c585df973,
            mid_pointAtLatitude_bf8a82e242a36557,
            mid_pointAtLongitude_ccc9d16c585df973,
            mid_pointOnGround_1f1579012f15cefb,
            mid_transform_0bfc32b1890053a9,
            mid_transform_52f3336802c12846,
            mid_transform_a573c8f647ddca05,
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
