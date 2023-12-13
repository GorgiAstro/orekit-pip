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
    namespace utils {
      class PVCoordinatesProvider;
    }
    namespace propagation {
      namespace events {
        class VisibilityTrigger;
        class FieldOfViewDetector;
      }
      class SpacecraftState;
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
            mid_init$_8d7a38bdadb78aae,
            mid_init$_d5b4913b1a211725,
            mid_g_a17ea857ce74d258,
            mid_getFOV_f16dd2df58a56a14,
            mid_getPVTarget_8a41319e47f3bd7c,
            mid_create_aa1eca89cc481895,
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
