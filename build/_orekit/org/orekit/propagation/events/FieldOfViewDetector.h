#ifndef org_orekit_propagation_events_FieldOfViewDetector_H
#define org_orekit_propagation_events_FieldOfViewDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldOfViewDetector;
        class VisibilityTrigger;
      }
      class SpacecraftState;
    }
    namespace geometry {
      namespace fov {
        class FieldOfView;
      }
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
            mid_init$_f5ad1c4a6625cdb3,
            mid_init$_5cfd591e66d1d8ce,
            mid_g_b443ba1cc794b916,
            mid_getFOV_6fdfc08762f52cd9,
            mid_getPVTarget_781ab98286dad7d5,
            mid_create_5937df4c5c34c4af,
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
