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
    namespace utils {
      class TimeStampedPVCoordinates;
      class DoubleArrayDictionary;
    }
    namespace frames {
      class Frame;
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
            mid_init$_7645711d5bf14241,
            mid_getFrame_2c51111cc6894ba1,
            mid_getInitialState_9d155cc8314c99cf,
            mid_getMaxDate_c325492395d89b24,
            mid_getMinDate_c325492395d89b24,
            mid_getPVCoordinates_e5d15ef236cd9ffe,
            mid_resetInitialState_280c3390961e0a50,
            mid_setAttitudeProvider_8e4d3ea100bc0095,
            mid_getMass_fd347811007a6ba3,
            mid_updateAdditionalStates_c3c52b1257139045,
            mid_basicPropagate_4f0008999861ca31,
            mid_resetIntermediateState_1c47c97cdbc7e206,
            mid_propagateOrbit_5df6dcb5c4123339,
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
