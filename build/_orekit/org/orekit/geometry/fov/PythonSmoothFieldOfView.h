#ifndef org_orekit_geometry_fov_PythonSmoothFieldOfView_H
#define org_orekit_geometry_fov_PythonSmoothFieldOfView_H

#include "org/orekit/geometry/fov/SmoothFieldOfView.h"

namespace org {
  namespace orekit {
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
namespace java {
  namespace lang {
    class Class;
    class Throwable;
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
            mid_init$_dcbb005903c9a2a8,
            mid_directionAt_98a3eeef43dce47a,
            mid_finalize_ff7cb6c242604316,
            mid_offsetFromBoundary_7ed10fb0bfbbf1c4,
            mid_projectToBoundary_53c542efd8574582,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
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
