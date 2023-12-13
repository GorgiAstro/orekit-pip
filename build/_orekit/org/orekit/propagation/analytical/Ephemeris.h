#ifndef org_orekit_propagation_analytical_Ephemeris_H
#define org_orekit_propagation_analytical_Ephemeris_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      class StateCovariance;
      class BoundedPropagator;
      class SpacecraftState;
    }
    namespace orbits {
      class Orbit;
    }
    namespace time {
      class TimeStampedPair;
      class AbsoluteDate;
      class TimeInterpolator;
    }
    namespace frames {
      class Frame;
    }
  }
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Optional;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        class Ephemeris : public ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator {
         public:
          enum {
            mid_init$_33800eba82168d94,
            mid_init$_a270f372b14e8ccf,
            mid_init$_76b7d84534d086f1,
            mid_init$_29c95222b0ba8aa4,
            mid_init$_1984a4ea061303a5,
            mid_basicPropagate_4f0008999861ca31,
            mid_checkInputConsistency_29c95222b0ba8aa4,
            mid_checkStatesAndCovariancesConsistency_29c3e061cbeaa98b,
            mid_getCovariance_9a244c8ef0b05dc0,
            mid_getCovarianceInterpolator_9fe5189c8c3b230d,
            mid_getFrame_2c51111cc6894ba1,
            mid_getInitialState_9d155cc8314c99cf,
            mid_getManagedAdditionalStates_0f94e41879ab7062,
            mid_getMaxDate_c325492395d89b24,
            mid_getMinDate_c325492395d89b24,
            mid_getStateInterpolator_04638ce011c1f261,
            mid_isAdditionalStateManaged_cde6b28e15c96b75,
            mid_resetInitialState_280c3390961e0a50,
            mid_getMass_fd347811007a6ba3,
            mid_resetIntermediateState_1c47c97cdbc7e206,
            mid_propagateOrbit_5df6dcb5c4123339,
            mid_createHarvester_f85b53b28e0fe6bb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Ephemeris(jobject obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Ephemeris(const Ephemeris& obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {}

          Ephemeris(const ::java::util::List &, jint);
          Ephemeris(const ::java::util::List &, const ::org::orekit::time::TimeInterpolator &);
          Ephemeris(const ::java::util::List &, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::attitudes::AttitudeProvider &);
          Ephemeris(const ::java::util::List &, const ::org::orekit::time::TimeInterpolator &, const ::java::util::List &, const ::org::orekit::time::TimeInterpolator &);
          Ephemeris(const ::java::util::List &, const ::org::orekit::time::TimeInterpolator &, const ::java::util::List &, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::attitudes::AttitudeProvider &);

          ::org::orekit::propagation::SpacecraftState basicPropagate(const ::org::orekit::time::AbsoluteDate &) const;
          static void checkInputConsistency(const ::java::util::List &, const ::org::orekit::time::TimeInterpolator &, const ::java::util::List &, const ::org::orekit::time::TimeInterpolator &);
          static void checkStatesAndCovariancesConsistency(const ::java::util::List &, const ::java::util::List &);
          ::java::util::Optional getCovariance(const ::org::orekit::time::AbsoluteDate &) const;
          ::java::util::Optional getCovarianceInterpolator() const;
          ::org::orekit::frames::Frame getFrame() const;
          ::org::orekit::propagation::SpacecraftState getInitialState() const;
          JArray< ::java::lang::String > getManagedAdditionalStates() const;
          ::org::orekit::time::AbsoluteDate getMaxDate() const;
          ::org::orekit::time::AbsoluteDate getMinDate() const;
          ::org::orekit::time::TimeInterpolator getStateInterpolator() const;
          jboolean isAdditionalStateManaged(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(Ephemeris);
        extern PyTypeObject *PY_TYPE(Ephemeris);

        class t_Ephemeris {
        public:
          PyObject_HEAD
          Ephemeris object;
          static PyObject *wrap_Object(const Ephemeris&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
