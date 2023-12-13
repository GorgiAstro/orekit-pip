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
          mid_getMaxGrowth_b74f83833fdad017,
          mid_getMinReduction_b74f83833fdad017,
          mid_getNSteps_55546ef6a647f39b,
          mid_getSafety_b74f83833fdad017,
          mid_getStarterIntegrator_a6eac7a4d7009da9,
          mid_setMaxGrowth_8ba9fe7a847cecad,
          mid_setMinReduction_8ba9fe7a847cecad,
          mid_setSafety_8ba9fe7a847cecad,
          mid_setStarterIntegrator_ee02dd8d3f4ebd40,
          mid_initializeHighOrderDerivatives_3c657d6a3baa084a,
          mid_computeStepGrowShrinkFactor_04fd0666b613d2ab,
          mid_rescale_f2b4bfa0af1007e8,
          mid_start_60f474da9139a328,
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
