#ifndef org_hipparchus_ode_sampling_FieldStepNormalizer_H
#define org_hipparchus_ode_sampling_FieldStepNormalizer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class FieldODEStateAndDerivative;
      namespace sampling {
        class StepNormalizerMode;
        class FieldODEStepHandler;
        class FieldODEFixedStepHandler;
        class FieldODEStateInterpolator;
        class StepNormalizerBounds;
      }
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
            mid_init$_df392bf2a28ee62c,
            mid_init$_2e678b88ebeeab2c,
            mid_init$_e15e9bcadc2f715f,
            mid_init$_5f2135f6c74e5ad2,
            mid_finish_5b8144cf9ccecc03,
            mid_handleStep_bd804f650c074774,
            mid_init_55fdeef582303a99,
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
