#ifndef org_hipparchus_ode_nonstiff_AdaptiveStepsizeFieldIntegrator_H
#define org_hipparchus_ode_nonstiff_AdaptiveStepsizeFieldIntegrator_H

#include "org/hipparchus/ode/AbstractFieldIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class FieldODEStateAndDerivative;
      class FieldEquationsMapper;
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
            mid_init$_e38e4758cd604cc2,
            mid_init$_730e147117073a39,
            mid_getMaxStep_b74f83833fdad017,
            mid_getMinStep_b74f83833fdad017,
            mid_initializeStep_6fef5455357abf9e,
            mid_setInitialStepSize_8ba9fe7a847cecad,
            mid_setStepSizeControl_aa31b8b89ee72c31,
            mid_setStepSizeControl_49f4b5153d696ea5,
            mid_getStepSizeHelper_67c50c21236171f5,
            mid_sanityChecks_c09b0b0bdb27b138,
            mid_resetInternalState_a1fa5dae97ea5ed2,
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
