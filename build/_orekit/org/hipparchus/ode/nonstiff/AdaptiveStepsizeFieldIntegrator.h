#ifndef org_hipparchus_ode_nonstiff_AdaptiveStepsizeFieldIntegrator_H
#define org_hipparchus_ode_nonstiff_AdaptiveStepsizeFieldIntegrator_H

#include "org/hipparchus/ode/AbstractFieldIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class FieldEquationsMapper;
      class FieldODEStateAndDerivative;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
    class Field;
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
            mid_init$_0e317f60999bd2c0,
            mid_init$_1968ef6867c33506,
            mid_getMaxStep_9981f74b2d109da6,
            mid_getMinStep_9981f74b2d109da6,
            mid_initializeStep_8f80481927a4695b,
            mid_setInitialStepSize_1ad26e8c8c0cd65b,
            mid_setStepSizeControl_e3195482263a60ce,
            mid_setStepSizeControl_cd5724127cc72e96,
            mid_getStepSizeHelper_4e1e04b2e648c6b6,
            mid_sanityChecks_d7702289c8dcf483,
            mid_resetInternalState_ff7cb6c242604316,
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
