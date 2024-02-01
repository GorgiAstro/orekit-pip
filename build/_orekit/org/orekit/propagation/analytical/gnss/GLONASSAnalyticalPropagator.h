#ifndef org_orekit_propagation_analytical_gnss_GLONASSAnalyticalPropagator_H
#define org_orekit_propagation_analytical_gnss_GLONASSAnalyticalPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinates;
    }
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class GLONASSOrbitalElements;
          }
        }
      }
      class SpacecraftState;
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
        namespace gnss {

          class GLONASSAnalyticalPropagator : public ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator {
           public:
            enum {
              mid_getECEF_cb151471db4570f0,
              mid_getECI_cb151471db4570f0,
              mid_getFrame_cb151471db4570f0,
              mid_getGLONASSOrbitalElements_96e04bba8548a588,
              mid_getMU_9981f74b2d109da6,
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

            explicit GLONASSAnalyticalPropagator(jobject obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GLONASSAnalyticalPropagator(const GLONASSAnalyticalPropagator& obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {}

            ::org::orekit::frames::Frame getECEF() const;
            ::org::orekit::frames::Frame getECI() const;
            ::org::orekit::frames::Frame getFrame() const;
            ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements getGLONASSOrbitalElements() const;
            static jdouble getMU();
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
          extern PyType_Def PY_TYPE_DEF(GLONASSAnalyticalPropagator);
          extern PyTypeObject *PY_TYPE(GLONASSAnalyticalPropagator);

          class t_GLONASSAnalyticalPropagator {
          public:
            PyObject_HEAD
            GLONASSAnalyticalPropagator object;
            static PyObject *wrap_Object(const GLONASSAnalyticalPropagator&);
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
