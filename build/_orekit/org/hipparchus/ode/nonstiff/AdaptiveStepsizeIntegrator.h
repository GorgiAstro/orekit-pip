#ifndef org_hipparchus_ode_nonstiff_AdaptiveStepsizeIntegrator_H
#define org_hipparchus_ode_nonstiff_AdaptiveStepsizeIntegrator_H

#include "org/hipparchus/ode/AbstractIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    namespace ode {
      class ODEStateAndDerivative;
    }
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

        class AdaptiveStepsizeIntegrator : public ::org::hipparchus::ode::AbstractIntegrator {
         public:
          enum {
            mid_init$_60ad6b8be9929df4,
            mid_init$_09f2813532e594da,
            mid_getMaxStep_dff5885c2c873297,
            mid_getMinStep_dff5885c2c873297,
            mid_initializeStep_19a4ca64ef36ee6e,
            mid_setInitialStepSize_17db3a65980d3441,
            mid_setStepSizeControl_36e977212374ff6b,
            mid_setStepSizeControl_b0a935b68e41d65a,
            mid_sanityChecks_9a885fd893969c04,
            mid_getStepSizeHelper_22d091974ce7dd9a,
            mid_resetInternalState_0fa09c18fee449d5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AdaptiveStepsizeIntegrator(jobject obj) : ::org::hipparchus::ode::AbstractIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AdaptiveStepsizeIntegrator(const AdaptiveStepsizeIntegrator& obj) : ::org::hipparchus::ode::AbstractIntegrator(obj) {}

          AdaptiveStepsizeIntegrator(const ::java::lang::String &, jdouble, jdouble, const JArray< jdouble > &, const JArray< jdouble > &);
          AdaptiveStepsizeIntegrator(const ::java::lang::String &, jdouble, jdouble, jdouble, jdouble);

          jdouble getMaxStep() const;
          jdouble getMinStep() const;
          jdouble initializeStep(jboolean, jint, const JArray< jdouble > &, const ::org::hipparchus::ode::ODEStateAndDerivative &) const;
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
        extern PyType_Def PY_TYPE_DEF(AdaptiveStepsizeIntegrator);
        extern PyTypeObject *PY_TYPE(AdaptiveStepsizeIntegrator);

        class t_AdaptiveStepsizeIntegrator {
        public:
          PyObject_HEAD
          AdaptiveStepsizeIntegrator object;
          static PyObject *wrap_Object(const AdaptiveStepsizeIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
