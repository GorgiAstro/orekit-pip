#ifndef org_orekit_propagation_conversion_AdamsBashforthFieldIntegratorBuilder_H
#define org_orekit_propagation_conversion_AdamsBashforthFieldIntegratorBuilder_H

#include "org/orekit/propagation/conversion/AbstractLimitedVariableStepFieldIntegratorBuilder.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class AbstractFieldIntegrator;
    }
    class Field;
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

        class AdamsBashforthFieldIntegratorBuilder : public ::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder {
         public:
          enum {
            mid_init$_2baad0ec229f7c27,
            mid_buildIntegrator_78d8a25057f42815,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AdamsBashforthFieldIntegratorBuilder(jobject obj) : ::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AdamsBashforthFieldIntegratorBuilder(const AdamsBashforthFieldIntegratorBuilder& obj) : ::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder(obj) {}

          AdamsBashforthFieldIntegratorBuilder(jint, jdouble, jdouble, jdouble);

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
        extern PyType_Def PY_TYPE_DEF(AdamsBashforthFieldIntegratorBuilder);
        extern PyTypeObject *PY_TYPE(AdamsBashforthFieldIntegratorBuilder);

        class t_AdamsBashforthFieldIntegratorBuilder {
        public:
          PyObject_HEAD
          AdamsBashforthFieldIntegratorBuilder object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AdamsBashforthFieldIntegratorBuilder *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AdamsBashforthFieldIntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AdamsBashforthFieldIntegratorBuilder&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
