#ifndef org_orekit_propagation_analytical_Ephemeris_H
#define org_orekit_propagation_analytical_Ephemeris_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class StateCovariance;
      class BoundedPropagator;
      class SpacecraftState;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class TimeStampedPair;
      class AbsoluteDate;
      class TimeInterpolator;
    }
    namespace orbits {
      class Orbit;
    }
    namespace attitudes {
      class AttitudeProvider;
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
            mid_init$_03acd6a351f054ce,
            mid_init$_ccae413695f0dab4,
            mid_init$_e43529ca1a21e83d,
            mid_init$_33831b7a373bdb29,
            mid_init$_cd5e79efaeff69df,
            mid_basicPropagate_fbff2ff5554d95e1,
            mid_checkInputConsistency_33831b7a373bdb29,
            mid_checkStatesAndCovariancesConsistency_6701c064a13f8d2f,
            mid_getCovariance_c18892d0edac7e3f,
            mid_getCovarianceInterpolator_c5e311a9e5531e7d,
            mid_getFrame_b86f9f61d97a7244,
            mid_getInitialState_c6311115fea01a34,
            mid_getManagedAdditionalStates_692f4257baa8d3c3,
            mid_getMaxDate_85703d13e302437e,
            mid_getMinDate_85703d13e302437e,
            mid_getStateInterpolator_1d0d15c75b6b7aca,
            mid_isAdditionalStateManaged_7edad2c2f64f4d68,
            mid_resetInitialState_0ee5c56004643a2e,
            mid_propagateOrbit_7a8f4c854607bed6,
            mid_getMass_bf1d7732f1acb697,
            mid_resetIntermediateState_33f4696e4edaa03c,
            mid_createHarvester_5cfd2a13971b74c7,
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
