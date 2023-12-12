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
    class CalculusFieldElement;
    class Field;
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
            mid_init$_933dc389e2279ff5,
            mid_init$_0850a45e18def3bf,
            mid_getMaxStep_557b8123390d8d0c,
            mid_getMinStep_557b8123390d8d0c,
            mid_initializeStep_a77925025a7153e8,
            mid_setInitialStepSize_10f281d777284cea,
            mid_setStepSizeControl_c13e969c0f339014,
            mid_setStepSizeControl_bc3712e794ac7a81,
            mid_getStepSizeHelper_3d29ab6ec5ee2607,
            mid_sanityChecks_ee2fc63f2a26c007,
            mid_resetInternalState_0640e6acf969ed28,
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
