#ifndef org_hipparchus_ode_sampling_StepNormalizer_H
#define org_hipparchus_ode_sampling_StepNormalizer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEStateAndDerivative;
      namespace sampling {
        class StepNormalizerMode;
        class ODEStepHandler;
        class ODEStateInterpolator;
        class ODEFixedStepHandler;
        class StepNormalizerBounds;
      }
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
            mid_init$_b5c00afcec1667f9,
            mid_init$_f7bc224b2347e0ad,
            mid_init$_473336e8029e5846,
            mid_init$_3faa9635cbf6921f,
            mid_finish_b79fdee299d79fcc,
            mid_handleStep_b272ebb5ead79c81,
            mid_init_7e69c83de8052a2b,
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
