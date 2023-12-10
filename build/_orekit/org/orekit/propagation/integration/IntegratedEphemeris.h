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
      class PropagationType;
      class BoundedPropagator;
      class SpacecraftState;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class DoubleArrayDictionary;
      class TimeStampedPVCoordinates;
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
            mid_init$_6d4da7daec623631,
            mid_getFrame_b86f9f61d97a7244,
            mid_getInitialState_c6311115fea01a34,
            mid_getMaxDate_85703d13e302437e,
            mid_getMinDate_85703d13e302437e,
            mid_getPVCoordinates_cfeec55f7c63ec64,
            mid_resetInitialState_0ee5c56004643a2e,
            mid_setAttitudeProvider_3cff7c75ea06698c,
            mid_propagateOrbit_7a8f4c854607bed6,
            mid_getMass_bf1d7732f1acb697,
            mid_resetIntermediateState_33f4696e4edaa03c,
            mid_updateAdditionalStates_f43130c50e9fafeb,
            mid_basicPropagate_fbff2ff5554d95e1,
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
