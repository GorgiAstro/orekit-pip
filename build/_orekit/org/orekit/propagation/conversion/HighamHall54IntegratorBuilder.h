#ifndef org_orekit_propagation_conversion_HighamHall54IntegratorBuilder_H
#define org_orekit_propagation_conversion_HighamHall54IntegratorBuilder_H

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

        class HighamHall54IntegratorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d0d6094fbd7015c5,
            mid_buildIntegrator_501b0015ccc7d54e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit HighamHall54IntegratorBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          HighamHall54IntegratorBuilder(const HighamHall54IntegratorBuilder& obj) : ::java::lang::Object(obj) {}

          HighamHall54IntegratorBuilder(jdouble, jdouble, jdouble);

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
        extern PyType_Def PY_TYPE_DEF(HighamHall54IntegratorBuilder);
        extern PyTypeObject *PY_TYPE(HighamHall54IntegratorBuilder);

        class t_HighamHall54IntegratorBuilder {
        public:
          PyObject_HEAD
          HighamHall54IntegratorBuilder object;
          static PyObject *wrap_Object(const HighamHall54IntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
