#ifndef org_hipparchus_ode_sampling_StepNormalizer_H
#define org_hipparchus_ode_sampling_StepNormalizer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        class ODEStateInterpolator;
        class StepNormalizerMode;
        class ODEStepHandler;
        class StepNormalizerBounds;
        class ODEFixedStepHandler;
      }
      class ODEStateAndDerivative;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        class StepNormalizer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3ce0a51a49512640,
            mid_init$_bcd163af3757bc17,
            mid_init$_cc1ad3d091b10555,
            mid_init$_941806f817f4c285,
            mid_finish_6bfc236263cc281c,
            mid_handleStep_4f79f5048423f318,
            mid_init_25005604bcb94d07,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StepNormalizer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StepNormalizer(const StepNormalizer& obj) : ::java::lang::Object(obj) {}

          StepNormalizer(jdouble, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler &);
          StepNormalizer(jdouble, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler &, const ::org::hipparchus::ode::sampling::StepNormalizerBounds &);
          StepNormalizer(jdouble, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler &, const ::org::hipparchus::ode::sampling::StepNormalizerMode &);
          StepNormalizer(jdouble, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler &, const ::org::hipparchus::ode::sampling::StepNormalizerMode &, const ::org::hipparchus::ode::sampling::StepNormalizerBounds &);

          void finish(const ::org::hipparchus::ode::ODEStateAndDerivative &) const;
          void handleStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator &) const;
          void init(const ::org::hipparchus::ode::ODEStateAndDerivative &, jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        extern PyType_Def PY_TYPE_DEF(StepNormalizer);
        extern PyTypeObject *PY_TYPE(StepNormalizer);

        class t_StepNormalizer {
        public:
          PyObject_HEAD
          StepNormalizer object;
          static PyObject *wrap_Object(const StepNormalizer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
