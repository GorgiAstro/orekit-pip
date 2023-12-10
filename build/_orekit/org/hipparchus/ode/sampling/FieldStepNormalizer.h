#ifndef org_hipparchus_ode_sampling_FieldStepNormalizer_H
#define org_hipparchus_ode_sampling_FieldStepNormalizer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        class StepNormalizerBounds;
        class FieldODEFixedStepHandler;
        class StepNormalizerMode;
        class FieldODEStateInterpolator;
        class FieldODEStepHandler;
      }
      class FieldODEStateAndDerivative;
    }
    class CalculusFieldElement;
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

        class FieldStepNormalizer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_87105576c0f42e5e,
            mid_init$_51301a8624eb8a31,
            mid_init$_4c94baa2fda3d373,
            mid_init$_3f72002b9371a037,
            mid_finish_22d6c75b64070b54,
            mid_handleStep_f31e7e3a46e05334,
            mid_init_81b5dd1fb920fdc1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldStepNormalizer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldStepNormalizer(const FieldStepNormalizer& obj) : ::java::lang::Object(obj) {}

          FieldStepNormalizer(jdouble, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler &);
          FieldStepNormalizer(jdouble, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler &, const ::org::hipparchus::ode::sampling::StepNormalizerBounds &);
          FieldStepNormalizer(jdouble, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler &, const ::org::hipparchus::ode::sampling::StepNormalizerMode &);
          FieldStepNormalizer(jdouble, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler &, const ::org::hipparchus::ode::sampling::StepNormalizerMode &, const ::org::hipparchus::ode::sampling::StepNormalizerBounds &);

          void finish(const ::org::hipparchus::ode::FieldODEStateAndDerivative &) const;
          void handleStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator &) const;
          void init(const ::org::hipparchus::ode::FieldODEStateAndDerivative &, const ::org::hipparchus::CalculusFieldElement &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldStepNormalizer);
        extern PyTypeObject *PY_TYPE(FieldStepNormalizer);

        class t_FieldStepNormalizer {
        public:
          PyObject_HEAD
          FieldStepNormalizer object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldStepNormalizer *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldStepNormalizer&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldStepNormalizer&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
