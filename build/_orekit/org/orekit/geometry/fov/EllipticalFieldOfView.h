#ifndef org_orekit_geometry_fov_EllipticalFieldOfView_H
#define org_orekit_geometry_fov_EllipticalFieldOfView_H

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

        class EllipticalFieldOfView : public ::org::orekit::geometry::fov::SmoothFieldOfView {
         public:
          enum {
            mid_init$_498dcf63319448e7,
            mid_getFocus1_f88961cca75a2c0a,
            mid_getFocus2_f88961cca75a2c0a,
            mid_getHalfApertureAlongX_557b8123390d8d0c,
            mid_getHalfApertureAlongY_557b8123390d8d0c,
            mid_offsetFromBoundary_d0bb3aecf00cc465,
            mid_projectToBoundary_b48aa9aef740fa79,
            mid_directionAt_20de5f9d51c6611f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EllipticalFieldOfView(jobject obj) : ::org::orekit::geometry::fov::SmoothFieldOfView(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EllipticalFieldOfView(const EllipticalFieldOfView& obj) : ::org::orekit::geometry::fov::SmoothFieldOfView(obj) {}

          EllipticalFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, jdouble, jdouble);

          ::org::hipparchus::geometry::euclidean::threed::Vector3D getFocus1() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getFocus2() const;
          jdouble getHalfApertureAlongX() const;
          jdouble getHalfApertureAlongY() const;
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
        extern PyType_Def PY_TYPE_DEF(EllipticalFieldOfView);
        extern PyTypeObject *PY_TYPE(EllipticalFieldOfView);

        class t_EllipticalFieldOfView {
        public:
          PyObject_HEAD
          EllipticalFieldOfView object;
          static PyObject *wrap_Object(const EllipticalFieldOfView&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
