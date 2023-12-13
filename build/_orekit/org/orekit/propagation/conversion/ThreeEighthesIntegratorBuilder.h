#ifndef org_orekit_propagation_conversion_ThreeEighthesIntegratorBuilder_H
#define org_orekit_propagation_conversion_ThreeEighthesIntegratorBuilder_H

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

        class ThreeEighthesIntegratorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_8ba9fe7a847cecad,
            mid_buildIntegrator_916fa199ca08d656,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ThreeEighthesIntegratorBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ThreeEighthesIntegratorBuilder(const ThreeEighthesIntegratorBuilder& obj) : ::java::lang::Object(obj) {}

          ThreeEighthesIntegratorBuilder(jdouble);

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
        extern PyType_Def PY_TYPE_DEF(ThreeEighthesIntegratorBuilder);
        extern PyTypeObject *PY_TYPE(ThreeEighthesIntegratorBuilder);

        class t_ThreeEighthesIntegratorBuilder {
        public:
          PyObject_HEAD
          ThreeEighthesIntegratorBuilder object;
          static PyObject *wrap_Object(const ThreeEighthesIntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
