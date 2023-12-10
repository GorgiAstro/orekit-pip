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
          mid_getMaxGrowth_456d9a2f64d6b28d,
          mid_getMinReduction_456d9a2f64d6b28d,
          mid_getNSteps_f2f64475e4580546,
          mid_getSafety_456d9a2f64d6b28d,
          mid_getStarterIntegrator_b792653519a95a45,
          mid_setMaxGrowth_77e0f9a1f260e2e5,
          mid_setMinReduction_77e0f9a1f260e2e5,
          mid_setSafety_77e0f9a1f260e2e5,
          mid_setStarterIntegrator_a7608ffb03fe3825,
          mid_initializeHighOrderDerivatives_306bab15a17e087f,
          mid_rescale_03a16642f77779e7,
          mid_computeStepGrowShrinkFactor_0ba5fed9597b693e,
          mid_start_257c87e40eefb645,
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
