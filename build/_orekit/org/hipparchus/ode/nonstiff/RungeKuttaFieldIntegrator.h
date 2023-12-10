#ifndef org_hipparchus_ode_nonstiff_RungeKuttaFieldIntegrator_H
#define org_hipparchus_ode_nonstiff_RungeKuttaFieldIntegrator_H

#include "org/hipparchus/ode/AbstractFieldIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        class FieldButcherArrayProvider;
      }
      class FieldODEStateAndDerivative;
      class FieldODEState;
      class FieldOrdinaryDifferentialEquation;
      class FieldExpandableODE;
    }
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
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
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        class RungeKuttaFieldIntegrator : public ::org::hipparchus::ode::AbstractFieldIntegrator {
         public:
          enum {
            mid_getDefaultStep_eba8e72a22c984ac,
            mid_integrate_d8a6319aba9a7b17,
            mid_singleStep_0214498361157caa,
            mid_fraction_d0525157bc3abb83,
            mid_createInterpolator_21baab755acbe636,
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
