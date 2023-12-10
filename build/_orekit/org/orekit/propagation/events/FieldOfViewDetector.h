#ifndef org_orekit_propagation_events_FieldOfViewDetector_H
#define org_orekit_propagation_events_FieldOfViewDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {
        class FieldOfView;
      }
    }
    namespace propagation {
      namespace events {
        class VisibilityTrigger;
        class FieldOfViewDetector;
      }
      class SpacecraftState;
    }
    namespace utils {
      class PVCoordinatesProvider;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class FieldOfViewDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_eb7f6b32b4c4c016,
            mid_init$_8c3123eda1317708,
            mid_g_66a2f071e6ed0c06,
            mid_getFOV_f51bf66c035a133c,
            mid_getPVTarget_7044cb1966c8a481,
            mid_create_899b1be126382817,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldOfViewDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldOfViewDetector(const FieldOfViewDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          FieldOfViewDetector(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::geometry::fov::FieldOfView &);
          FieldOfViewDetector(const ::org::orekit::utils::PVCoordinatesProvider &, jdouble, const ::org::orekit::propagation::events::VisibilityTrigger &, const ::org::orekit::geometry::fov::FieldOfView &);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::geometry::fov::FieldOfView getFOV() const;
          ::org::orekit::utils::PVCoordinatesProvider getPVTarget() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(FieldOfViewDetector);
        extern PyTypeObject *PY_TYPE(FieldOfViewDetector);

        class t_FieldOfViewDetector {
        public:
          PyObject_HEAD
          FieldOfViewDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldOfViewDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldOfViewDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldOfViewDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
