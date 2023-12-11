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
          mid_getMaxGrowth_557b8123390d8d0c,
          mid_getMinReduction_557b8123390d8d0c,
          mid_getNSteps_412668abc8d889e9,
          mid_getSafety_557b8123390d8d0c,
          mid_getStarterIntegrator_7df926536e4d0676,
          mid_setMaxGrowth_10f281d777284cea,
          mid_setMinReduction_10f281d777284cea,
          mid_setSafety_10f281d777284cea,
          mid_setStarterIntegrator_bb1ae62b5d826baa,
          mid_rescale_10f281d777284cea,
          mid_initializeHighOrderDerivatives_a72bdebc8d5fa5c2,
          mid_computeStepGrowShrinkFactor_7e960cd6eee376d8,
          mid_start_68e51804793796dd,
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
