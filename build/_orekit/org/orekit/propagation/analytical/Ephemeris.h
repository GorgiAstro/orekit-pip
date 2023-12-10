#ifndef org_orekit_propagation_analytical_Ephemeris_H
#define org_orekit_propagation_analytical_Ephemeris_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
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
            mid_init$_d1b8ec2000165cbf,
            mid_init$_350dc18a1f44756a,
            mid_init$_6682fdf9be8b3bcf,
            mid_init$_a184da22b0a57732,
            mid_init$_9078d21669db6ed5,
            mid_basicPropagate_889031abe87f3b14,
            mid_checkInputConsistency_a184da22b0a57732,
            mid_checkStatesAndCovariancesConsistency_694ad53d6db8f702,
            mid_getCovariance_fe7043212cbc6b5b,
            mid_getCovarianceInterpolator_c56b7edc0c3c7d86,
            mid_getFrame_c8fe21bcdac65bf6,
            mid_getInitialState_dd3e4a8d51055f1f,
            mid_getManagedAdditionalStates_0f62ccf08eef5924,
            mid_getMaxDate_aaa854c403487cf3,
            mid_getMinDate_aaa854c403487cf3,
            mid_getStateInterpolator_c8e4b57f7805ef06,
            mid_isAdditionalStateManaged_6b161f495ea569b8,
            mid_resetInitialState_2b88003f931f70a7,
            mid_getMass_e912d21057defe63,
            mid_resetIntermediateState_9658cf3eaef14ef5,
            mid_propagateOrbit_6f58641238e8a9c4,
            mid_createHarvester_d3d4ea925a699046,
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
