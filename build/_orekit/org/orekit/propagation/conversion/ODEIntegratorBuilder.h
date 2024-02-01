#ifndef org_orekit_propagation_conversion_ODEIntegratorBuilder_H
#define org_orekit_propagation_conversion_ODEIntegratorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class AbstractIntegrator;
    }
  }
  namespace orekit {
    namespace orbits {
      class OrbitType;
      class Orbit;
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

        class ODEIntegratorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_buildIntegrator_31c1ebb8b9cbaedc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ODEIntegratorBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ODEIntegratorBuilder(const ODEIntegratorBuilder& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::ode::AbstractIntegrator buildIntegrator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::orbits::OrbitType &) const;
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
        extern PyType_Def PY_TYPE_DEF(ODEIntegratorBuilder);
        extern PyTypeObject *PY_TYPE(ODEIntegratorBuilder);

        class t_ODEIntegratorBuilder {
        public:
          PyObject_HEAD
          ODEIntegratorBuilder object;
          static PyObject *wrap_Object(const ODEIntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
