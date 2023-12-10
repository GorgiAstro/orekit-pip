#ifndef org_orekit_propagation_analytical_FieldKeplerianPropagator_H
#define org_orekit_propagation_analytical_FieldKeplerianPropagator_H

#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace orbits {
      class FieldOrbit;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        class FieldKeplerianPropagator : public ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator {
         public:
          enum {
            mid_init$_1cbcb2601e7d1334,
            mid_init$_a724b159b42485f4,
            mid_init$_78df6e2abd2c4c9f,
            mid_init$_11e81d70dfcadffc,
            mid_init$_e726da50143f87ae,
            mid_getParametersDrivers_2afa36052df4765d,
            mid_resetInitialState_1463d3d0d52f94dd,
            mid_propagateOrbit_3de5e0312fd3e848,
            mid_getMass_2a5f05be83ff251d,
            mid_resetIntermediateState_33f1c56ea7775d4e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldKeplerianPropagator(jobject obj) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldKeplerianPropagator(const FieldKeplerianPropagator& obj) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(obj) {}

          FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit &);
          FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::hipparchus::CalculusFieldElement &);
          FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &);
          FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &);
          FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);

          ::java::util::List getParametersDrivers() const;
          void resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        extern PyType_Def PY_TYPE_DEF(FieldKeplerianPropagator);
        extern PyTypeObject *PY_TYPE(FieldKeplerianPropagator);

        class t_FieldKeplerianPropagator {
        public:
          PyObject_HEAD
          FieldKeplerianPropagator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldKeplerianPropagator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldKeplerianPropagator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldKeplerianPropagator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
