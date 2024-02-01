#ifndef org_hipparchus_ode_nonstiff_AdaptiveStepsizeIntegrator_H
#define org_hipparchus_ode_nonstiff_AdaptiveStepsizeIntegrator_H

#include "org/hipparchus/ode/AbstractIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
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
            mid_init$_d6318b18b89a5370,
            mid_init$_628c7a380d836cba,
            mid_getMaxStep_9981f74b2d109da6,
            mid_getMinStep_9981f74b2d109da6,
            mid_initializeStep_aad73fce3c1fe5f2,
            mid_setInitialStepSize_1ad26e8c8c0cd65b,
            mid_setStepSizeControl_e3195482263a60ce,
            mid_setStepSizeControl_cd5724127cc72e96,
            mid_getStepSizeHelper_4e1e04b2e648c6b6,
            mid_sanityChecks_e6ba2f1f75657f6f,
            mid_resetInternalState_ff7cb6c242604316,
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
