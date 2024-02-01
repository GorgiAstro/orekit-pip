#ifndef org_hipparchus_ode_nonstiff_EmbeddedRungeKuttaIntegrator_H
#define org_hipparchus_ode_nonstiff_EmbeddedRungeKuttaIntegrator_H

#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEState;
      class ExpandableODE;
      class ODEStateAndDerivative;
      namespace nonstiff {
        class ButcherArrayProvider;
      }
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
            mid_getMaxGrowth_9981f74b2d109da6,
            mid_getMinReduction_9981f74b2d109da6,
            mid_getOrder_d6ab429752e7c267,
            mid_getSafety_9981f74b2d109da6,
            mid_integrate_3b00c059d3ccb86d,
            mid_setMaxGrowth_1ad26e8c8c0cd65b,
            mid_setMinReduction_1ad26e8c8c0cd65b,
            mid_setSafety_1ad26e8c8c0cd65b,
            mid_createInterpolator_044d72e449b4501a,
            mid_estimateError_8c458726c8da3a78,
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
