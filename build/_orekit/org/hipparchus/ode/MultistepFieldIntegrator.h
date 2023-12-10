#ifndef org_hipparchus_ode_MultistepFieldIntegrator_H
#define org_hipparchus_ode_MultistepFieldIntegrator_H

#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeFieldIntegrator.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace ode {
      class FieldODEIntegrator;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class MultistepFieldIntegrator : public ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeFieldIntegrator {
       public:
        enum {
          mid_getMaxGrowth_dff5885c2c873297,
          mid_getMinReduction_dff5885c2c873297,
          mid_getNSteps_570ce0828f81a2c1,
          mid_getSafety_dff5885c2c873297,
          mid_getStarterIntegrator_64366de6ee97364a,
          mid_setMaxGrowth_17db3a65980d3441,
          mid_setMinReduction_17db3a65980d3441,
          mid_setSafety_17db3a65980d3441,
          mid_setStarterIntegrator_b912abd7b84ac44c,
          mid_initializeHighOrderDerivatives_8a387f2c5f491083,
          mid_computeStepGrowShrinkFactor_dcbc7ce2902fa136,
          mid_rescale_072c8635f2164db9,
          mid_start_2983f8f6ad2f6b4a,
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
