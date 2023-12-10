#ifndef org_orekit_propagation_conversion_DormandPrince853FieldIntegratorBuilder_H
#define org_orekit_propagation_conversion_DormandPrince853FieldIntegratorBuilder_H

#include "org/orekit/propagation/conversion/AbstractVariableStepFieldIntegratorBuilder.h"

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

        class DormandPrince853FieldIntegratorBuilder : public ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder {
         public:
          enum {
            mid_init$_2c56b6dd4d4b1dec,
            mid_buildIntegrator_048f7039a7622a2b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DormandPrince853FieldIntegratorBuilder(jobject obj) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DormandPrince853FieldIntegratorBuilder(const DormandPrince853FieldIntegratorBuilder& obj) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(obj) {}

          DormandPrince853FieldIntegratorBuilder(jdouble, jdouble, jdouble);

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
        extern PyType_Def PY_TYPE_DEF(DormandPrince853FieldIntegratorBuilder);
        extern PyTypeObject *PY_TYPE(DormandPrince853FieldIntegratorBuilder);

        class t_DormandPrince853FieldIntegratorBuilder {
        public:
          PyObject_HEAD
          DormandPrince853FieldIntegratorBuilder object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DormandPrince853FieldIntegratorBuilder *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DormandPrince853FieldIntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DormandPrince853FieldIntegratorBuilder&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
