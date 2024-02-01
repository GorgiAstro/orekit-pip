#ifndef org_orekit_propagation_analytical_FieldEcksteinHechlerPropagator_H
#define org_orekit_propagation_analytical_FieldEcksteinHechlerPropagator_H

#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class UnnormalizedSphericalHarmonicsProvider;
          class UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;
        }
      }
    }
    namespace orbits {
      class FieldCartesianOrbit;
      class FieldCircularOrbit;
      class FieldOrbit;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace propagation {
      class PropagationType;
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

        class FieldEcksteinHechlerPropagator : public ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator {
         public:
          enum {
            mid_init$_314c820a1e7c1663,
            mid_init$_00b0f0fb56ada103,
            mid_init$_5d73c911c6505852,
            mid_init$_81dd29e3f76becc4,
            mid_init$_667cf325ea473d95,
            mid_init$_cc10f06afbe3845e,
            mid_init$_7f9085f23fe2ce31,
            mid_init$_93d4e17fc1c6322f,
            mid_init$_516817cd6ce61a98,
            mid_init$_73d8738a0663d568,
            mid_init$_13e083b192b89480,
            mid_init$_a687bf3ab3b85a69,
            mid_init$_50bc4fb32621f1b9,
            mid_init$_e4ba29684db311f5,
            mid_computeMeanOrbit_ec0388255b81801d,
            mid_computeMeanOrbit_4c0a7cd91e5cf959,
            mid_computeMeanOrbit_d5a538763ec8a70f,
            mid_getParametersDrivers_d751c1a57012b438,
            mid_propagateOrbit_046039a02b0078e7,
            mid_resetInitialState_8062511934471166,
            mid_resetInitialState_b193ef1b0d3797c6,
            mid_resetInitialState_ef341cfbe40e092e,
            mid_getMass_cf010978f3c5a913,
            mid_resetIntermediateState_66f0dc53586b0de6,
            mid_resetIntermediateState_e90aea08a7a0ab5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldEcksteinHechlerPropagator(jobject obj) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldEcksteinHechlerPropagator(const FieldEcksteinHechlerPropagator& obj) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(obj) {}

          FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &);
          FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::propagation::PropagationType &);
          FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &);
          FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &);
          FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &);
          FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::propagation::PropagationType &);
          FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics &);
          FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics &, const ::org::orekit::propagation::PropagationType &);
          FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit &, jdouble, const ::org::hipparchus::CalculusFieldElement &, jdouble, jdouble, jdouble, jdouble, jdouble);
          FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::hipparchus::CalculusFieldElement &, jdouble, const ::org::hipparchus::CalculusFieldElement &, jdouble, jdouble, jdouble, jdouble, jdouble);
          FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, const ::org::hipparchus::CalculusFieldElement &, jdouble, jdouble, jdouble, jdouble, jdouble);
          FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, jdouble, const ::org::hipparchus::CalculusFieldElement &, jdouble, jdouble, jdouble, jdouble, jdouble);
          FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, jdouble, const ::org::hipparchus::CalculusFieldElement &, jdouble, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::propagation::PropagationType &);
          FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, jdouble, const ::org::hipparchus::CalculusFieldElement &, jdouble, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::propagation::PropagationType &, jdouble, jint);

          static ::org::orekit::orbits::FieldCircularOrbit computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics &);
          static ::org::orekit::orbits::FieldCircularOrbit computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics &, jdouble, jint);
          static ::org::orekit::orbits::FieldCircularOrbit computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint);
          ::java::util::List getParametersDrivers() const;
          ::org::orekit::orbits::FieldCartesianOrbit propagateOrbit(const ::org::orekit::time::FieldAbsoluteDate &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          void resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          void resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::PropagationType &) const;
          void resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::PropagationType &, jdouble, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldEcksteinHechlerPropagator);
        extern PyTypeObject *PY_TYPE(FieldEcksteinHechlerPropagator);

        class t_FieldEcksteinHechlerPropagator {
        public:
          PyObject_HEAD
          FieldEcksteinHechlerPropagator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldEcksteinHechlerPropagator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldEcksteinHechlerPropagator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldEcksteinHechlerPropagator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
