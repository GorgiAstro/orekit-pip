#ifndef org_orekit_propagation_conversion_EulerIntegratorBuilder_H
#define org_orekit_propagation_conversion_EulerIntegratorBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace orbits {
      class Orbit;
      class OrbitType;
    }
    namespace propagation {
      namespace conversion {
        class ODEIntegratorBuilder;
      }
    }
  }
  namespace hipparchus {
    namespace ode {
      class AbstractIntegrator;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        class EulerIntegratorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_77e0f9a1f260e2e5,
            mid_buildIntegrator_501b0015ccc7d54e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EulerIntegratorBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EulerIntegratorBuilder(const EulerIntegratorBuilder& obj) : ::java::lang::Object(obj) {}

          EulerIntegratorBuilder(jdouble);

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
        extern PyType_Def PY_TYPE_DEF(EulerIntegratorBuilder);
        extern PyTypeObject *PY_TYPE(EulerIntegratorBuilder);

        class t_EulerIntegratorBuilder {
        public:
          PyObject_HEAD
          EulerIntegratorBuilder object;
          static PyObject *wrap_Object(const EulerIntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
