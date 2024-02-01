#ifndef org_orekit_propagation_analytical_AbstractAnalyticalPropagator_H
#define org_orekit_propagation_analytical_AbstractAnalyticalPropagator_H

#include "org/orekit/propagation/AbstractPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class EphemerisGenerator;
      class SpacecraftState;
      namespace events {
        class EventDetector;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinatesProvider;
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
            mid_addEventDetector_d5d8be0538a03d97,
            mid_clearEventsDetectors_ff7cb6c242604316,
            mid_getEphemerisGenerator_9f3d902ece22e1af,
            mid_getEventsDetectors_3bfef5c77ceb081a,
            mid_getPvProvider_781ab98286dad7d5,
            mid_propagate_aaae977c62060398,
            mid_getMass_209f08246d708042,
            mid_acceptStep_04eb5c834f818438,
            mid_getJacobiansColumnsNames_d751c1a57012b438,
            mid_propagateOrbit_776cca2e85dfe61d,
            mid_basicPropagate_1e982279849c3b65,
            mid_resetIntermediateState_b69b5541e48d21c0,
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
