#ifndef org_orekit_propagation_analytical_gnss_SBASPropagator_H
#define org_orekit_propagation_analytical_gnss_SBASPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace utils {
      class PVCoordinates;
    }
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class SBASOrbitalElements;
          }
        }
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
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
        namespace gnss {

          class SBASPropagator : public ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator {
           public:
            enum {
              mid_getECEF_c8fe21bcdac65bf6,
              mid_getECI_c8fe21bcdac65bf6,
              mid_getFrame_c8fe21bcdac65bf6,
              mid_getMU_456d9a2f64d6b28d,
              mid_getSBASOrbitalElements_babc37af936533ed,
              mid_propagateInEcef_72289093b5ce53a7,
              mid_resetInitialState_2b88003f931f70a7,
              mid_getMass_e912d21057defe63,
              mid_resetIntermediateState_9658cf3eaef14ef5,
              mid_propagateOrbit_6f58641238e8a9c4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SBASPropagator(jobject obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SBASPropagator(const SBASPropagator& obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {}

            ::org::orekit::frames::Frame getECEF() const;
            ::org::orekit::frames::Frame getECI() const;
            ::org::orekit::frames::Frame getFrame() const;
            jdouble getMU() const;
            ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements getSBASOrbitalElements() const;
            ::org::orekit::utils::PVCoordinates propagateInEcef(const ::org::orekit::time::AbsoluteDate &) const;
            void resetInitialState(const ::org::orekit::propagation::SpacecraftState &) const;
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
        namespace gnss {
          extern PyType_Def PY_TYPE_DEF(SBASPropagator);
          extern PyTypeObject *PY_TYPE(SBASPropagator);

          class t_SBASPropagator {
          public:
            PyObject_HEAD
            SBASPropagator object;
            static PyObject *wrap_Object(const SBASPropagator&);
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