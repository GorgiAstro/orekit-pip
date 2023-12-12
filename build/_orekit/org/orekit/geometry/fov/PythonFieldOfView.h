#ifndef org_orekit_geometry_fov_PythonFieldOfView_H
#define org_orekit_geometry_fov_PythonFieldOfView_H

#include "java/lang/Object.h"

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
    namespace frames {
      class Transform;
    }
    namespace bodies {
      class GeodeticPoint;
      class OneAxisEllipsoid;
    }
    namespace geometry {
      namespace fov {
        class FieldOfView;
      }
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

        class PythonFieldOfView : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_finalize_0640e6acf969ed28,
            mid_getFootprint_37f5cab3ae6d781a,
            mid_getMargin_557b8123390d8d0c,
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

          explicit PythonFieldOfView(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonFieldOfView(const PythonFieldOfView& obj) : ::java::lang::Object(obj) {}

          PythonFieldOfView();

          void finalize() const;
          ::java::util::List getFootprint(const ::org::orekit::frames::Transform &, const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble) const;
          jdouble getMargin() const;
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
        extern PyType_Def PY_TYPE_DEF(PythonFieldOfView);
        extern PyTypeObject *PY_TYPE(PythonFieldOfView);

        class t_PythonFieldOfView {
        public:
          PyObject_HEAD
          PythonFieldOfView object;
          static PyObject *wrap_Object(const PythonFieldOfView&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
