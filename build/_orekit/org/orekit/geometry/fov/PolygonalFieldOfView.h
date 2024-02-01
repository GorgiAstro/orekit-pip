#ifndef org_orekit_geometry_fov_PolygonalFieldOfView_H
#define org_orekit_geometry_fov_PolygonalFieldOfView_H

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
    namespace bodies {
      class OneAxisEllipsoid;
      class GeodeticPoint;
    }
    namespace geometry {
      namespace fov {
        class PolygonalFieldOfView$DefiningConeType;
      }
    }
    namespace frames {
      class Transform;
    }
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
      namespace spherical {
        namespace twod {
          class SphericalPolygonsSet;
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

        class PolygonalFieldOfView : public ::org::orekit::geometry::fov::AbstractFieldOfView {
         public:
          enum {
            mid_init$_15e7df17631cc5b4,
            mid_init$_23ec91195dfbe60f,
            mid_getFootprint_0ed2f5155c3855f6,
            mid_getZone_17b2f5c9c3ed683f,
            mid_offsetFromBoundary_7ed10fb0bfbbf1c4,
            mid_projectToBoundary_53c542efd8574582,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PolygonalFieldOfView(jobject obj) : ::org::orekit::geometry::fov::AbstractFieldOfView(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PolygonalFieldOfView(const PolygonalFieldOfView& obj) : ::org::orekit::geometry::fov::AbstractFieldOfView(obj) {}

          PolygonalFieldOfView(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet &, jdouble);
          PolygonalFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, jint, jdouble);

          ::java::util::List getFootprint(const ::org::orekit::frames::Transform &, const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble) const;
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet getZone() const;
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
        extern PyType_Def PY_TYPE_DEF(PolygonalFieldOfView);
        extern PyTypeObject *PY_TYPE(PolygonalFieldOfView);

        class t_PolygonalFieldOfView {
        public:
          PyObject_HEAD
          PolygonalFieldOfView object;
          static PyObject *wrap_Object(const PolygonalFieldOfView&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
