#ifndef org_orekit_propagation_conversion_PythonODEIntegratorBuilder_H
#define org_orekit_propagation_conversion_PythonODEIntegratorBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        class PythonODEIntegratorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_buildIntegrator_31c1ebb8b9cbaedc,
            mid_finalize_ff7cb6c242604316,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonODEIntegratorBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonODEIntegratorBuilder(const PythonODEIntegratorBuilder& obj) : ::java::lang::Object(obj) {}

          PythonODEIntegratorBuilder();

          ::org::hipparchus::ode::AbstractIntegrator buildIntegrator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::orbits::OrbitType &) const;
          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonODEIntegratorBuilder);
        extern PyTypeObject *PY_TYPE(PythonODEIntegratorBuilder);

        class t_PythonODEIntegratorBuilder {
        public:
          PyObject_HEAD
          PythonODEIntegratorBuilder object;
          static PyObject *wrap_Object(const PythonODEIntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
