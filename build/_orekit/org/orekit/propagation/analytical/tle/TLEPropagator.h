#ifndef org_orekit_propagation_analytical_tle_TLEPropagator_H
#define org_orekit_propagation_analytical_tle_TLEPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
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
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
      class TimeScale;
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
              mid_getDefaultTleGenerationAlgorithm_4ef88466cc3e0b49,
              mid_getFrame_6c9bc0a928c56d4e,
              mid_getMU_557b8123390d8d0c,
              mid_getPVCoordinates_f00f0e7ea285c370,
              mid_getTLE_67f978062a0fd0e7,
              mid_resetInitialState_8655761ebf04b503,
              mid_selectExtrapolator_8be8b627fd8c3459,
              mid_selectExtrapolator_d086e2f31f325188,
              mid_selectExtrapolator_92fffefc5a04cfe6,
              mid_selectExtrapolator_f2c75c7e0368ae90,
              mid_getJacobiansColumnsNames_0d9551367f7ecdef,
              mid_sxpInitialize_0640e6acf969ed28,
              mid_sxpPropagate_10f281d777284cea,
              mid_propagateOrbit_9e937c0ae63d8022,
              mid_resetIntermediateState_45bf76e836befe86,
              mid_getMass_b0b988f941da47d8,
              mid_createHarvester_5f0409a66c29e9c1,
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
