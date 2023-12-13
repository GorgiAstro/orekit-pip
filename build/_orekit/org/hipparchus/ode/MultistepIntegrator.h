#ifndef org_hipparchus_ode_MultistepIntegrator_H
#define org_hipparchus_ode_MultistepIntegrator_H

#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEIntegrator;
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

      class MultistepIntegrator : public ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator {
       public:
        enum {
          mid_getMaxGrowth_b74f83833fdad017,
          mid_getMinReduction_b74f83833fdad017,
          mid_getNSteps_55546ef6a647f39b,
          mid_getSafety_b74f83833fdad017,
          mid_getStarterIntegrator_6e08fde180cf79f8,
          mid_setMaxGrowth_8ba9fe7a847cecad,
          mid_setMinReduction_8ba9fe7a847cecad,
          mid_setSafety_8ba9fe7a847cecad,
          mid_setStarterIntegrator_9bd4ec1fb1f57fec,
          mid_initializeHighOrderDerivatives_0830b1db869546c8,
          mid_computeStepGrowShrinkFactor_04fd0666b613d2ab,
          mid_rescale_8ba9fe7a847cecad,
          mid_start_2a4f0e2910e1004f,
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
