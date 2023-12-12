#ifndef org_orekit_propagation_analytical_AbstractAnalyticalPropagator_H
#define org_orekit_propagation_analytical_AbstractAnalyticalPropagator_H

#include "org/orekit/propagation/AbstractPropagator.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class EventDetector;
      }
      class EphemerisGenerator;
      class SpacecraftState;
    }
    namespace utils {
      class PVCoordinatesProvider;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        class AbstractAnalyticalPropagator : public ::org::orekit::propagation::AbstractPropagator {
         public:
          enum {
            mid_addEventDetector_2e2dfaf38ed50d1d,
            mid_clearEventsDetectors_0640e6acf969ed28,
            mid_getEphemerisGenerator_6a3edfe13bcee780,
            mid_getEventsDetectors_12ee61573a18f417,
            mid_getPvProvider_dec199e86bf037eb,
            mid_propagate_b96c0d97a162784d,
            mid_getJacobiansColumnsNames_0d9551367f7ecdef,
            mid_propagateOrbit_9e937c0ae63d8022,
            mid_resetIntermediateState_45bf76e836befe86,
            mid_getMass_b0b988f941da47d8,
            mid_basicPropagate_15e0d02372b1347b,
            mid_acceptStep_5c22a6e0fde1ed6a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractAnalyticalPropagator(jobject obj) : ::org::orekit::propagation::AbstractPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractAnalyticalPropagator(const AbstractAnalyticalPropagator& obj) : ::org::orekit::propagation::AbstractPropagator(obj) {}

          void addEventDetector(const ::org::orekit::propagation::events::EventDetector &) const;
          void clearEventsDetectors() const;
          ::org::orekit::propagation::EphemerisGenerator getEphemerisGenerator() const;
          ::java::util::Collection getEventsDetectors() const;
          ::org::orekit::utils::PVCoordinatesProvider getPvProvider() const;
          ::org::orekit::propagation::SpacecraftState propagate(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        extern PyType_Def PY_TYPE_DEF(AbstractAnalyticalPropagator);
        extern PyTypeObject *PY_TYPE(AbstractAnalyticalPropagator);

        class t_AbstractAnalyticalPropagator {
        public:
          PyObject_HEAD
          AbstractAnalyticalPropagator object;
          static PyObject *wrap_Object(const AbstractAnalyticalPropagator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
