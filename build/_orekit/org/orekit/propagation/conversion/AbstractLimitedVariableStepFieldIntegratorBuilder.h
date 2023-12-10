#ifndef org_orekit_propagation_conversion_AbstractLimitedVariableStepFieldIntegratorBuilder_H
#define org_orekit_propagation_conversion_AbstractLimitedVariableStepFieldIntegratorBuilder_H

#include "org/orekit/propagation/conversion/AbstractVariableStepFieldIntegratorBuilder.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        class AbstractLimitedVariableStepFieldIntegratorBuilder : public ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder {
         public:

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractLimitedVariableStepFieldIntegratorBuilder(jobject obj) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractLimitedVariableStepFieldIntegratorBuilder(const AbstractLimitedVariableStepFieldIntegratorBuilder& obj) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(obj) {}
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        extern PyType_Def PY_TYPE_DEF(AbstractLimitedVariableStepFieldIntegratorBuilder);
        extern PyTypeObject *PY_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder);

        class t_AbstractLimitedVariableStepFieldIntegratorBuilder {
        public:
          PyObject_HEAD
          AbstractLimitedVariableStepFieldIntegratorBuilder object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AbstractLimitedVariableStepFieldIntegratorBuilder *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AbstractLimitedVariableStepFieldIntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AbstractLimitedVariableStepFieldIntegratorBuilder&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
