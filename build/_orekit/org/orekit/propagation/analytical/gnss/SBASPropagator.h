#ifndef org_orekit_propagation_analytical_gnss_SBASPropagator_H
#define org_orekit_propagation_analytical_gnss_SBASPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
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
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinates;
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
              mid_getECEF_b86f9f61d97a7244,
              mid_getECI_b86f9f61d97a7244,
              mid_getFrame_b86f9f61d97a7244,
              mid_getMU_dff5885c2c873297,
              mid_getSBASOrbitalElements_155020a76818292b,
              mid_propagateInEcef_38efe74c9e3a1286,
              mid_resetInitialState_0ee5c56004643a2e,
              mid_propagateOrbit_7a8f4c854607bed6,
              mid_getMass_bf1d7732f1acb697,
              mid_resetIntermediateState_33f4696e4edaa03c,
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
