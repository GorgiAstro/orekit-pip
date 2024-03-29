#ifndef org_orekit_propagation_events_AngularSeparationDetector_H
#define org_orekit_propagation_events_AngularSeparationDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class AngularSeparationDetector;
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

        class AngularSeparationDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_7b82b8f25db8b260,
            mid_g_b443ba1cc794b916,
            mid_getBeacon_781ab98286dad7d5,
            mid_getObserver_781ab98286dad7d5,
            mid_getProximityAngle_9981f74b2d109da6,
            mid_create_5bb85a5919736449,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AngularSeparationDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AngularSeparationDetector(const AngularSeparationDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          AngularSeparationDetector(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::utils::PVCoordinatesProvider &, jdouble);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::utils::PVCoordinatesProvider getBeacon() const;
          ::org::orekit::utils::PVCoordinatesProvider getObserver() const;
          jdouble getProximityAngle() const;
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
        extern PyType_Def PY_TYPE_DEF(AngularSeparationDetector);
        extern PyTypeObject *PY_TYPE(AngularSeparationDetector);

        class t_AngularSeparationDetector {
        public:
          PyObject_HEAD
          AngularSeparationDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AngularSeparationDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AngularSeparationDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AngularSeparationDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
