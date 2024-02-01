#ifndef org_hipparchus_ode_sampling_FieldStepNormalizer_H
#define org_hipparchus_ode_sampling_FieldStepNormalizer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        class FieldODEFixedStepHandler;
        class StepNormalizerMode;
        class FieldODEStateInterpolator;
        class StepNormalizerBounds;
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
            mid_init$_d1411942feae3d8b,
            mid_init$_0ee1fc04e8e22554,
            mid_init$_dfdf06ef65333938,
            mid_init$_d89a930e263d6aad,
            mid_finish_380a9edd05c82300,
            mid_handleStep_d5c9193ad6d936b3,
            mid_init_2a077928ff78cfcb,
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
