#ifndef org_orekit_propagation_conversion_AbstractFixedStepFieldIntegratorBuilder_H
#define org_orekit_propagation_conversion_AbstractFixedStepFieldIntegratorBuilder_H

#include "org/orekit/propagation/conversion/AbstractFieldIntegratorBuilder.h"

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

        class AbstractFixedStepFieldIntegratorBuilder : public ::org::orekit::propagation::conversion::AbstractFieldIntegratorBuilder {
         public:
          enum {
            mid_getFieldStep_82f08cbfdc38e40a,
            mid_checkStep_1ad26e8c8c0cd65b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractFixedStepFieldIntegratorBuilder(jobject obj) : ::org::orekit::propagation::conversion::AbstractFieldIntegratorBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractFixedStepFieldIntegratorBuilder(const AbstractFixedStepFieldIntegratorBuilder& obj) : ::org::orekit::propagation::conversion::AbstractFieldIntegratorBuilder(obj) {}
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
        extern PyType_Def PY_TYPE_DEF(AbstractFixedStepFieldIntegratorBuilder);
        extern PyTypeObject *PY_TYPE(AbstractFixedStepFieldIntegratorBuilder);

        class t_AbstractFixedStepFieldIntegratorBuilder {
        public:
          PyObject_HEAD
          AbstractFixedStepFieldIntegratorBuilder object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AbstractFixedStepFieldIntegratorBuilder *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AbstractFixedStepFieldIntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AbstractFixedStepFieldIntegratorBuilder&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
