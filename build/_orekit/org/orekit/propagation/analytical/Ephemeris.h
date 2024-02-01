#ifndef org_orekit_propagation_analytical_Ephemeris_H
#define org_orekit_propagation_analytical_Ephemeris_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class TimeInterpolator;
      class TimeStampedPair;
      class AbsoluteDate;
    }
    namespace propagation {
      class StateCovariance;
      class BoundedPropagator;
      class SpacecraftState;
    }
    namespace frames {
      class Frame;
    }
    namespace orbits {
      class Orbit;
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
            mid_init$_26a46e5a5c0ee345,
            mid_init$_a87fec2ffab2c1fc,
            mid_init$_e8a5aea010c0672d,
            mid_init$_c346a54c93891220,
            mid_init$_082ed74cc9efab42,
            mid_basicPropagate_1e982279849c3b65,
            mid_checkInputConsistency_c346a54c93891220,
            mid_checkStatesAndCovariancesConsistency_a7e27987d82c9ab2,
            mid_getCovariance_0a5b62f83fd7b8a6,
            mid_getCovarianceInterpolator_aa56605e3771f379,
            mid_getFrame_cb151471db4570f0,
            mid_getInitialState_8fbfa58855031235,
            mid_getManagedAdditionalStates_f81c0644d57ae495,
            mid_getMaxDate_80e11148db499dda,
            mid_getMinDate_80e11148db499dda,
            mid_getStateInterpolator_73c4976bc58cb3ff,
            mid_isAdditionalStateManaged_df4c65b2aede5c41,
            mid_resetInitialState_72b846eb87f3af9a,
            mid_getMass_209f08246d708042,
            mid_createHarvester_d0aee1b2c15f4d53,
            mid_propagateOrbit_776cca2e85dfe61d,
            mid_resetIntermediateState_b69b5541e48d21c0,
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
