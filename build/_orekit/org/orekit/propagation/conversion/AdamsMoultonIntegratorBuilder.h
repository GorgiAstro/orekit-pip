#ifndef org_orekit_propagation_conversion_AdamsMoultonIntegratorBuilder_H
#define org_orekit_propagation_conversion_AdamsMoultonIntegratorBuilder_H

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

        class AdamsMoultonIntegratorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_2baad0ec229f7c27,
            mid_buildIntegrator_31c1ebb8b9cbaedc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AdamsMoultonIntegratorBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AdamsMoultonIntegratorBuilder(const AdamsMoultonIntegratorBuilder& obj) : ::java::lang::Object(obj) {}

          AdamsMoultonIntegratorBuilder(jint, jdouble, jdouble, jdouble);

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
        extern PyType_Def PY_TYPE_DEF(AdamsMoultonIntegratorBuilder);
        extern PyTypeObject *PY_TYPE(AdamsMoultonIntegratorBuilder);

        class t_AdamsMoultonIntegratorBuilder {
        public:
          PyObject_HEAD
          AdamsMoultonIntegratorBuilder object;
          static PyObject *wrap_Object(const AdamsMoultonIntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
