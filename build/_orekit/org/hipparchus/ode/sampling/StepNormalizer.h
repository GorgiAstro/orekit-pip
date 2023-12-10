#ifndef org_hipparchus_ode_sampling_StepNormalizer_H
#define org_hipparchus_ode_sampling_StepNormalizer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        class StepNormalizerBounds;
        class StepNormalizerMode;
        class ODEFixedStepHandler;
        class ODEStepHandler;
        class ODEStateInterpolator;
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
            mid_init$_c334db62477c934b,
            mid_init$_bd641fe5a14778d1,
            mid_init$_68002566390c50c2,
            mid_init$_2677c76d5904b812,
            mid_finish_250c80d95e429c01,
            mid_handleStep_8c00288d760ba078,
            mid_init_5aaadc62bce8a394,
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
