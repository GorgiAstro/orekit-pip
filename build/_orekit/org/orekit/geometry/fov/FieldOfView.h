#ifndef org_orekit_geometry_fov_FieldOfView_H
#define org_orekit_geometry_fov_FieldOfView_H

#include "java/lang/Object.h"

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
      class GeodeticPoint;
      class OneAxisEllipsoid;
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

        class FieldOfView : public ::java::lang::Object {
         public:
          enum {
            mid_getFootprint_f20a8500298f8a78,
            mid_getMargin_b74f83833fdad017,
            mid_offsetFromBoundary_927580832e9083f9,
            mid_projectToBoundary_f21507e4850a184e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldOfView(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldOfView(const FieldOfView& obj) : ::java::lang::Object(obj) {}

          ::java::util::List getFootprint(const ::org::orekit::frames::Transform &, const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble) const;
          jdouble getMargin() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldOfView);
        extern PyTypeObject *PY_TYPE(FieldOfView);

        class t_FieldOfView {
        public:
          PyObject_HEAD
          FieldOfView object;
          static PyObject *wrap_Object(const FieldOfView&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
