#ifndef org_orekit_propagation_analytical_AbstractAnalyticalPropagator_H
#define org_orekit_propagation_analytical_AbstractAnalyticalPropagator_H

#include "org/orekit/propagation/AbstractPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class EphemerisGenerator;
      namespace events {
        class EventDetector;
      }
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
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
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
            mid_addEventDetector_8ef30a2ad40caceb,
            mid_clearEventsDetectors_7ae3461a92a43152,
            mid_getEphemerisGenerator_dd0e78d2be8aaf34,
            mid_getEventsDetectors_cfcfd130f9013e3e,
            mid_getPvProvider_7044cb1966c8a481,
            mid_propagate_afc18c81ed763a96,
            mid_acceptStep_7a6cf16336efee55,
            mid_getMass_e912d21057defe63,
            mid_resetIntermediateState_9658cf3eaef14ef5,
            mid_propagateOrbit_6f58641238e8a9c4,
            mid_getJacobiansColumnsNames_a6156df500549a58,
            mid_basicPropagate_889031abe87f3b14,
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
