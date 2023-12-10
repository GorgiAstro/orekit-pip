#ifndef org_orekit_propagation_events_ExtremumApproachDetector_H
#define org_orekit_propagation_events_ExtremumApproachDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class ExtremumApproachDetector;
      }
      class SpacecraftState;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class PVCoordinates;
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

        class ExtremumApproachDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_36de6b722535732f,
            mid_computeDeltaPV_dc9882cd5637079b,
            mid_g_432f3d328c15ec82,
            mid_getSecondaryPVProvider_903aca6bb4523e29,
            mid_create_14bbdf1253de117f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ExtremumApproachDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ExtremumApproachDetector(const ExtremumApproachDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          ExtremumApproachDetector(const ::org::orekit::utils::PVCoordinatesProvider &);

          ::org::orekit::utils::PVCoordinates computeDeltaPV(const ::org::orekit::propagation::SpacecraftState &) const;
          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::utils::PVCoordinatesProvider getSecondaryPVProvider() const;
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
        extern PyType_Def PY_TYPE_DEF(ExtremumApproachDetector);
        extern PyTypeObject *PY_TYPE(ExtremumApproachDetector);

        class t_ExtremumApproachDetector {
        public:
          PyObject_HEAD
          ExtremumApproachDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ExtremumApproachDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ExtremumApproachDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ExtremumApproachDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
