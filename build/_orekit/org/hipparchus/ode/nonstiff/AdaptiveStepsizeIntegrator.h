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
            mid_init$_1e32a92b3e654042,
            mid_init$_11f34b240685d435,
            mid_getMaxStep_557b8123390d8d0c,
            mid_getMinStep_557b8123390d8d0c,
            mid_initializeStep_68f61e23808708b3,
            mid_setInitialStepSize_10f281d777284cea,
            mid_setStepSizeControl_c13e969c0f339014,
            mid_setStepSizeControl_bc3712e794ac7a81,
            mid_getStepSizeHelper_3d29ab6ec5ee2607,
            mid_sanityChecks_4d28f529380c21e7,
            mid_resetInternalState_0640e6acf969ed28,
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
