#ifndef org_orekit_propagation_analytical_AggregateBoundedPropagator_H
#define org_orekit_propagation_analytical_AggregateBoundedPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace java {
  namespace util {
    class Collection;
    class NavigableMap;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class SpacecraftState;
      class BoundedPropagator;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        class AggregateBoundedPropagator : public ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator {
         public:
          enum {
            mid_init$_3abde0be9b9c9773,
            mid_init$_e923c5ed0622afbe,
            mid_getInitialState_15e85d5301b90ef8,
            mid_getMaxDate_7a97f7e149e79afb,
            mid_getMinDate_7a97f7e149e79afb,
            mid_getPVCoordinates_17742a9a6655bdb1,
            mid_getPropagators_60eb75cca6401fd1,
            mid_resetInitialState_8655761ebf04b503,
            mid_propagateOrbit_9e937c0ae63d8022,
            mid_resetIntermediateState_45bf76e836befe86,
            mid_getMass_b0b988f941da47d8,
            mid_basicPropagate_15e0d02372b1347b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AggregateBoundedPropagator(jobject obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AggregateBoundedPropagator(const AggregateBoundedPropagator& obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {}

          AggregateBoundedPropagator(const ::java::util::Collection &);
          AggregateBoundedPropagator(const ::java::util::NavigableMap &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &);

          ::org::orekit::propagation::SpacecraftState getInitialState() const;
          ::org::orekit::time::AbsoluteDate getMaxDate() const;
          ::org::orekit::time::AbsoluteDate getMinDate() const;
          ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
          ::java::util::NavigableMap getPropagators() const;
          void resetInitialState(const ::org::orekit::propagation::SpacecraftState &) const;
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
        extern PyType_Def PY_TYPE_DEF(AggregateBoundedPropagator);
        extern PyTypeObject *PY_TYPE(AggregateBoundedPropagator);

        class t_AggregateBoundedPropagator {
        public:
          PyObject_HEAD
          AggregateBoundedPropagator object;
          static PyObject *wrap_Object(const AggregateBoundedPropagator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
