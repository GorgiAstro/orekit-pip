#ifndef org_hipparchus_ode_nonstiff_EmbeddedRungeKuttaFieldIntegrator_H
#define org_hipparchus_ode_nonstiff_EmbeddedRungeKuttaFieldIntegrator_H

#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeFieldIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    namespace ode {
      class FieldODEStateAndDerivative;
      class FieldExpandableODE;
      class FieldODEState;
      namespace nonstiff {
        class FieldButcherArrayProvider;
      }
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
            mid_getMaxGrowth_e6d4d3215c30992a,
            mid_getMinReduction_e6d4d3215c30992a,
            mid_getOrder_f2f64475e4580546,
            mid_getSafety_e6d4d3215c30992a,
            mid_integrate_668e072c435ebb6b,
            mid_setMaxGrowth_03a16642f77779e7,
            mid_setMinReduction_03a16642f77779e7,
            mid_setSafety_03a16642f77779e7,
            mid_createInterpolator_5a12ffbd2c0d2689,
            mid_estimateError_681c74af7b6fa1aa,
            mid_fraction_df565f90ecf8d53c,
            mid_fraction_3e44951e1cc3e6e3,
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
