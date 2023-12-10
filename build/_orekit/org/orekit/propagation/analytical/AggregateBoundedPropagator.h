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
      class BoundedPropagator;
      class SpacecraftState;
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
            mid_init$_f72f53318f80c525,
            mid_init$_d766e632da5d7770,
            mid_getInitialState_c6311115fea01a34,
            mid_getMaxDate_85703d13e302437e,
            mid_getMinDate_85703d13e302437e,
            mid_getPVCoordinates_cfeec55f7c63ec64,
            mid_getPropagators_d71603ad1730c5c7,
            mid_resetInitialState_0ee5c56004643a2e,
            mid_propagateOrbit_7a8f4c854607bed6,
            mid_getMass_bf1d7732f1acb697,
            mid_resetIntermediateState_33f4696e4edaa03c,
            mid_basicPropagate_fbff2ff5554d95e1,
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
