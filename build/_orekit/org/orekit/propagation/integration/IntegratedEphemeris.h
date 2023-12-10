#ifndef org_orekit_propagation_integration_IntegratedEphemeris_H
#define org_orekit_propagation_integration_IntegratedEphemeris_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        class StateMapper;
      }
      class AdditionalStateProvider;
      class SpacecraftState;
      class BoundedPropagator;
      class PropagationType;
    }
    namespace utils {
      class DoubleArrayDictionary;
      class TimeStampedPVCoordinates;
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace ode {
      class DenseOutputModel;
    }
  }
}
namespace java {
  namespace util {
    class List;
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
      namespace integration {

        class IntegratedEphemeris : public ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator {
         public:
          enum {
            mid_init$_73744236e0a228c0,
            mid_getFrame_c8fe21bcdac65bf6,
            mid_getInitialState_dd3e4a8d51055f1f,
            mid_getMaxDate_aaa854c403487cf3,
            mid_getMinDate_aaa854c403487cf3,
            mid_getPVCoordinates_20557c175f7cd899,
            mid_resetInitialState_2b88003f931f70a7,
            mid_setAttitudeProvider_8109c1a27d4471d3,
            mid_getMass_e912d21057defe63,
            mid_resetIntermediateState_9658cf3eaef14ef5,
            mid_propagateOrbit_6f58641238e8a9c4,
            mid_basicPropagate_889031abe87f3b14,
            mid_updateAdditionalStates_81fc6fb6078d2aa7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntegratedEphemeris(jobject obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntegratedEphemeris(const IntegratedEphemeris& obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {}

          IntegratedEphemeris(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::propagation::integration::StateMapper &, const ::org::orekit::propagation::PropagationType &, const ::org::hipparchus::ode::DenseOutputModel &, const ::org::orekit::utils::DoubleArrayDictionary &, const ::java::util::List &, const JArray< ::java::lang::String > &, const JArray< jint > &);

          ::org::orekit::frames::Frame getFrame() const;
          ::org::orekit::propagation::SpacecraftState getInitialState() const;
          ::org::orekit::time::AbsoluteDate getMaxDate() const;
          ::org::orekit::time::AbsoluteDate getMinDate() const;
          ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
          void resetInitialState(const ::org::orekit::propagation::SpacecraftState &) const;
          void setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        extern PyType_Def PY_TYPE_DEF(IntegratedEphemeris);
        extern PyTypeObject *PY_TYPE(IntegratedEphemeris);

        class t_IntegratedEphemeris {
        public:
          PyObject_HEAD
          IntegratedEphemeris object;
          static PyObject *wrap_Object(const IntegratedEphemeris&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
