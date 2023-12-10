#ifndef org_orekit_propagation_analytical_AggregateBoundedPropagator_H
#define org_orekit_propagation_analytical_AggregateBoundedPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace propagation {
      class BoundedPropagator;
      class SpacecraftState;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class Collection;
    class NavigableMap;
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

        class AggregateBoundedPropagator : public ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator {
         public:
          enum {
            mid_init$_26b3669ec54017ce,
            mid_init$_66ccee43e2526fcb,
            mid_getInitialState_dd3e4a8d51055f1f,
            mid_getMaxDate_aaa854c403487cf3,
            mid_getMinDate_aaa854c403487cf3,
            mid_getPVCoordinates_20557c175f7cd899,
            mid_getPropagators_08b23a9584a26070,
            mid_resetInitialState_2b88003f931f70a7,
            mid_getMass_e912d21057defe63,
            mid_resetIntermediateState_9658cf3eaef14ef5,
            mid_propagateOrbit_6f58641238e8a9c4,
            mid_basicPropagate_889031abe87f3b14,
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
