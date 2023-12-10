#ifndef org_orekit_geometry_fov_SmoothFieldOfView_H
#define org_orekit_geometry_fov_SmoothFieldOfView_H

#include "org/orekit/geometry/fov/AbstractFieldOfView.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
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
      class OneAxisEllipsoid;
      class GeodeticPoint;
    }
    namespace frames {
      class Transform;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        class SmoothFieldOfView : public ::org::orekit::geometry::fov::AbstractFieldOfView {
         public:
          enum {
            mid_getCenter_17a952530a808943,
            mid_getFootprint_260aa711ad5a5b78,
            mid_getX_17a952530a808943,
            mid_getY_17a952530a808943,
            mid_getZ_17a952530a808943,
            mid_directionAt_5f993a721a1d8c59,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SmoothFieldOfView(jobject obj) : ::org::orekit::geometry::fov::AbstractFieldOfView(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SmoothFieldOfView(const SmoothFieldOfView& obj) : ::org::orekit::geometry::fov::AbstractFieldOfView(obj) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D getCenter() const;
          ::java::util::List getFootprint(const ::org::orekit::frames::Transform &, const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getX() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getY() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getZ() const;
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
        extern PyType_Def PY_TYPE_DEF(SmoothFieldOfView);
        extern PyTypeObject *PY_TYPE(SmoothFieldOfView);

        class t_SmoothFieldOfView {
        public:
          PyObject_HEAD
          SmoothFieldOfView object;
          static PyObject *wrap_Object(const SmoothFieldOfView&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
