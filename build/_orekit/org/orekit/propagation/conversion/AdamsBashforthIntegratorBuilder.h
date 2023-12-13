#ifndef org_orekit_propagation_conversion_AdamsBashforthIntegratorBuilder_H
#define org_orekit_propagation_conversion_AdamsBashforthIntegratorBuilder_H

#include "java/lang/Object.h"

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

        class AdamsBashforthIntegratorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_390258812740a16c,
            mid_buildIntegrator_916fa199ca08d656,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AdamsBashforthIntegratorBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AdamsBashforthIntegratorBuilder(const AdamsBashforthIntegratorBuilder& obj) : ::java::lang::Object(obj) {}

          AdamsBashforthIntegratorBuilder(jint, jdouble, jdouble, jdouble);

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
        extern PyType_Def PY_TYPE_DEF(AdamsBashforthIntegratorBuilder);
        extern PyTypeObject *PY_TYPE(AdamsBashforthIntegratorBuilder);

        class t_AdamsBashforthIntegratorBuilder {
        public:
          PyObject_HEAD
          AdamsBashforthIntegratorBuilder object;
          static PyObject *wrap_Object(const AdamsBashforthIntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
