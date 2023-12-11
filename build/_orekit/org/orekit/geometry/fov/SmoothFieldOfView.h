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
  namespace orekit {
    namespace frames {
      class Transform;
    }
    namespace bodies {
      class GeodeticPoint;
      class OneAxisEllipsoid;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        class SmoothFieldOfView : public ::org::orekit::geometry::fov::AbstractFieldOfView {
         public:
          enum {
            mid_getCenter_f88961cca75a2c0a,
            mid_getFootprint_37f5cab3ae6d781a,
            mid_getX_f88961cca75a2c0a,
            mid_getY_f88961cca75a2c0a,
            mid_getZ_f88961cca75a2c0a,
            mid_directionAt_20de5f9d51c6611f,
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
