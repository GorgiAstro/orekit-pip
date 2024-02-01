#ifndef org_orekit_geometry_fov_CircularFieldOfView_H
#define org_orekit_geometry_fov_CircularFieldOfView_H

#include "org/orekit/geometry/fov/SmoothFieldOfView.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class VisibilityTrigger;
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
    namespace geometry {
      namespace fov {

        class CircularFieldOfView : public ::org::orekit::geometry::fov::SmoothFieldOfView {
         public:
          enum {
            mid_init$_9024e173b17a6d85,
            mid_getHalfAperture_9981f74b2d109da6,
            mid_offsetFromBoundary_7ed10fb0bfbbf1c4,
            mid_projectToBoundary_53c542efd8574582,
            mid_directionAt_98a3eeef43dce47a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CircularFieldOfView(jobject obj) : ::org::orekit::geometry::fov::SmoothFieldOfView(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CircularFieldOfView(const CircularFieldOfView& obj) : ::org::orekit::geometry::fov::SmoothFieldOfView(obj) {}

          CircularFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, jdouble);

          jdouble getHalfAperture() const;
          jdouble offsetFromBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, const ::org::orekit::propagation::events::VisibilityTrigger &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D projectToBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {
        extern PyType_Def PY_TYPE_DEF(CircularFieldOfView);
        extern PyTypeObject *PY_TYPE(CircularFieldOfView);

        class t_CircularFieldOfView {
        public:
          PyObject_HEAD
          CircularFieldOfView object;
          static PyObject *wrap_Object(const CircularFieldOfView&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
