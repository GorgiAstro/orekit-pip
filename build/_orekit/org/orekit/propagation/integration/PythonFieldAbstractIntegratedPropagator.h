#ifndef org_orekit_propagation_integration_PythonFieldAbstractIntegratedPropagator_H
#define org_orekit_propagation_integration_PythonFieldAbstractIntegratedPropagator_H

#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace orbits {
      class OrbitType;
      class PositionAngleType;
    }
    namespace propagation {
      namespace integration {
        class FieldAbstractIntegratedPropagator$MainStateEquations;
        class FieldStateMapper;
      }
      class PropagationType;
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
    namespace ode {
      class FieldODEIntegrator;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        class PythonFieldAbstractIntegratedPropagator : public ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator {
         public:
          enum {
            mid_init$_d00ce4881929b1dd,
            mid_createMapper_ad7c2ac9dfe2008b,
            mid_finalize_0640e6acf969ed28,
            mid_getMainStateEquations_c822d3b1a2fa150a,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonFieldAbstractIntegratedPropagator(jobject obj) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonFieldAbstractIntegratedPropagator(const PythonFieldAbstractIntegratedPropagator& obj) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(obj) {}

          PythonFieldAbstractIntegratedPropagator(const ::org::hipparchus::Field &, const ::org::hipparchus::ode::FieldODEIntegrator &, const ::org::orekit::propagation::PropagationType &);

          ::org::orekit::propagation::integration::FieldStateMapper createMapper(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::frames::Frame &) const;
          void finalize() const;
          ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator$MainStateEquations getMainStateEquations(const ::org::hipparchus::ode::FieldODEIntegrator &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonFieldAbstractIntegratedPropagator);
        extern PyTypeObject *PY_TYPE(PythonFieldAbstractIntegratedPropagator);

        class t_PythonFieldAbstractIntegratedPropagator {
        public:
          PyObject_HEAD
          PythonFieldAbstractIntegratedPropagator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PythonFieldAbstractIntegratedPropagator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PythonFieldAbstractIntegratedPropagator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PythonFieldAbstractIntegratedPropagator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
