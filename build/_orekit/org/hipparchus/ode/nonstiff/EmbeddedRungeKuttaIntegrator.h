#ifndef org_hipparchus_ode_nonstiff_EmbeddedRungeKuttaIntegrator_H
#define org_hipparchus_ode_nonstiff_EmbeddedRungeKuttaIntegrator_H

#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEStateAndDerivative;
      class ODEState;
      namespace nonstiff {
        class ButcherArrayProvider;
      }
      class ExpandableODE;
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
            mid_getMaxGrowth_b74f83833fdad017,
            mid_getMinReduction_b74f83833fdad017,
            mid_getOrder_55546ef6a647f39b,
            mid_getSafety_b74f83833fdad017,
            mid_integrate_8cb4bf2a0c64fd92,
            mid_setMaxGrowth_8ba9fe7a847cecad,
            mid_setMinReduction_8ba9fe7a847cecad,
            mid_setSafety_8ba9fe7a847cecad,
            mid_createInterpolator_3e673c4450f1ccb4,
            mid_estimateError_30c238558e44050a,
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
