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
      class PositionAngleType;
      class OrbitType;
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
            mid_init$_ab7da0e7cb0692d7,
            mid_createMapper_2bea84b26b1efc07,
            mid_finalize_0fa09c18fee449d5,
            mid_getMainStateEquations_e1fa3ce287fe2655,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
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
