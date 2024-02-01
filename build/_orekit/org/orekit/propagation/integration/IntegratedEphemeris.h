#ifndef org_orekit_propagation_integration_IntegratedEphemeris_H
#define org_orekit_propagation_integration_IntegratedEphemeris_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class AdditionalStateProvider;
      namespace integration {
        class StateMapper;
      }
      class PropagationType;
      class BoundedPropagator;
      class SpacecraftState;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class DoubleArrayDictionary;
      class TimeStampedPVCoordinates;
    }
    namespace frames {
      class Frame;
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
            mid_init$_81c57bba41e79152,
            mid_getFrame_cb151471db4570f0,
            mid_getInitialState_8fbfa58855031235,
            mid_getMaxDate_80e11148db499dda,
            mid_getMinDate_80e11148db499dda,
            mid_getPVCoordinates_6236a35378ed47a5,
            mid_resetInitialState_72b846eb87f3af9a,
            mid_setAttitudeProvider_fddd0a7d9f33bafa,
            mid_getMass_209f08246d708042,
            mid_updateAdditionalStates_ed3fe207e6fde26f,
            mid_propagateOrbit_776cca2e85dfe61d,
            mid_basicPropagate_1e982279849c3b65,
            mid_resetIntermediateState_b69b5541e48d21c0,
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
