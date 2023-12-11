#ifndef org_hipparchus_ode_nonstiff_EmbeddedRungeKuttaIntegrator_H
#define org_hipparchus_ode_nonstiff_EmbeddedRungeKuttaIntegrator_H

#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEState;
      namespace nonstiff {
        class ButcherArrayProvider;
      }
      class ExpandableODE;
      class ODEStateAndDerivative;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
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
            mid_getMaxGrowth_557b8123390d8d0c,
            mid_getMinReduction_557b8123390d8d0c,
            mid_getOrder_412668abc8d889e9,
            mid_getSafety_557b8123390d8d0c,
            mid_integrate_7b1e7ccc98e27149,
            mid_setMaxGrowth_10f281d777284cea,
            mid_setMinReduction_10f281d777284cea,
            mid_setSafety_10f281d777284cea,
            mid_estimateError_ce34cd66684833d2,
            mid_createInterpolator_11ab5d82310ecbfa,
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
