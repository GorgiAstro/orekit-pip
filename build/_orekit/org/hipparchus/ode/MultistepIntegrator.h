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
          mid_getMaxGrowth_dff5885c2c873297,
          mid_getMinReduction_dff5885c2c873297,
          mid_getNSteps_570ce0828f81a2c1,
          mid_getSafety_dff5885c2c873297,
          mid_getStarterIntegrator_1a7e520947392fba,
          mid_setMaxGrowth_17db3a65980d3441,
          mid_setMinReduction_17db3a65980d3441,
          mid_setSafety_17db3a65980d3441,
          mid_setStarterIntegrator_16720c819e7ee0c1,
          mid_initializeHighOrderDerivatives_05286ba32ad1612e,
          mid_computeStepGrowShrinkFactor_dcbc7ce2902fa136,
          mid_rescale_17db3a65980d3441,
          mid_start_23d55d78be072c04,
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
