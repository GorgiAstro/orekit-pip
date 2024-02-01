#ifndef org_orekit_propagation_conversion_DormandPrince54FieldIntegratorBuilder_H
#define org_orekit_propagation_conversion_DormandPrince54FieldIntegratorBuilder_H

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

        class DormandPrince54FieldIntegratorBuilder : public ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder {
         public:
          enum {
            mid_init$_bd28dc6055dc5bbd,
            mid_buildIntegrator_78d8a25057f42815,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DormandPrince54FieldIntegratorBuilder(jobject obj) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DormandPrince54FieldIntegratorBuilder(const DormandPrince54FieldIntegratorBuilder& obj) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(obj) {}

          DormandPrince54FieldIntegratorBuilder(jdouble, jdouble, jdouble);

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
        extern PyType_Def PY_TYPE_DEF(DormandPrince54FieldIntegratorBuilder);
        extern PyTypeObject *PY_TYPE(DormandPrince54FieldIntegratorBuilder);

        class t_DormandPrince54FieldIntegratorBuilder {
        public:
          PyObject_HEAD
          DormandPrince54FieldIntegratorBuilder object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DormandPrince54FieldIntegratorBuilder *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DormandPrince54FieldIntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DormandPrince54FieldIntegratorBuilder&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
