#ifndef org_orekit_propagation_conversion_PythonFieldODEIntegratorBuilder_H
#define org_orekit_propagation_conversion_PythonFieldODEIntegratorBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace ode {
      class AbstractFieldIntegrator;
    }
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace orbits {
      class OrbitType;
      class Orbit;
      class FieldOrbit;
    }
    namespace propagation {
      namespace conversion {
        class FieldODEIntegratorBuilder;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        class PythonFieldODEIntegratorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_buildIntegrator_d2b5a7210d9a6d44,
            mid_buildIntegrator_78d8a25057f42815,
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

          explicit PythonFieldODEIntegratorBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonFieldODEIntegratorBuilder(const PythonFieldODEIntegratorBuilder& obj) : ::java::lang::Object(obj) {}

          PythonFieldODEIntegratorBuilder();

          ::org::hipparchus::ode::AbstractFieldIntegrator buildIntegrator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::orbits::OrbitType &) const;
          ::org::hipparchus::ode::AbstractFieldIntegrator buildIntegrator(const ::org::hipparchus::Field &, const ::org::orekit::orbits::Orbit &, const ::org::orekit::orbits::OrbitType &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonFieldODEIntegratorBuilder);
        extern PyTypeObject *PY_TYPE(PythonFieldODEIntegratorBuilder);

        class t_PythonFieldODEIntegratorBuilder {
        public:
          PyObject_HEAD
          PythonFieldODEIntegratorBuilder object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PythonFieldODEIntegratorBuilder *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PythonFieldODEIntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PythonFieldODEIntegratorBuilder&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
