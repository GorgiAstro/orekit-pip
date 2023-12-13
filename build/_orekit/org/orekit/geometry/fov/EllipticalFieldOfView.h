#ifndef org_orekit_geometry_fov_EllipticalFieldOfView_H
#define org_orekit_geometry_fov_EllipticalFieldOfView_H

#include "org/orekit/geometry/fov/SmoothFieldOfView.h"

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
    namespace propagation {
      namespace events {
        class VisibilityTrigger;
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
            mid_init$_87a117b93c3ff7ca,
            mid_getFocus1_8b724f8b4fdad1a2,
            mid_getFocus2_8b724f8b4fdad1a2,
            mid_getHalfApertureAlongX_b74f83833fdad017,
            mid_getHalfApertureAlongY_b74f83833fdad017,
            mid_offsetFromBoundary_927580832e9083f9,
            mid_projectToBoundary_f21507e4850a184e,
            mid_directionAt_498f52cd8e5a7072,
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
