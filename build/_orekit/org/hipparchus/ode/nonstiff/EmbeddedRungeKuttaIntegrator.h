#ifndef org_hipparchus_ode_nonstiff_EmbeddedRungeKuttaIntegrator_H
#define org_hipparchus_ode_nonstiff_EmbeddedRungeKuttaIntegrator_H

#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        class ButcherArrayProvider;
      }
      class ExpandableODE;
      class ODEState;
      class ODEStateAndDerivative;
    }
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

        class EmbeddedRungeKuttaIntegrator : public ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator {
         public:
          enum {
            mid_getMaxGrowth_456d9a2f64d6b28d,
            mid_getMinReduction_456d9a2f64d6b28d,
            mid_getOrder_f2f64475e4580546,
            mid_getSafety_456d9a2f64d6b28d,
            mid_integrate_7efcd57267e426c3,
            mid_setMaxGrowth_77e0f9a1f260e2e5,
            mid_setMinReduction_77e0f9a1f260e2e5,
            mid_setSafety_77e0f9a1f260e2e5,
            mid_createInterpolator_34096714306c5ce7,
            mid_estimateError_8ae23a975a0e5320,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EmbeddedRungeKuttaIntegrator(jobject obj) : ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EmbeddedRungeKuttaIntegrator(const EmbeddedRungeKuttaIntegrator& obj) : ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator(obj) {}

          jdouble getMaxGrowth() const;
          jdouble getMinReduction() const;
          jint getOrder() const;
          jdouble getSafety() const;
          ::org::hipparchus::ode::ODEStateAndDerivative integrate(const ::org::hipparchus::ode::ExpandableODE &, const ::org::hipparchus::ode::ODEState &, jdouble) const;
          void setMaxGrowth(jdouble) const;
          void setMinReduction(jdouble) const;
          void setSafety(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(EmbeddedRungeKuttaIntegrator);
        extern PyTypeObject *PY_TYPE(EmbeddedRungeKuttaIntegrator);

        class t_EmbeddedRungeKuttaIntegrator {
        public:
          PyObject_HEAD
          EmbeddedRungeKuttaIntegrator object;
          static PyObject *wrap_Object(const EmbeddedRungeKuttaIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
