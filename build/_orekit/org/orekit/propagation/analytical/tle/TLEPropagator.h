#ifndef org_orekit_propagation_analytical_tle_TLEPropagator_H
#define org_orekit_propagation_analytical_tle_TLEPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class AbsoluteDate;
      class TimeScale;
    }
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {
            class TleGenerationAlgorithm;
          }
          class TLEPropagator;
          class TLE;
        }
      }
      class SpacecraftState;
    }
    namespace utils {
      class PVCoordinates;
    }
    namespace frames {
      class Frame;
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
              mid_getDefaultTleGenerationAlgorithm_5842c70c474d9e85,
              mid_getFrame_cb151471db4570f0,
              mid_getMU_9981f74b2d109da6,
              mid_getPVCoordinates_37ec40ec795d4b0a,
              mid_getTLE_dacb215ad36dee42,
              mid_resetInitialState_72b846eb87f3af9a,
              mid_selectExtrapolator_0bab2cb0eccfecad,
              mid_selectExtrapolator_83d74849e34f0409,
              mid_selectExtrapolator_456551486bc4e83a,
              mid_selectExtrapolator_bdb6e20df60d7e73,
              mid_getMass_209f08246d708042,
              mid_getJacobiansColumnsNames_d751c1a57012b438,
              mid_createHarvester_d0aee1b2c15f4d53,
              mid_propagateOrbit_776cca2e85dfe61d,
              mid_resetIntermediateState_b69b5541e48d21c0,
              mid_sxpInitialize_ff7cb6c242604316,
              mid_sxpPropagate_1ad26e8c8c0cd65b,
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
