#ifndef org_orekit_propagation_conversion_AbstractFieldIntegratorBuilder_H
#define org_orekit_propagation_conversion_AbstractFieldIntegratorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class Field;
    namespace ode {
      class AbstractFieldIntegrator;
    }
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class FieldODEIntegratorBuilder;
      }
    }
    namespace orbits {
      class Orbit;
      class FieldOrbit;
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

        class AbstractFieldIntegratorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_buildIntegrator_071d3edeab1fa823,
            mid_buildIntegrator_79616f78bb6df44f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractFieldIntegratorBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractFieldIntegratorBuilder(const AbstractFieldIntegratorBuilder& obj) : ::java::lang::Object(obj) {}

          AbstractFieldIntegratorBuilder();

          ::org::hipparchus::ode::AbstractFieldIntegrator buildIntegrator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::orbits::OrbitType &) const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractFieldIntegratorBuilder);
        extern PyTypeObject *PY_TYPE(AbstractFieldIntegratorBuilder);

        class t_AbstractFieldIntegratorBuilder {
        public:
          PyObject_HEAD
          AbstractFieldIntegratorBuilder object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AbstractFieldIntegratorBuilder *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AbstractFieldIntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AbstractFieldIntegratorBuilder&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
