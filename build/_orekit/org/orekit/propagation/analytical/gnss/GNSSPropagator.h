#ifndef org_orekit_propagation_analytical_gnss_GNSSPropagator_H
#define org_orekit_propagation_analytical_gnss_GNSSPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace utils {
      class PVCoordinates;
    }
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class GNSSOrbitalElements;
          }
        }
      }
      class SpacecraftState;
    }
    namespace frames {
      class Frame;
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

          class GNSSPropagator : public ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator {
           public:
            enum {
              mid_getECEF_6c9bc0a928c56d4e,
              mid_getECI_6c9bc0a928c56d4e,
              mid_getFrame_6c9bc0a928c56d4e,
              mid_getMU_557b8123390d8d0c,
              mid_getOrbitalElements_ade926af4f9fd05d,
              mid_propagateInEcef_f00f0e7ea285c370,
              mid_resetInitialState_8655761ebf04b503,
              mid_propagateOrbit_9e937c0ae63d8022,
              mid_resetIntermediateState_45bf76e836befe86,
              mid_getMass_b0b988f941da47d8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GNSSPropagator(jobject obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GNSSPropagator(const GNSSPropagator& obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {}

            ::org::orekit::frames::Frame getECEF() const;
            ::org::orekit::frames::Frame getECI() const;
            ::org::orekit::frames::Frame getFrame() const;
            jdouble getMU() const;
            ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements getOrbitalElements() const;
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
          extern PyType_Def PY_TYPE_DEF(GNSSPropagator);
          extern PyTypeObject *PY_TYPE(GNSSPropagator);

          class t_GNSSPropagator {
          public:
            PyObject_HEAD
            GNSSPropagator object;
            static PyObject *wrap_Object(const GNSSPropagator&);
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
