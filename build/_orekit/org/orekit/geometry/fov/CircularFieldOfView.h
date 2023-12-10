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
            mid_init$_a55d6d358b7d4a5f,
            mid_getHalfAperture_dff5885c2c873297,
            mid_offsetFromBoundary_92bc6ba59ebf6937,
            mid_projectToBoundary_d0fe714ef34714f7,
            mid_directionAt_9137bba253a33d9c,
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
