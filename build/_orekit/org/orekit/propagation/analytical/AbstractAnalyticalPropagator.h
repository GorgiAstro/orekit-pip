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
            mid_addEventDetector_e13564f833403504,
            mid_clearEventsDetectors_a1fa5dae97ea5ed2,
            mid_getEphemerisGenerator_5df44e253e7e7782,
            mid_getEventsDetectors_cb666ea1a15f5210,
            mid_getPvProvider_8a41319e47f3bd7c,
            mid_propagate_6845ec704c846b03,
            mid_acceptStep_40f13975bd10671f,
            mid_getMass_fd347811007a6ba3,
            mid_basicPropagate_4f0008999861ca31,
            mid_getJacobiansColumnsNames_e62d3bb06d56d7e3,
            mid_resetIntermediateState_1c47c97cdbc7e206,
            mid_propagateOrbit_5df6dcb5c4123339,
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
