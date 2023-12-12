#ifndef org_orekit_propagation_conversion_GraggBulirschStoerIntegratorBuilder_H
#define org_orekit_propagation_conversion_GraggBulirschStoerIntegratorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class OrbitType;
      class Orbit;
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

        class GraggBulirschStoerIntegratorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_87096e3fd8086100,
            mid_buildIntegrator_f50d555477b898d8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GraggBulirschStoerIntegratorBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GraggBulirschStoerIntegratorBuilder(const GraggBulirschStoerIntegratorBuilder& obj) : ::java::lang::Object(obj) {}

          GraggBulirschStoerIntegratorBuilder(jdouble, jdouble, jdouble);

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
        extern PyType_Def PY_TYPE_DEF(GraggBulirschStoerIntegratorBuilder);
        extern PyTypeObject *PY_TYPE(GraggBulirschStoerIntegratorBuilder);

        class t_GraggBulirschStoerIntegratorBuilder {
        public:
          PyObject_HEAD
          GraggBulirschStoerIntegratorBuilder object;
          static PyObject *wrap_Object(const GraggBulirschStoerIntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
