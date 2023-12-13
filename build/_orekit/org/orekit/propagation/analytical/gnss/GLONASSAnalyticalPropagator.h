#ifndef org_orekit_propagation_analytical_gnss_GLONASSAnalyticalPropagator_H
#define org_orekit_propagation_analytical_gnss_GLONASSAnalyticalPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
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

          class GLONASSAnalyticalPropagator : public ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator {
           public:
            enum {
              mid_getECEF_2c51111cc6894ba1,
              mid_getECI_2c51111cc6894ba1,
              mid_getFrame_2c51111cc6894ba1,
              mid_getGLONASSOrbitalElements_ecd6853fd3b2ef73,
              mid_getMU_b74f83833fdad017,
              mid_propagateInEcef_686d17b8cfdd0634,
              mid_resetInitialState_280c3390961e0a50,
              mid_getMass_fd347811007a6ba3,
              mid_resetIntermediateState_1c47c97cdbc7e206,
              mid_propagateOrbit_5df6dcb5c4123339,
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
