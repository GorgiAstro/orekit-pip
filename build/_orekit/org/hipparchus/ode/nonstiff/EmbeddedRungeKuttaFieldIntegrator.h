#ifndef org_hipparchus_ode_nonstiff_EmbeddedRungeKuttaFieldIntegrator_H
#define org_hipparchus_ode_nonstiff_EmbeddedRungeKuttaFieldIntegrator_H

#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeFieldIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        class FieldButcherArrayProvider;
      }
      class FieldODEStateAndDerivative;
      class FieldODEState;
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

        class EmbeddedRungeKuttaFieldIntegrator : public ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeFieldIntegrator {
         public:
          enum {
            mid_getMaxGrowth_eba8e72a22c984ac,
            mid_getMinReduction_eba8e72a22c984ac,
            mid_getOrder_570ce0828f81a2c1,
            mid_getSafety_eba8e72a22c984ac,
            mid_integrate_d8a6319aba9a7b17,
            mid_setMaxGrowth_072c8635f2164db9,
            mid_setMinReduction_072c8635f2164db9,
            mid_setSafety_072c8635f2164db9,
            mid_fraction_d0525157bc3abb83,
            mid_fraction_50936f84b69df8dc,
            mid_createInterpolator_21baab755acbe636,
            mid_estimateError_f7f77a3e7e765297,
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
