#ifndef org_orekit_rugged_intersection_ConstantElevationAlgorithm_H
#define org_orekit_rugged_intersection_ConstantElevationAlgorithm_H

#include "java/lang/Object.h"

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
    namespace rugged {
      namespace utils {
        class ExtendedEllipsoid;
        class NormalizedGeodeticPoint;
      }
      namespace api {
        class AlgorithmId;
      }
      namespace intersection {
        class IntersectionAlgorithm;
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
      namespace intersection {

        class ConstantElevationAlgorithm : public ::java::lang::Object {
         public:
          enum {
            mid_init$_77e0f9a1f260e2e5,
            mid_getAlgorithmId_41b1271dfac9173f,
            mid_getElevation_824133ce4aec3505,
            mid_intersection_465c95e4cb53bef3,
            mid_refineIntersection_0b100883a4ceff82,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConstantElevationAlgorithm(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ConstantElevationAlgorithm(const ConstantElevationAlgorithm& obj) : ::java::lang::Object(obj) {}

          ConstantElevationAlgorithm(jdouble);

          ::org::orekit::rugged::api::AlgorithmId getAlgorithmId() const;
          jdouble getElevation(jdouble, jdouble) const;
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        extern PyType_Def PY_TYPE_DEF(ConstantElevationAlgorithm);
        extern PyTypeObject *PY_TYPE(ConstantElevationAlgorithm);

        class t_ConstantElevationAlgorithm {
        public:
          PyObject_HEAD
          ConstantElevationAlgorithm object;
          static PyObject *wrap_Object(const ConstantElevationAlgorithm&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
