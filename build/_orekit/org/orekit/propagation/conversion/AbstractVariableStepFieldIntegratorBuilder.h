#ifndef org_orekit_propagation_conversion_AbstractVariableStepFieldIntegratorBuilder_H
#define org_orekit_propagation_conversion_AbstractVariableStepFieldIntegratorBuilder_H

#include "org/orekit/propagation/conversion/AbstractFieldIntegratorBuilder.h"

namespace org {
  namespace hipparchus {
    class Field;
    namespace ode {
      class AbstractFieldIntegrator;
    }
  }
  namespace orekit {
    namespace orbits {
      class Orbit;
      class OrbitType;
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
  namespace orekit {
    namespace propagation {
      namespace conversion {

        class AbstractVariableStepFieldIntegratorBuilder : public ::org::orekit::propagation::conversion::AbstractFieldIntegratorBuilder {
         public:
          enum {
            mid_buildIntegrator_79616f78bb6df44f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractVariableStepFieldIntegratorBuilder(jobject obj) : ::org::orekit::propagation::conversion::AbstractFieldIntegratorBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractVariableStepFieldIntegratorBuilder(const AbstractVariableStepFieldIntegratorBuilder& obj) : ::org::orekit::propagation::conversion::AbstractFieldIntegratorBuilder(obj) {}

          ::org::hipparchus::ode::AbstractFieldIntegrator buildIntegrator(const ::org::hipparchus::Field &, const ::org::orekit::orbits::Orbit &, const ::org::orekit::orbits::OrbitType &) const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractVariableStepFieldIntegratorBuilder);
        extern PyTypeObject *PY_TYPE(AbstractVariableStepFieldIntegratorBuilder);

        class t_AbstractVariableStepFieldIntegratorBuilder {
        public:
          PyObject_HEAD
          AbstractVariableStepFieldIntegratorBuilder object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AbstractVariableStepFieldIntegratorBuilder *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AbstractVariableStepFieldIntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AbstractVariableStepFieldIntegratorBuilder&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
