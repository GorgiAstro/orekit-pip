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
          mid_getMaxGrowth_9981f74b2d109da6,
          mid_getMinReduction_9981f74b2d109da6,
          mid_getNSteps_d6ab429752e7c267,
          mid_getSafety_9981f74b2d109da6,
          mid_getStarterIntegrator_a0df2acc30cad91d,
          mid_setMaxGrowth_1ad26e8c8c0cd65b,
          mid_setMinReduction_1ad26e8c8c0cd65b,
          mid_setSafety_1ad26e8c8c0cd65b,
          mid_setStarterIntegrator_efdcac7cc8f1c735,
          mid_initializeHighOrderDerivatives_59a89abbfffc5f1c,
          mid_computeStepGrowShrinkFactor_bf28ed64d6e8576b,
          mid_rescale_f63ca9e3185c722e,
          mid_start_81baa6658b72de17,
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
