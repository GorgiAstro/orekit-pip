#ifndef org_orekit_propagation_conversion_HighamHall54FieldIntegratorBuilder_H
#define org_orekit_propagation_conversion_HighamHall54FieldIntegratorBuilder_H

#include "org/orekit/propagation/conversion/AbstractVariableStepFieldIntegratorBuilder.h"

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

        class HighamHall54FieldIntegratorBuilder : public ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder {
         public:
          enum {
            mid_init$_d0d6094fbd7015c5,
            mid_buildIntegrator_79616f78bb6df44f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit HighamHall54FieldIntegratorBuilder(jobject obj) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          HighamHall54FieldIntegratorBuilder(const HighamHall54FieldIntegratorBuilder& obj) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(obj) {}

          HighamHall54FieldIntegratorBuilder(jdouble, jdouble, jdouble);

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
        extern PyType_Def PY_TYPE_DEF(HighamHall54FieldIntegratorBuilder);
        extern PyTypeObject *PY_TYPE(HighamHall54FieldIntegratorBuilder);

        class t_HighamHall54FieldIntegratorBuilder {
        public:
          PyObject_HEAD
          HighamHall54FieldIntegratorBuilder object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_HighamHall54FieldIntegratorBuilder *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const HighamHall54FieldIntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const HighamHall54FieldIntegratorBuilder&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
