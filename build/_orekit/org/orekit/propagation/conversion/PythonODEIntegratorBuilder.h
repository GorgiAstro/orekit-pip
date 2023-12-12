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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        class PythonODEIntegratorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_buildIntegrator_f50d555477b898d8,
            mid_finalize_0640e6acf969ed28,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
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
