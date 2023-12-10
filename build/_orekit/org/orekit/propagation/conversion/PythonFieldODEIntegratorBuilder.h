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
    class Field;
    namespace ode {
      class AbstractFieldIntegrator;
    }
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class FieldODEIntegratorBuilder;
      }
    }
    namespace orbits {
      class Orbit;
      class FieldOrbit;
      class OrbitType;
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
            mid_init$_7ae3461a92a43152,
            mid_buildIntegrator_071d3edeab1fa823,
            mid_buildIntegrator_79616f78bb6df44f,
            mid_finalize_7ae3461a92a43152,
            mid_pythonDecRef_7ae3461a92a43152,
            mid_pythonExtension_a27fc9afd27e559d,
            mid_pythonExtension_fefb08975c10f0a1,
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
