#ifndef org_hipparchus_ode_nonstiff_EmbeddedRungeKuttaFieldIntegrator_H
#define org_hipparchus_ode_nonstiff_EmbeddedRungeKuttaFieldIntegrator_H

#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeFieldIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
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

        class EmbeddedRungeKuttaFieldIntegrator : public ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeFieldIntegrator {
         public:
          enum {
            mid_getMaxGrowth_613c8f46c659f636,
            mid_getMinReduction_613c8f46c659f636,
            mid_getOrder_412668abc8d889e9,
            mid_getSafety_613c8f46c659f636,
            mid_integrate_dd582e1c9ef253c9,
            mid_setMaxGrowth_1ee4bed350fde589,
            mid_setMinReduction_1ee4bed350fde589,
            mid_setSafety_1ee4bed350fde589,
            mid_fraction_b42a276fbe83c342,
            mid_fraction_f548ed78c2486137,
            mid_estimateError_db5b00c957704bb3,
            mid_createInterpolator_8980964ba972ab77,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EmbeddedRungeKuttaFieldIntegrator(jobject obj) : ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeFieldIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EmbeddedRungeKuttaFieldIntegrator(const EmbeddedRungeKuttaFieldIntegrator& obj) : ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeFieldIntegrator(obj) {}

          ::org::hipparchus::CalculusFieldElement getMaxGrowth() const;
          ::org::hipparchus::CalculusFieldElement getMinReduction() const;
          jint getOrder() const;
          ::org::hipparchus::CalculusFieldElement getSafety() const;
          ::org::hipparchus::ode::FieldODEStateAndDerivative integrate(const ::org::hipparchus::ode::FieldExpandableODE &, const ::org::hipparchus::ode::FieldODEState &, const ::org::hipparchus::CalculusFieldElement &) const;
          void setMaxGrowth(const ::org::hipparchus::CalculusFieldElement &) const;
          void setMinReduction(const ::org::hipparchus::CalculusFieldElement &) const;
          void setSafety(const ::org::hipparchus::CalculusFieldElement &) const;
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
        extern PyType_Def PY_TYPE_DEF(EmbeddedRungeKuttaFieldIntegrator);
        extern PyTypeObject *PY_TYPE(EmbeddedRungeKuttaFieldIntegrator);

        class t_EmbeddedRungeKuttaFieldIntegrator {
        public:
          PyObject_HEAD
          EmbeddedRungeKuttaFieldIntegrator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_EmbeddedRungeKuttaFieldIntegrator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const EmbeddedRungeKuttaFieldIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const EmbeddedRungeKuttaFieldIntegrator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
