#ifndef org_orekit_propagation_conversion_ClassicalRungeKuttaFieldIntegratorBuilder_H
#define org_orekit_propagation_conversion_ClassicalRungeKuttaFieldIntegratorBuilder_H

#include "org/orekit/propagation/conversion/AbstractFixedStepFieldIntegratorBuilder.h"

namespace org {
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
    namespace ode {
      class AbstractFieldIntegrator;
    }
  }
  namespace orekit {
    namespace orbits {
      class OrbitType;
      class Orbit;
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

        class ClassicalRungeKuttaFieldIntegratorBuilder : public ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder {
         public:
          enum {
            mid_init$_10f281d777284cea,
            mid_init$_1ee4bed350fde589,
            mid_buildIntegrator_3a1ee7ebe4f0e344,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ClassicalRungeKuttaFieldIntegratorBuilder(jobject obj) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ClassicalRungeKuttaFieldIntegratorBuilder(const ClassicalRungeKuttaFieldIntegratorBuilder& obj) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(obj) {}

          ClassicalRungeKuttaFieldIntegratorBuilder(jdouble);
          ClassicalRungeKuttaFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement &);

          ::org::hipparchus::ode::AbstractFieldIntegrator buildIntegrator(const ::org::hipparchus::Field &, const ::org::orekit::orbits::Orbit &, const ::org::orekit::orbits::OrbitType &) const;
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
        extern PyType_Def PY_TYPE_DEF(ClassicalRungeKuttaFieldIntegratorBuilder);
        extern PyTypeObject *PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder);

        class t_ClassicalRungeKuttaFieldIntegratorBuilder {
        public:
          PyObject_HEAD
          ClassicalRungeKuttaFieldIntegratorBuilder object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ClassicalRungeKuttaFieldIntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ClassicalRungeKuttaFieldIntegratorBuilder&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
