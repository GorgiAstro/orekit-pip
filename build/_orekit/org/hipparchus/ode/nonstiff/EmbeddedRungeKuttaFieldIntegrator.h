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
      class FieldExpandableODE;
      class FieldODEState;
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
            mid_getMaxGrowth_08d37e3f77b7239d,
            mid_getMinReduction_08d37e3f77b7239d,
            mid_getOrder_d6ab429752e7c267,
            mid_getSafety_08d37e3f77b7239d,
            mid_integrate_7e5884a5ebca9afb,
            mid_setMaxGrowth_f63ca9e3185c722e,
            mid_setMinReduction_f63ca9e3185c722e,
            mid_setSafety_f63ca9e3185c722e,
            mid_fraction_89a7d1b6c5e4fe60,
            mid_fraction_44b518e8c914a050,
            mid_createInterpolator_17af2a8a707ea45d,
            mid_estimateError_2bb116b8560eb7ee,
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
