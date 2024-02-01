#ifndef org_orekit_propagation_analytical_AggregateBoundedPropagator_H
#define org_orekit_propagation_analytical_AggregateBoundedPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace java {
  namespace util {
    class NavigableMap;
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace frames {
      class Frame;
    }
    namespace propagation {
      class BoundedPropagator;
      class SpacecraftState;
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
            mid_init$_82af91bc8dfb5029,
            mid_init$_9c250f9254b2120c,
            mid_getInitialState_8fbfa58855031235,
            mid_getMaxDate_80e11148db499dda,
            mid_getMinDate_80e11148db499dda,
            mid_getPVCoordinates_6236a35378ed47a5,
            mid_getPropagators_93ffcad6c2bfa505,
            mid_resetInitialState_72b846eb87f3af9a,
            mid_getMass_209f08246d708042,
            mid_propagateOrbit_776cca2e85dfe61d,
            mid_basicPropagate_1e982279849c3b65,
            mid_resetIntermediateState_b69b5541e48d21c0,
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
