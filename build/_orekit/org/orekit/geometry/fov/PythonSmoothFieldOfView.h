#ifndef org_orekit_geometry_fov_PythonSmoothFieldOfView_H
#define org_orekit_geometry_fov_PythonSmoothFieldOfView_H

#include "org/orekit/geometry/fov/SmoothFieldOfView.h"

namespace java {
  namespace lang {
    class Throwable;
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
    namespace propagation {
      namespace events {
        class VisibilityTrigger;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        class PythonSmoothFieldOfView : public ::org::orekit::geometry::fov::SmoothFieldOfView {
         public:
          enum {
            mid_init$_7b3ba1964c11031c,
            mid_directionAt_5f993a721a1d8c59,
            mid_finalize_7ae3461a92a43152,
            mid_offsetFromBoundary_9e70aa9759fb6e3e,
            mid_projectToBoundary_afd63a09f6d01e4c,
            mid_pythonDecRef_7ae3461a92a43152,
            mid_pythonExtension_a27fc9afd27e559d,
            mid_pythonExtension_fefb08975c10f0a1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonSmoothFieldOfView(jobject obj) : ::org::orekit::geometry::fov::SmoothFieldOfView(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonSmoothFieldOfView(const PythonSmoothFieldOfView& obj) : ::org::orekit::geometry::fov::SmoothFieldOfView(obj) {}

          PythonSmoothFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble);

          ::org::hipparchus::geometry::euclidean::threed::Vector3D directionAt(jdouble) const;
          void finalize() const;
          jdouble offsetFromBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, const ::org::orekit::propagation::events::VisibilityTrigger &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D projectToBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonSmoothFieldOfView);
        extern PyTypeObject *PY_TYPE(PythonSmoothFieldOfView);

        class t_PythonSmoothFieldOfView {
        public:
          PyObject_HEAD
          PythonSmoothFieldOfView object;
          static PyObject *wrap_Object(const PythonSmoothFieldOfView&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
