#ifndef org_orekit_propagation_integration_PythonAbstractIntegratedPropagator_H
#define org_orekit_propagation_integration_PythonAbstractIntegratedPropagator_H

#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      namespace integration {
        class StateMapper;
        class AbstractIntegratedPropagator$MainStateEquations;
      }
      class PropagationType;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
    }
    namespace frames {
      class Frame;
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
            mid_init$_9526e1a202c1b9c8,
            mid_createMapper_5f8935bd082b8966,
            mid_finalize_ff7cb6c242604316,
            mid_getMainStateEquations_97764934e3fe735c,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
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
