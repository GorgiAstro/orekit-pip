#ifndef org_hipparchus_ode_MultistepIntegrator_H
#define org_hipparchus_ode_MultistepIntegrator_H

#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeIntegrator.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEIntegrator;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class MultistepIntegrator : public ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator {
       public:
        enum {
          mid_getMaxGrowth_456d9a2f64d6b28d,
          mid_getMinReduction_456d9a2f64d6b28d,
          mid_getNSteps_f2f64475e4580546,
          mid_getSafety_456d9a2f64d6b28d,
          mid_getStarterIntegrator_8d1d211a59943275,
          mid_setMaxGrowth_77e0f9a1f260e2e5,
          mid_setMinReduction_77e0f9a1f260e2e5,
          mid_setSafety_77e0f9a1f260e2e5,
          mid_setStarterIntegrator_8b1272a4b400cfb6,
          mid_initializeHighOrderDerivatives_3307b1e87a2ed966,
          mid_rescale_77e0f9a1f260e2e5,
          mid_computeStepGrowShrinkFactor_0ba5fed9597b693e,
          mid_start_283940df19049d89,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MultistepIntegrator(jobject obj) : ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MultistepIntegrator(const MultistepIntegrator& obj) : ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator(obj) {}

        jdouble getMaxGrowth() const;
        jdouble getMinReduction() const;
        jint getNSteps() const;
        jdouble getSafety() const;
        ::org::hipparchus::ode::ODEIntegrator getStarterIntegrator() const;
        void setMaxGrowth(jdouble) const;
        void setMinReduction(jdouble) const;
        void setSafety(jdouble) const;
        void setStarterIntegrator(const ::org::hipparchus::ode::ODEIntegrator &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(MultistepIntegrator);
      extern PyTypeObject *PY_TYPE(MultistepIntegrator);

      class t_MultistepIntegrator {
      public:
        PyObject_HEAD
        MultistepIntegrator object;
        static PyObject *wrap_Object(const MultistepIntegrator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
