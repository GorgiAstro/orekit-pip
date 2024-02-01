#ifndef org_orekit_propagation_events_AngularSeparationFromSatelliteDetector_H
#define org_orekit_propagation_events_AngularSeparationFromSatelliteDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class AngularSeparationFromSatelliteDetector;
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

        class AngularSeparationFromSatelliteDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_7b82b8f25db8b260,
            mid_g_b443ba1cc794b916,
            mid_getPrimaryObject_781ab98286dad7d5,
            mid_getProximityAngle_9981f74b2d109da6,
            mid_getSecondaryObject_781ab98286dad7d5,
            mid_create_13bb9387d6383a15,
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
