#ifndef org_orekit_propagation_analytical_Ephemeris_H
#define org_orekit_propagation_analytical_Ephemeris_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

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
namespace org {
  namespace orekit {
    namespace propagation {
      class StateCovariance;
      class BoundedPropagator;
      class SpacecraftState;
    }
    namespace time {
      class TimeInterpolator;
      class AbsoluteDate;
      class TimeStampedPair;
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        class Ephemeris : public ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator {
         public:
          enum {
            mid_init$_7e65a9ed6be4bebc,
            mid_init$_2ee441fbc689b748,
            mid_init$_d43f63068c548b32,
            mid_init$_df8ca70857921fcd,
            mid_init$_99a5fbadd0cd572e,
            mid_basicPropagate_15e0d02372b1347b,
            mid_checkInputConsistency_df8ca70857921fcd,
            mid_checkStatesAndCovariancesConsistency_aaa4588ba4c2491b,
            mid_getCovariance_85b6ecc270268e0d,
            mid_getCovarianceInterpolator_d0ccac9b4c6bdd55,
            mid_getFrame_6c9bc0a928c56d4e,
            mid_getInitialState_15e85d5301b90ef8,
            mid_getManagedAdditionalStates_5d7d8c500345981d,
            mid_getMaxDate_7a97f7e149e79afb,
            mid_getMinDate_7a97f7e149e79afb,
            mid_getStateInterpolator_1bb20e7ea407bfce,
            mid_isAdditionalStateManaged_fd2162b8a05a22fe,
            mid_resetInitialState_8655761ebf04b503,
            mid_propagateOrbit_9e937c0ae63d8022,
            mid_resetIntermediateState_45bf76e836befe86,
            mid_getMass_b0b988f941da47d8,
            mid_createHarvester_5f0409a66c29e9c1,
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
