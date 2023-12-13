#ifndef org_orekit_propagation_analytical_tle_TLEPropagator_H
#define org_orekit_propagation_analytical_tle_TLEPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      namespace analytical {
        namespace tle {
          class TLE;
          class TLEPropagator;
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
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
      class TimeScale;
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
              mid_getDefaultTleGenerationAlgorithm_1f0630c6113a1d80,
              mid_getFrame_2c51111cc6894ba1,
              mid_getMU_b74f83833fdad017,
              mid_getPVCoordinates_686d17b8cfdd0634,
              mid_getTLE_1c01e307dcced049,
              mid_resetInitialState_280c3390961e0a50,
              mid_selectExtrapolator_8e5c34b68876efbd,
              mid_selectExtrapolator_b42917e401257604,
              mid_selectExtrapolator_dda8bfa153af0848,
              mid_selectExtrapolator_ce23a66dff2504a4,
              mid_getMass_fd347811007a6ba3,
              mid_getJacobiansColumnsNames_e62d3bb06d56d7e3,
              mid_resetIntermediateState_1c47c97cdbc7e206,
              mid_propagateOrbit_5df6dcb5c4123339,
              mid_createHarvester_f85b53b28e0fe6bb,
              mid_sxpInitialize_a1fa5dae97ea5ed2,
              mid_sxpPropagate_8ba9fe7a847cecad,
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
