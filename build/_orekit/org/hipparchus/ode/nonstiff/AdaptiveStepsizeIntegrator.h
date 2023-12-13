#ifndef org_hipparchus_ode_nonstiff_AdaptiveStepsizeIntegrator_H
#define org_hipparchus_ode_nonstiff_AdaptiveStepsizeIntegrator_H

#include "org/hipparchus/ode/AbstractIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEStateAndDerivative;
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
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
            mid_init$_5cf41328bbe9ebd3,
            mid_init$_3644a0740275e98a,
            mid_getMaxStep_b74f83833fdad017,
            mid_getMinStep_b74f83833fdad017,
            mid_initializeStep_88c6c25d850bcf5e,
            mid_setInitialStepSize_8ba9fe7a847cecad,
            mid_setStepSizeControl_aa31b8b89ee72c31,
            mid_setStepSizeControl_49f4b5153d696ea5,
            mid_getStepSizeHelper_67c50c21236171f5,
            mid_sanityChecks_9ab16ee510aba086,
            mid_resetInternalState_a1fa5dae97ea5ed2,
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
