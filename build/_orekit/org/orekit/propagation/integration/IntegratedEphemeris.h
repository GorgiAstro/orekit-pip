#ifndef org_orekit_propagation_integration_IntegratedEphemeris_H
#define org_orekit_propagation_integration_IntegratedEphemeris_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class DenseOutputModel;
    }
  }
  namespace orekit {
    namespace propagation {
      namespace integration {
        class StateMapper;
      }
      class SpacecraftState;
      class BoundedPropagator;
      class PropagationType;
      class AdditionalStateProvider;
    }
    namespace utils {
      class DoubleArrayDictionary;
      class TimeStampedPVCoordinates;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace attitudes {
      class AttitudeProvider;
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
            mid_init$_6bc781ad2aa5b2b2,
            mid_getFrame_6c9bc0a928c56d4e,
            mid_getInitialState_15e85d5301b90ef8,
            mid_getMaxDate_7a97f7e149e79afb,
            mid_getMinDate_7a97f7e149e79afb,
            mid_getPVCoordinates_17742a9a6655bdb1,
            mid_resetInitialState_8655761ebf04b503,
            mid_setAttitudeProvider_8fa6c0c067ead7b2,
            mid_propagateOrbit_9e937c0ae63d8022,
            mid_resetIntermediateState_45bf76e836befe86,
            mid_getMass_b0b988f941da47d8,
            mid_updateAdditionalStates_2c4cc16b11f79a6c,
            mid_basicPropagate_15e0d02372b1347b,
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
