#ifndef org_orekit_propagation_integration_PythonFieldAbstractIntegratedPropagator_H
#define org_orekit_propagation_integration_PythonFieldAbstractIntegratedPropagator_H

#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace ode {
      class FieldODEIntegrator;
    }
    class Field;
  }
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
    }
    namespace propagation {
      namespace integration {
        class FieldStateMapper;
        class FieldAbstractIntegratedPropagator$MainStateEquations;
      }
      class PropagationType;
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class FieldAbsoluteDate;
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

        class PythonFieldAbstractIntegratedPropagator : public ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator {
         public:
          enum {
            mid_init$_fd706f9f174d8023,
            mid_createMapper_16c8184497a1d794,
            mid_finalize_0fa09c18fee449d5,
            mid_getMainStateEquations_75bae68924620d17,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
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
