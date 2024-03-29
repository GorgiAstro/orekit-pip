#ifndef org_orekit_propagation_conversion_FieldODEIntegratorBuilder_H
#define org_orekit_propagation_conversion_FieldODEIntegratorBuilder_H

#include "java/lang/Object.h"

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

        class FieldODEIntegratorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_buildIntegrator_d2b5a7210d9a6d44,
            mid_buildIntegrator_78d8a25057f42815,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldODEIntegratorBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldODEIntegratorBuilder(const FieldODEIntegratorBuilder& obj) : ::java::lang::Object(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(FieldODEIntegratorBuilder);
        extern PyTypeObject *PY_TYPE(FieldODEIntegratorBuilder);

        class t_FieldODEIntegratorBuilder {
        public:
          PyObject_HEAD
          FieldODEIntegratorBuilder object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldODEIntegratorBuilder *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldODEIntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldODEIntegratorBuilder&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
