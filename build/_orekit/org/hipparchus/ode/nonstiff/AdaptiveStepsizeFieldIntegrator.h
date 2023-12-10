#ifndef org_hipparchus_ode_nonstiff_AdaptiveStepsizeFieldIntegrator_H
#define org_hipparchus_ode_nonstiff_AdaptiveStepsizeFieldIntegrator_H

#include "org/hipparchus/ode/AbstractFieldIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class FieldEquationsMapper;
      class FieldODEStateAndDerivative;
    }
    class Field;
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        class AdaptiveStepsizeFieldIntegrator : public ::org::hipparchus::ode::AbstractFieldIntegrator {
         public:
          enum {
            mid_init$_1d742eb7407cf560,
            mid_init$_33c0af90f11a227f,
            mid_getMaxStep_456d9a2f64d6b28d,
            mid_getMinStep_456d9a2f64d6b28d,
            mid_initializeStep_12a30531f10c8169,
            mid_setInitialStepSize_77e0f9a1f260e2e5,
            mid_setStepSizeControl_e5787c5177784e12,
            mid_setStepSizeControl_667a7965403ed91a,
            mid_sanityChecks_2231c8fee9b0ac70,
            mid_getStepSizeHelper_b1c87be850abd6a4,
            mid_resetInternalState_7ae3461a92a43152,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AdaptiveStepsizeFieldIntegrator(jobject obj) : ::org::hipparchus::ode::AbstractFieldIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AdaptiveStepsizeFieldIntegrator(const AdaptiveStepsizeFieldIntegrator& obj) : ::org::hipparchus::ode::AbstractFieldIntegrator(obj) {}

          AdaptiveStepsizeFieldIntegrator(const ::org::hipparchus::Field &, const ::java::lang::String &, jdouble, jdouble, const JArray< jdouble > &, const JArray< jdouble > &);
          AdaptiveStepsizeFieldIntegrator(const ::org::hipparchus::Field &, const ::java::lang::String &, jdouble, jdouble, jdouble, jdouble);

          jdouble getMaxStep() const;
          jdouble getMinStep() const;
          jdouble initializeStep(jboolean, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::hipparchus::ode::FieldODEStateAndDerivative &, const ::org::hipparchus::ode::FieldEquationsMapper &) const;
          void setInitialStepSize(jdouble) const;
          void setStepSizeControl(jdouble, jdouble, const JArray< jdouble > &, const JArray< jdouble > &) const;
          void setStepSizeControl(jdouble, jdouble, jdouble, jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        extern PyType_Def PY_TYPE_DEF(AdaptiveStepsizeFieldIntegrator);
        extern PyTypeObject *PY_TYPE(AdaptiveStepsizeFieldIntegrator);

        class t_AdaptiveStepsizeFieldIntegrator {
        public:
          PyObject_HEAD
          AdaptiveStepsizeFieldIntegrator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AdaptiveStepsizeFieldIntegrator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AdaptiveStepsizeFieldIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AdaptiveStepsizeFieldIntegrator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
