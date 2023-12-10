#ifndef org_orekit_propagation_conversion_MidpointFieldIntegratorBuilder_H
#define org_orekit_propagation_conversion_MidpointFieldIntegratorBuilder_H

#include "org/orekit/propagation/conversion/AbstractFixedStepFieldIntegratorBuilder.h"

namespace org {
  namespace hipparchus {
    class Field;
    namespace ode {
      class AbstractFieldIntegrator;
    }
    class CalculusFieldElement;
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

        class MidpointFieldIntegratorBuilder : public ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder {
         public:
          enum {
            mid_init$_77e0f9a1f260e2e5,
            mid_init$_03a16642f77779e7,
            mid_buildIntegrator_79616f78bb6df44f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MidpointFieldIntegratorBuilder(jobject obj) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MidpointFieldIntegratorBuilder(const MidpointFieldIntegratorBuilder& obj) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(obj) {}

          MidpointFieldIntegratorBuilder(jdouble);
          MidpointFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement &);

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
        extern PyType_Def PY_TYPE_DEF(MidpointFieldIntegratorBuilder);
        extern PyTypeObject *PY_TYPE(MidpointFieldIntegratorBuilder);

        class t_MidpointFieldIntegratorBuilder {
        public:
          PyObject_HEAD
          MidpointFieldIntegratorBuilder object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MidpointFieldIntegratorBuilder *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MidpointFieldIntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MidpointFieldIntegratorBuilder&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
