#ifndef org_hipparchus_ode_nonstiff_EmbeddedRungeKuttaIntegrator_H
#define org_hipparchus_ode_nonstiff_EmbeddedRungeKuttaIntegrator_H

#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        class ButcherArrayProvider;
      }
      class ODEState;
      class ExpandableODE;
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
            mid_getMaxGrowth_dff5885c2c873297,
            mid_getMinReduction_dff5885c2c873297,
            mid_getOrder_570ce0828f81a2c1,
            mid_getSafety_dff5885c2c873297,
            mid_integrate_3c1cc820e563e3e9,
            mid_setMaxGrowth_17db3a65980d3441,
            mid_setMinReduction_17db3a65980d3441,
            mid_setSafety_17db3a65980d3441,
            mid_createInterpolator_3c3452116c60fd90,
            mid_estimateError_c892cfaf07a4634f,
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
