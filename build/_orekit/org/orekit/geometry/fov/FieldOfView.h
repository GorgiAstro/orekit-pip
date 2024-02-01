#ifndef org_orekit_geometry_fov_FieldOfView_H
#define org_orekit_geometry_fov_FieldOfView_H

#include "java/lang/Object.h"

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
    }
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
            mid_getFootprint_0ed2f5155c3855f6,
            mid_getMargin_9981f74b2d109da6,
            mid_offsetFromBoundary_7ed10fb0bfbbf1c4,
            mid_projectToBoundary_53c542efd8574582,
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
