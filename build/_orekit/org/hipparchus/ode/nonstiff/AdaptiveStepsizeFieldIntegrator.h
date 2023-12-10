#ifndef org_hipparchus_ode_nonstiff_AdaptiveStepsizeFieldIntegrator_H
#define org_hipparchus_ode_nonstiff_AdaptiveStepsizeFieldIntegrator_H

#include "org/hipparchus/ode/AbstractFieldIntegrator.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    namespace ode {
      class FieldODEStateAndDerivative;
      class FieldEquationsMapper;
    }
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
            mid_init$_7c1322d04e543be8,
            mid_init$_4cfe509c2e9280c2,
            mid_getMaxStep_dff5885c2c873297,
            mid_getMinStep_dff5885c2c873297,
            mid_initializeStep_73f4b2cdb3dce988,
            mid_setInitialStepSize_17db3a65980d3441,
            mid_setStepSizeControl_36e977212374ff6b,
            mid_setStepSizeControl_b0a935b68e41d65a,
            mid_sanityChecks_e269d011240a2d04,
            mid_getStepSizeHelper_22d091974ce7dd9a,
            mid_resetInternalState_0fa09c18fee449d5,
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
