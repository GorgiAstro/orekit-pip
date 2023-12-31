#ifndef org_orekit_rugged_intersection_duvenhage_DuvenhageAlgorithm_H
#define org_orekit_rugged_intersection_duvenhage_DuvenhageAlgorithm_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        class IntersectionAlgorithm;
      }
      namespace utils {
        class ExtendedEllipsoid;
        class NormalizedGeodeticPoint;
      }
      namespace api {
        class AlgorithmId;
      }
      namespace raster {
        class TileUpdater;
      }
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
      namespace intersection {
        namespace duvenhage {

          class DuvenhageAlgorithm : public ::java::lang::Object {
           public:
            enum {
              mid_init$_c95673eda778070f,
              mid_getAlgorithmId_d67e2fdbea04a3ee,
              mid_getElevation_99e3200dafc19573,
              mid_intersection_7819c980b8c560ad,
              mid_refineIntersection_882cf21796738f1c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DuvenhageAlgorithm(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DuvenhageAlgorithm(const DuvenhageAlgorithm& obj) : ::java::lang::Object(obj) {}

            DuvenhageAlgorithm(const ::org::orekit::rugged::raster::TileUpdater &, jint, jboolean);

            ::org::orekit::rugged::api::AlgorithmId getAlgorithmId() const;
            jdouble getElevation(jdouble, jdouble) const;
            ::org::orekit::rugged::utils::NormalizedGeodeticPoint intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            ::org::orekit::rugged::utils::NormalizedGeodeticPoint refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        namespace duvenhage {
          extern PyType_Def PY_TYPE_DEF(DuvenhageAlgorithm);
          extern PyTypeObject *PY_TYPE(DuvenhageAlgorithm);

          class t_DuvenhageAlgorithm {
          public:
            PyObject_HEAD
            DuvenhageAlgorithm object;
            static PyObject *wrap_Object(const DuvenhageAlgorithm&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
