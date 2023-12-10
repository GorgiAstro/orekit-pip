#ifndef org_orekit_propagation_analytical_tle_TLEPropagator_H
#define org_orekit_propagation_analytical_tle_TLEPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeScale;
      class AbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace propagation {
      namespace analytical {
        namespace tle {
          class TLEPropagator;
          class TLE;
          namespace generation {
            class TleGenerationAlgorithm;
          }
        }
      }
      class SpacecraftState;
    }
    namespace utils {
      class PVCoordinates;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          class TLEPropagator : public ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator {
           public:
            enum {
              mid_getDefaultTleGenerationAlgorithm_d25864ee2083e4eb,
              mid_getFrame_c8fe21bcdac65bf6,
              mid_getMU_456d9a2f64d6b28d,
              mid_getPVCoordinates_72289093b5ce53a7,
              mid_getTLE_32ddbfc0b67883b1,
              mid_resetInitialState_2b88003f931f70a7,
              mid_selectExtrapolator_cc293ce4386ce2da,
              mid_selectExtrapolator_24b30465a6824e32,
              mid_selectExtrapolator_47c4d67773bcb869,
              mid_selectExtrapolator_ce405822864d851d,
              mid_getMass_e912d21057defe63,
              mid_sxpInitialize_7ae3461a92a43152,
              mid_sxpPropagate_77e0f9a1f260e2e5,
              mid_resetIntermediateState_9658cf3eaef14ef5,
              mid_propagateOrbit_6f58641238e8a9c4,
              mid_createHarvester_d3d4ea925a699046,
              mid_getJacobiansColumnsNames_a6156df500549a58,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TLEPropagator(jobject obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TLEPropagator(const TLEPropagator& obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {}

            static ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm getDefaultTleGenerationAlgorithm(const ::org::orekit::time::TimeScale &, const ::org::orekit::frames::Frame &);
            ::org::orekit::frames::Frame getFrame() const;
            static jdouble getMU();
            ::org::orekit::utils::PVCoordinates getPVCoordinates(const ::org::orekit::time::AbsoluteDate &) const;
            ::org::orekit::propagation::analytical::tle::TLE getTLE() const;
            void resetInitialState(const ::org::orekit::propagation::SpacecraftState &) const;
            static TLEPropagator selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE &);
            static TLEPropagator selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE &, const ::org::orekit::frames::Frame &);
            static TLEPropagator selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble);
            static TLEPropagator selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, const ::org::orekit::frames::Frame &);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          extern PyType_Def PY_TYPE_DEF(TLEPropagator);
          extern PyTypeObject *PY_TYPE(TLEPropagator);

          class t_TLEPropagator {
          public:
            PyObject_HEAD
            TLEPropagator object;
            static PyObject *wrap_Object(const TLEPropagator&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
