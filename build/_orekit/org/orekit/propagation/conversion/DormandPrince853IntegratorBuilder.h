#ifndef org_orekit_propagation_conversion_DormandPrince853IntegratorBuilder_H
#define org_orekit_propagation_conversion_DormandPrince853IntegratorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class ODEIntegratorBuilder;
      }
    }
    namespace orbits {
      class Orbit;
      class OrbitType;
    }
  }
  namespace hipparchus {
    namespace ode {
      class AbstractIntegrator;
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

        class DormandPrince853IntegratorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_bd28dc6055dc5bbd,
            mid_buildIntegrator_31c1ebb8b9cbaedc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DormandPrince853IntegratorBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DormandPrince853IntegratorBuilder(const DormandPrince853IntegratorBuilder& obj) : ::java::lang::Object(obj) {}

          DormandPrince853IntegratorBuilder(jdouble, jdouble, jdouble);

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
        extern PyType_Def PY_TYPE_DEF(DormandPrince853IntegratorBuilder);
        extern PyTypeObject *PY_TYPE(DormandPrince853IntegratorBuilder);

        class t_DormandPrince853IntegratorBuilder {
        public:
          PyObject_HEAD
          DormandPrince853IntegratorBuilder object;
          static PyObject *wrap_Object(const DormandPrince853IntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
