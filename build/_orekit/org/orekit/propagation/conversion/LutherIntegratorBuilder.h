#ifndef org_orekit_propagation_conversion_LutherIntegratorBuilder_H
#define org_orekit_propagation_conversion_LutherIntegratorBuilder_H

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

        class LutherIntegratorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_10f281d777284cea,
            mid_buildIntegrator_f50d555477b898d8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LutherIntegratorBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LutherIntegratorBuilder(const LutherIntegratorBuilder& obj) : ::java::lang::Object(obj) {}

          LutherIntegratorBuilder(jdouble);

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
        extern PyType_Def PY_TYPE_DEF(LutherIntegratorBuilder);
        extern PyTypeObject *PY_TYPE(LutherIntegratorBuilder);

        class t_LutherIntegratorBuilder {
        public:
          PyObject_HEAD
          LutherIntegratorBuilder object;
          static PyObject *wrap_Object(const LutherIntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
