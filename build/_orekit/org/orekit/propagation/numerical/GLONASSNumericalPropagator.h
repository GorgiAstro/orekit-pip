#ifndef org_orekit_propagation_numerical_GLONASSNumericalPropagator_H
#define org_orekit_propagation_numerical_GLONASSNumericalPropagator_H

#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace attitudes {
      class AttitudeProvider;
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
  }
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        class ClassicalRungeKuttaIntegrator;
      }
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
      namespace numerical {

        class GLONASSNumericalPropagator : public ::org::orekit::propagation::integration::AbstractIntegratedPropagator {
         public:
          enum {
            mid_init$_bcc36abbe353bf79,
            mid_getGLONASSOrbitalElements_44dc208271d1b6f9,
            mid_propagate_fbff2ff5554d95e1,
            mid_createMapper_2bea84b26b1efc07,
            mid_getMainStateEquations_e1fa3ce287fe2655,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GLONASSNumericalPropagator(jobject obj) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GLONASSNumericalPropagator(const GLONASSNumericalPropagator& obj) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(obj) {}

          GLONASSNumericalPropagator(const ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator &, const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements &, const ::org::orekit::frames::Frame &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, const ::org::orekit::data::DataContext &, jboolean);

          ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements getGLONASSOrbitalElements() const;
          ::org::orekit::propagation::SpacecraftState propagate(const ::org::orekit::time::AbsoluteDate &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        extern PyType_Def PY_TYPE_DEF(GLONASSNumericalPropagator);
        extern PyTypeObject *PY_TYPE(GLONASSNumericalPropagator);

        class t_GLONASSNumericalPropagator {
        public:
          PyObject_HEAD
          GLONASSNumericalPropagator object;
          static PyObject *wrap_Object(const GLONASSNumericalPropagator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
