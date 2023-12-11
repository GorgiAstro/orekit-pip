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
    class Throwable;
    class Class;
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
            mid_init$_8a3775c012d81228,
            mid_directionAt_20de5f9d51c6611f,
            mid_finalize_0640e6acf969ed28,
            mid_offsetFromBoundary_d0bb3aecf00cc465,
            mid_projectToBoundary_b48aa9aef740fa79,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
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
