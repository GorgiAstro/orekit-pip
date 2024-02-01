#ifndef org_orekit_propagation_analytical_gnss_GNSSPropagator_H
#define org_orekit_propagation_analytical_gnss_GNSSPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinates;
    }
    namespace frames {
      class Frame;
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
              mid_getECEF_cb151471db4570f0,
              mid_getECI_cb151471db4570f0,
              mid_getFrame_cb151471db4570f0,
              mid_getMU_9981f74b2d109da6,
              mid_getOrbitalElements_13476697309f7107,
              mid_propagateInEcef_37ec40ec795d4b0a,
              mid_resetInitialState_72b846eb87f3af9a,
              mid_getMass_209f08246d708042,
              mid_propagateOrbit_776cca2e85dfe61d,
              mid_resetIntermediateState_b69b5541e48d21c0,
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
