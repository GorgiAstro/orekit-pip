#ifndef org_orekit_propagation_analytical_AggregateBoundedPropagator_H
#define org_orekit_propagation_analytical_AggregateBoundedPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace propagation {
      class BoundedPropagator;
      class SpacecraftState;
    }
    namespace frames {
      class Frame;
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
            mid_init$_7d8f123763cd893c,
            mid_init$_21d6c74f3613f3f1,
            mid_getInitialState_9d155cc8314c99cf,
            mid_getMaxDate_c325492395d89b24,
            mid_getMinDate_c325492395d89b24,
            mid_getPVCoordinates_e5d15ef236cd9ffe,
            mid_getPropagators_8dd7b68149ce41ea,
            mid_resetInitialState_280c3390961e0a50,
            mid_getMass_fd347811007a6ba3,
            mid_basicPropagate_4f0008999861ca31,
            mid_resetIntermediateState_1c47c97cdbc7e206,
            mid_propagateOrbit_5df6dcb5c4123339,
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
