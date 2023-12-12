#ifndef org_hipparchus_ode_MultistepFieldIntegrator_H
#define org_hipparchus_ode_MultistepFieldIntegrator_H

#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeFieldIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class FieldODEIntegrator;
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

      class MultistepFieldIntegrator : public ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeFieldIntegrator {
       public:
        enum {
          mid_getMaxGrowth_557b8123390d8d0c,
          mid_getMinReduction_557b8123390d8d0c,
          mid_getNSteps_412668abc8d889e9,
          mid_getSafety_557b8123390d8d0c,
          mid_getStarterIntegrator_7ec434f55655b6ee,
          mid_setMaxGrowth_10f281d777284cea,
          mid_setMinReduction_10f281d777284cea,
          mid_setSafety_10f281d777284cea,
          mid_setStarterIntegrator_6ab3c20943a28a6d,
          mid_rescale_1ee4bed350fde589,
          mid_initializeHighOrderDerivatives_688ff0660b77c6d1,
          mid_computeStepGrowShrinkFactor_7e960cd6eee376d8,
          mid_start_9f9103ba16e9c6ab,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MultistepFieldIntegrator(jobject obj) : ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeFieldIntegrator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MultistepFieldIntegrator(const MultistepFieldIntegrator& obj) : ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeFieldIntegrator(obj) {}

        jdouble getMaxGrowth() const;
        jdouble getMinReduction() const;
        jint getNSteps() const;
        jdouble getSafety() const;
        ::org::hipparchus::ode::FieldODEIntegrator getStarterIntegrator() const;
        void setMaxGrowth(jdouble) const;
        void setMinReduction(jdouble) const;
        void setSafety(jdouble) const;
        void setStarterIntegrator(const ::org::hipparchus::ode::FieldODEIntegrator &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(MultistepFieldIntegrator);
      extern PyTypeObject *PY_TYPE(MultistepFieldIntegrator);

      class t_MultistepFieldIntegrator {
      public:
        PyObject_HEAD
        MultistepFieldIntegrator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_MultistepFieldIntegrator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const MultistepFieldIntegrator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const MultistepFieldIntegrator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
