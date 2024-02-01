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
          mid_getMaxGrowth_9981f74b2d109da6,
          mid_getMinReduction_9981f74b2d109da6,
          mid_getNSteps_d6ab429752e7c267,
          mid_getSafety_9981f74b2d109da6,
          mid_getStarterIntegrator_5f35958883823593,
          mid_setMaxGrowth_1ad26e8c8c0cd65b,
          mid_setMinReduction_1ad26e8c8c0cd65b,
          mid_setSafety_1ad26e8c8c0cd65b,
          mid_setStarterIntegrator_c17d99cd56eae8b6,
          mid_initializeHighOrderDerivatives_7145db39e893543c,
          mid_computeStepGrowShrinkFactor_bf28ed64d6e8576b,
          mid_rescale_1ad26e8c8c0cd65b,
          mid_start_237738985099ffb3,
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
