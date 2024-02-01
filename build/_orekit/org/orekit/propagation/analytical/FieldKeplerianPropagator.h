#ifndef org_orekit_propagation_analytical_FieldKeplerianPropagator_H
#define org_orekit_propagation_analytical_FieldKeplerianPropagator_H

#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace orbits {
      class FieldOrbit;
    }
    namespace propagation {
      class FieldSpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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
            mid_init$_3e61171636c74f2c,
            mid_init$_a445aea77f92643d,
            mid_init$_c9915b1ed04da18a,
            mid_init$_342804735e394007,
            mid_init$_0a3850612d59f85c,
            mid_getParametersDrivers_d751c1a57012b438,
            mid_resetInitialState_8062511934471166,
            mid_getMass_cf010978f3c5a913,
            mid_propagateOrbit_78985b34baac5c8e,
            mid_resetIntermediateState_e90aea08a7a0ab5e,
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
