#ifndef org_orekit_propagation_analytical_tle_TLEPropagator_H
#define org_orekit_propagation_analytical_tle_TLEPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace utils {
      class PVCoordinates;
    }
    namespace frames {
      class Frame;
    }
    namespace propagation {
      namespace analytical {
        namespace tle {
          class TLEPropagator;
          namespace generation {
            class TleGenerationAlgorithm;
          }
          class TLE;
        }
      }
      class SpacecraftState;
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
              mid_getDefaultTleGenerationAlgorithm_626c08330c00a237,
              mid_getFrame_b86f9f61d97a7244,
              mid_getMU_dff5885c2c873297,
              mid_getPVCoordinates_38efe74c9e3a1286,
              mid_getTLE_e993eceec98c738b,
              mid_resetInitialState_0ee5c56004643a2e,
              mid_selectExtrapolator_8f723e93b6b0c0e4,
              mid_selectExtrapolator_14e6136d1bc29138,
              mid_selectExtrapolator_031507efeb924a11,
              mid_selectExtrapolator_d73df9db6a3294a1,
              mid_propagateOrbit_7a8f4c854607bed6,
              mid_getMass_bf1d7732f1acb697,
              mid_resetIntermediateState_33f4696e4edaa03c,
              mid_getJacobiansColumnsNames_2afa36052df4765d,
              mid_createHarvester_5cfd2a13971b74c7,
              mid_sxpInitialize_0fa09c18fee449d5,
              mid_sxpPropagate_17db3a65980d3441,
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
