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
            mid_getFieldStep_d432811b42deb1dc,
            mid_checkStep_17db3a65980d3441,
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
