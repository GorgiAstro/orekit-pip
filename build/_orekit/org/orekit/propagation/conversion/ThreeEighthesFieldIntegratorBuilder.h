#ifndef org_orekit_propagation_conversion_ThreeEighthesFieldIntegratorBuilder_H
#define org_orekit_propagation_conversion_ThreeEighthesFieldIntegratorBuilder_H

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

        class ThreeEighthesFieldIntegratorBuilder : public ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder {
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

          explicit ThreeEighthesFieldIntegratorBuilder(jobject obj) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ThreeEighthesFieldIntegratorBuilder(const ThreeEighthesFieldIntegratorBuilder& obj) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(obj) {}

          ThreeEighthesFieldIntegratorBuilder(jdouble);
          ThreeEighthesFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement &);

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
        extern PyType_Def PY_TYPE_DEF(ThreeEighthesFieldIntegratorBuilder);
        extern PyTypeObject *PY_TYPE(ThreeEighthesFieldIntegratorBuilder);

        class t_ThreeEighthesFieldIntegratorBuilder {
        public:
          PyObject_HEAD
          ThreeEighthesFieldIntegratorBuilder object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ThreeEighthesFieldIntegratorBuilder *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ThreeEighthesFieldIntegratorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ThreeEighthesFieldIntegratorBuilder&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
