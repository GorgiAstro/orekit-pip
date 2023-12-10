#ifndef org_orekit_geometry_fov_PolygonalFieldOfView_H
#define org_orekit_geometry_fov_PolygonalFieldOfView_H

#include "org/orekit/geometry/fov/AbstractFieldOfView.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class VisibilityTrigger;
      }
    }
    namespace geometry {
      namespace fov {
        class PolygonalFieldOfView$DefiningConeType;
      }
    }
    namespace bodies {
      class OneAxisEllipsoid;
      class GeodeticPoint;
    }
    namespace frames {
      class Transform;
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

        class PolygonalFieldOfView : public ::org::orekit::geometry::fov::AbstractFieldOfView {
         public:
          enum {
            mid_init$_991a5885d40d9dc2,
            mid_init$_d0c690fdba21c866,
            mid_getFootprint_d179f90e70a637c1,
            mid_getZone_5a6ba0b36fb0268c,
            mid_offsetFromBoundary_92bc6ba59ebf6937,
            mid_projectToBoundary_d0fe714ef34714f7,
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
