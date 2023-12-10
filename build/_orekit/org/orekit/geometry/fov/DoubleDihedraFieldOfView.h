#ifndef org_orekit_geometry_fov_DoubleDihedraFieldOfView_H
#define org_orekit_geometry_fov_DoubleDihedraFieldOfView_H

#include "org/orekit/geometry/fov/PolygonalFieldOfView.h"

namespace java {
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
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        class DoubleDihedraFieldOfView : public ::org::orekit::geometry::fov::PolygonalFieldOfView {
         public:
          enum {
            mid_init$_ef1625dfb370a71c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DoubleDihedraFieldOfView(jobject obj) : ::org::orekit::geometry::fov::PolygonalFieldOfView(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DoubleDihedraFieldOfView(const DoubleDihedraFieldOfView& obj) : ::org::orekit::geometry::fov::PolygonalFieldOfView(obj) {}

          DoubleDihedraFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, jdouble);
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
        extern PyType_Def PY_TYPE_DEF(DoubleDihedraFieldOfView);
        extern PyTypeObject *PY_TYPE(DoubleDihedraFieldOfView);

        class t_DoubleDihedraFieldOfView {
        public:
          PyObject_HEAD
          DoubleDihedraFieldOfView object;
          static PyObject *wrap_Object(const DoubleDihedraFieldOfView&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
