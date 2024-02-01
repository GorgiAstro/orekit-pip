#ifndef org_orekit_geometry_fov_PythonAbstractFieldOfView_H
#define org_orekit_geometry_fov_PythonAbstractFieldOfView_H

#include "org/orekit/geometry/fov/AbstractFieldOfView.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
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

        class PythonAbstractFieldOfView : public ::org::orekit::geometry::fov::AbstractFieldOfView {
         public:
          enum {
            mid_init$_1ad26e8c8c0cd65b,
            mid_finalize_ff7cb6c242604316,
            mid_getFootprint_0ed2f5155c3855f6,
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

          explicit PythonAbstractFieldOfView(jobject obj) : ::org::orekit::geometry::fov::AbstractFieldOfView(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAbstractFieldOfView(const PythonAbstractFieldOfView& obj) : ::org::orekit::geometry::fov::AbstractFieldOfView(obj) {}

          PythonAbstractFieldOfView(jdouble);

          void finalize() const;
          ::java::util::List getFootprint(const ::org::orekit::frames::Transform &, const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonAbstractFieldOfView);
        extern PyTypeObject *PY_TYPE(PythonAbstractFieldOfView);

        class t_PythonAbstractFieldOfView {
        public:
          PyObject_HEAD
          PythonAbstractFieldOfView object;
          static PyObject *wrap_Object(const PythonAbstractFieldOfView&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
