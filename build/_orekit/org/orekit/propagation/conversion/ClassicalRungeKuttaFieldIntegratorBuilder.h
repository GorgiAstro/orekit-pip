#ifndef org_orekit_propagation_conversion_ClassicalRungeKuttaFieldIntegratorBuilder_H
#define org_orekit_propagation_conversion_ClassicalRungeKuttaFieldIntegratorBuilder_H

#include "org/orekit/propagation/conversion/AbstractFixedStepFieldIntegratorBuilder.h"

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
      class Orbit;
      class OrbitType;
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
            mid_init$_1ad26e8c8c0cd65b,
            mid_init$_f63ca9e3185c722e,
            mid_buildIntegrator_78d8a25057f42815,
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
