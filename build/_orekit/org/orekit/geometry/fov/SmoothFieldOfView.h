#ifndef org_orekit_geometry_fov_SmoothFieldOfView_H
#define org_orekit_geometry_fov_SmoothFieldOfView_H

#include "org/orekit/geometry/fov/AbstractFieldOfView.h"

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
      class Transform;
    }
    namespace bodies {
      class GeodeticPoint;
      class OneAxisEllipsoid;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
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
            mid_getCenter_8b724f8b4fdad1a2,
            mid_getFootprint_f20a8500298f8a78,
            mid_getX_8b724f8b4fdad1a2,
            mid_getY_8b724f8b4fdad1a2,
            mid_getZ_8b724f8b4fdad1a2,
            mid_directionAt_498f52cd8e5a7072,
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
