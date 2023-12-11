#ifndef org_orekit_propagation_analytical_FieldEcksteinHechlerPropagator_H
#define org_orekit_propagation_analytical_FieldEcksteinHechlerPropagator_H

#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class FieldCircularOrbit;
      class FieldCartesianOrbit;
      class FieldOrbit;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class PropagationType;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class UnnormalizedSphericalHarmonicsProvider;
          class UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;
        }
      }
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace attitudes {
      class AttitudeProvider;
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
            mid_init$_ec031b66b07ecb90,
            mid_init$_80a234ce81e37abb,
            mid_init$_9cdfb4061632fec8,
            mid_init$_b34f75489d96f207,
            mid_init$_bde9c375988a3010,
            mid_init$_82f8dc253d3c59b3,
            mid_init$_d0b2761d0f0f5a83,
            mid_init$_06877b6db7691a80,
            mid_init$_b2558ce47031fa19,
            mid_init$_64c0f5b0e2fdabea,
            mid_init$_2a9edbe7aceb100e,
            mid_init$_0b72d5dce7fcac4a,
            mid_init$_99caca8adc04a715,
            mid_init$_9f779a5d6e916e5e,
            mid_computeMeanOrbit_eee8410a133b4699,
            mid_computeMeanOrbit_63fa5e3123158b2a,
            mid_computeMeanOrbit_ce208041cae640be,
            mid_getParametersDrivers_0d9551367f7ecdef,
            mid_propagateOrbit_e5485dda82f9ba8c,
            mid_resetInitialState_b66c84a5711243d5,
            mid_resetInitialState_9c62e0ce1624c4ca,
            mid_resetInitialState_239ff49419dc21a7,
            mid_resetIntermediateState_585702d5a402c590,
            mid_resetIntermediateState_9d68be2ff2b1080e,
            mid_getMass_b884068a2c99f6ca,
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
