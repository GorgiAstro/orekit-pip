#ifndef org_orekit_propagation_integration_PythonAbstractIntegratedPropagator_H
#define org_orekit_propagation_integration_PythonAbstractIntegratedPropagator_H

#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        class StateMapper;
        class AbstractIntegratedPropagator$MainStateEquations;
      }
      class PropagationType;
    }
    namespace orbits {
      class OrbitType;
      class PositionAngleType;
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
  }
  namespace hipparchus {
    namespace ode {
      class ODEIntegrator;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        class PythonAbstractIntegratedPropagator : public ::org::orekit::propagation::integration::AbstractIntegratedPropagator {
         public:
          enum {
            mid_init$_f9a0f6f49e4bc2f0,
            mid_createMapper_31b084497c320ed2,
            mid_finalize_0640e6acf969ed28,
            mid_getMainStateEquations_4a2f137b7a0c1747,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAbstractIntegratedPropagator(jobject obj) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAbstractIntegratedPropagator(const PythonAbstractIntegratedPropagator& obj) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(obj) {}

          PythonAbstractIntegratedPropagator(const ::org::hipparchus::ode::ODEIntegrator &, const ::org::orekit::propagation::PropagationType &);

          ::org::orekit::propagation::integration::StateMapper createMapper(const ::org::orekit::time::AbsoluteDate &, jdouble, const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::frames::Frame &) const;
          void finalize() const;
          ::org::orekit::propagation::integration::AbstractIntegratedPropagator$MainStateEquations getMainStateEquations(const ::org::hipparchus::ode::ODEIntegrator &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        extern PyType_Def PY_TYPE_DEF(PythonAbstractIntegratedPropagator);
        extern PyTypeObject *PY_TYPE(PythonAbstractIntegratedPropagator);

        class t_PythonAbstractIntegratedPropagator {
        public:
          PyObject_HEAD
          PythonAbstractIntegratedPropagator object;
          static PyObject *wrap_Object(const PythonAbstractIntegratedPropagator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
