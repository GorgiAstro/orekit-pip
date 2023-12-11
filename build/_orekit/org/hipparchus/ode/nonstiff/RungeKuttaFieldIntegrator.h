#ifndef org_hipparchus_ode_nonstiff_RungeKuttaFieldIntegrator_H
#define org_hipparchus_ode_nonstiff_RungeKuttaFieldIntegrator_H

#include "org/hipparchus/ode/AbstractFieldIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class FieldOrdinaryDifferentialEquation;
      class FieldODEStateAndDerivative;
      class FieldExpandableODE;
      class FieldODEState;
      namespace nonstiff {
        class FieldButcherArrayProvider;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        class RungeKuttaFieldIntegrator : public ::org::hipparchus::ode::AbstractFieldIntegrator {
         public:
          enum {
            mid_getDefaultStep_613c8f46c659f636,
            mid_integrate_dd582e1c9ef253c9,
            mid_singleStep_8e3cc624cea6b4bd,
            mid_fraction_f548ed78c2486137,
            mid_createInterpolator_8980964ba972ab77,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RungeKuttaFieldIntegrator(jobject obj) : ::org::hipparchus::ode::AbstractFieldIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RungeKuttaFieldIntegrator(const RungeKuttaFieldIntegrator& obj) : ::org::hipparchus::ode::AbstractFieldIntegrator(obj) {}

          ::org::hipparchus::CalculusFieldElement getDefaultStep() const;
          ::org::hipparchus::ode::FieldODEStateAndDerivative integrate(const ::org::hipparchus::ode::FieldExpandableODE &, const ::org::hipparchus::ode::FieldODEState &, const ::org::hipparchus::CalculusFieldElement &) const;
          JArray< ::org::hipparchus::CalculusFieldElement > singleStep(const ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation &, const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::hipparchus::CalculusFieldElement &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        extern PyType_Def PY_TYPE_DEF(RungeKuttaFieldIntegrator);
        extern PyTypeObject *PY_TYPE(RungeKuttaFieldIntegrator);

        class t_RungeKuttaFieldIntegrator {
        public:
          PyObject_HEAD
          RungeKuttaFieldIntegrator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_RungeKuttaFieldIntegrator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const RungeKuttaFieldIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const RungeKuttaFieldIntegrator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
