#ifndef org_hipparchus_ode_nonstiff_EmbeddedRungeKuttaFieldIntegrator_H
#define org_hipparchus_ode_nonstiff_EmbeddedRungeKuttaFieldIntegrator_H

#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeFieldIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class FieldExpandableODE;
      class FieldODEState;
      class FieldODEStateAndDerivative;
      namespace nonstiff {
        class FieldButcherArrayProvider;
      }
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
            mid_getMaxGrowth_81520b552cb3fa26,
            mid_getMinReduction_81520b552cb3fa26,
            mid_getOrder_55546ef6a647f39b,
            mid_getSafety_81520b552cb3fa26,
            mid_integrate_75ca69013be095d1,
            mid_setMaxGrowth_f2b4bfa0af1007e8,
            mid_setMinReduction_f2b4bfa0af1007e8,
            mid_setSafety_f2b4bfa0af1007e8,
            mid_createInterpolator_7cba9d9178eefc1d,
            mid_estimateError_4b43ddf833459788,
            mid_fraction_431f825c752f7b4c,
            mid_fraction_7cdd86319cd5fd7c,
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
