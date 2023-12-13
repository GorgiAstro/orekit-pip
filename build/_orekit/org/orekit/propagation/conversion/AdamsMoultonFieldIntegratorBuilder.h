#ifndef org_orekit_propagation_conversion_AdamsMoultonFieldIntegratorBuilder_H
#define org_orekit_propagation_conversion_AdamsMoultonFieldIntegratorBuilder_H

#include "org/orekit/propagation/conversion/AbstractLimitedVariableStepFieldIntegratorBuilder.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class Orbit;
      class OrbitType;
    }
  }
  namespace hipparchus {
    class Field;
    namespace ode {
      class AbstractFieldIntegrator;
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

        class AdamsMoultonFieldIntegratorBuilder : public ::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder {
         public:
          enum {
            mid_init$_390258812740a16c,
            mid_buildIntegrator_ce58c6ef4cfb23c4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AdamsMoultonFieldIntegratorBuilder(jobject obj) : ::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AdamsMoultonFieldIntegratorBuilder(const AdamsMoultonFieldIntegratorBuilder& obj) : ::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder(obj) {}

          AdamsMoultonFieldIntegratorBuilder(jint, jdouble, jdouble, jdouble);

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
        extern PyType_Def PY_TYPE_DEF(AdamsMoultonFieldIntegratorBuilder);
        extern PyTypeObject *PY_TYPE(AdamsMoultonFieldIntegratorBuilder);

        class t_AdamsMoultonFieldIntegratorBuilder {
        public:
          PyObject_HEAD
          AdamsMoultonFieldIntegratorBuilder object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AdamsMoultonFieldIntegratorBuilder *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AdamsMoultonFieldIntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AdamsMoultonFieldIntegratorBuilder&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
