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
            mid_init$_564b745a777c418d,
            mid_init$_117a615685ad06d4,
            mid_getMaxStep_456d9a2f64d6b28d,
            mid_getMinStep_456d9a2f64d6b28d,
            mid_initializeStep_2d07dbdb6870e899,
            mid_setInitialStepSize_77e0f9a1f260e2e5,
            mid_setStepSizeControl_e5787c5177784e12,
            mid_setStepSizeControl_667a7965403ed91a,
            mid_sanityChecks_d60bc5812a8e442c,
            mid_getStepSizeHelper_b1c87be850abd6a4,
            mid_resetInternalState_7ae3461a92a43152,
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
