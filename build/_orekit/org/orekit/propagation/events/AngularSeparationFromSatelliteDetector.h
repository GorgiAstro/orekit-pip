#ifndef org_orekit_propagation_events_AngularSeparationFromSatelliteDetector_H
#define org_orekit_propagation_events_AngularSeparationFromSatelliteDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class AngularSeparationFromSatelliteDetector;
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

        class AngularSeparationFromSatelliteDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_716a45c480ef72cc,
            mid_g_66a2f071e6ed0c06,
            mid_getPrimaryObject_7044cb1966c8a481,
            mid_getProximityAngle_456d9a2f64d6b28d,
            mid_getSecondaryObject_7044cb1966c8a481,
            mid_create_6b2a1de7ad3407fb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AngularSeparationFromSatelliteDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AngularSeparationFromSatelliteDetector(const AngularSeparationFromSatelliteDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          AngularSeparationFromSatelliteDetector(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::utils::PVCoordinatesProvider &, jdouble);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::utils::PVCoordinatesProvider getPrimaryObject() const;
          jdouble getProximityAngle() const;
          ::org::orekit::utils::PVCoordinatesProvider getSecondaryObject() const;
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
        extern PyType_Def PY_TYPE_DEF(AngularSeparationFromSatelliteDetector);
        extern PyTypeObject *PY_TYPE(AngularSeparationFromSatelliteDetector);

        class t_AngularSeparationFromSatelliteDetector {
        public:
          PyObject_HEAD
          AngularSeparationFromSatelliteDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AngularSeparationFromSatelliteDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AngularSeparationFromSatelliteDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AngularSeparationFromSatelliteDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
