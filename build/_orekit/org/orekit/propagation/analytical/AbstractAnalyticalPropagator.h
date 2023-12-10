#ifndef org_orekit_propagation_analytical_AbstractAnalyticalPropagator_H
#define org_orekit_propagation_analytical_AbstractAnalyticalPropagator_H

#include "org/orekit/propagation/AbstractPropagator.h"

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
            mid_addEventDetector_efb7003d866d4523,
            mid_clearEventsDetectors_0fa09c18fee449d5,
            mid_getEphemerisGenerator_18d439b26e70ccd0,
            mid_getEventsDetectors_37528d110cff6b74,
            mid_getPvProvider_903aca6bb4523e29,
            mid_propagate_a69ef29c3ea1e1fa,
            mid_acceptStep_a63e58b9dfde9ac7,
            mid_propagateOrbit_7a8f4c854607bed6,
            mid_getMass_bf1d7732f1acb697,
            mid_resetIntermediateState_33f4696e4edaa03c,
            mid_basicPropagate_fbff2ff5554d95e1,
            mid_getJacobiansColumnsNames_2afa36052df4765d,
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
