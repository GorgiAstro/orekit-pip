#ifndef org_orekit_propagation_analytical_FieldBrouwerLyddanePropagator_H
#define org_orekit_propagation_analytical_FieldBrouwerLyddanePropagator_H

#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      class PropagationType;
    }
    namespace orbits {
      class FieldKeplerianOrbit;
      class FieldOrbit;
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
      class AbsoluteDate;
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

        class FieldBrouwerLyddanePropagator : public ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator {
         public:
          enum {
            mid_init$_6e1027e6668c8208,
            mid_init$_9b656d076a4d2789,
            mid_init$_99cf2c440abdfaef,
            mid_init$_38335f7b1fe61fc7,
            mid_init$_97907d506e451588,
            mid_init$_e87b6a768cdcf8f5,
            mid_init$_b9cbff40120896c7,
            mid_init$_0ff0b3e400576b55,
            mid_init$_b2558ce47031fa19,
            mid_init$_64c0f5b0e2fdabea,
            mid_init$_2a9edbe7aceb100e,
            mid_init$_0b72d5dce7fcac4a,
            mid_init$_e413f4035c489bc9,
            mid_init$_bdbbab21a21bfa46,
            mid_computeMeanOrbit_b06f522d9cdf543e,
            mid_computeMeanOrbit_5fac578b3283ffb2,
            mid_computeMeanOrbit_83cbf0b9564fa83b,
            mid_getM2_557b8123390d8d0c,
            mid_getM2_b0b988f941da47d8,
            mid_getParametersDrivers_0d9551367f7ecdef,
            mid_propagateOrbit_583cf00f45bb6ce5,
            mid_resetInitialState_b66c84a5711243d5,
            mid_resetInitialState_9c62e0ce1624c4ca,
            mid_resetInitialState_239ff49419dc21a7,
            mid_resetIntermediateState_9d68be2ff2b1080e,
            mid_resetIntermediateState_585702d5a402c590,
            mid_getMass_b884068a2c99f6ca,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldBrouwerLyddanePropagator(jobject obj) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldBrouwerLyddanePropagator(const FieldBrouwerLyddanePropagator& obj) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(obj) {}

          FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, jdouble);
          FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::propagation::PropagationType &, jdouble);
          FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, jdouble);
          FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, jdouble);
          FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, jdouble);
          FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::propagation::PropagationType &, jdouble);
          FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics &, jdouble);
          FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics &, const ::org::orekit::propagation::PropagationType &, jdouble);
          FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit &, jdouble, const ::org::hipparchus::CalculusFieldElement &, jdouble, jdouble, jdouble, jdouble, jdouble);
          FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::hipparchus::CalculusFieldElement &, jdouble, const ::org::hipparchus::CalculusFieldElement &, jdouble, jdouble, jdouble, jdouble, jdouble);
          FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, const ::org::hipparchus::CalculusFieldElement &, jdouble, jdouble, jdouble, jdouble, jdouble);
          FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, jdouble, const ::org::hipparchus::CalculusFieldElement &, jdouble, jdouble, jdouble, jdouble, jdouble);
          FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, jdouble, const ::org::hipparchus::CalculusFieldElement &, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::propagation::PropagationType &, jdouble);
          FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, jdouble, const ::org::hipparchus::CalculusFieldElement &, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::propagation::PropagationType &, jdouble, jdouble, jint);

          static ::org::orekit::orbits::FieldKeplerianOrbit computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics &, jdouble);
          static ::org::orekit::orbits::FieldKeplerianOrbit computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics &, jdouble, jdouble, jint);
          static ::org::orekit::orbits::FieldKeplerianOrbit computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint);
          jdouble getM2() const;
          jdouble getM2(const ::org::orekit::time::AbsoluteDate &) const;
          ::java::util::List getParametersDrivers() const;
          ::org::orekit::orbits::FieldKeplerianOrbit propagateOrbit(const ::org::orekit::time::FieldAbsoluteDate &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldBrouwerLyddanePropagator);
        extern PyTypeObject *PY_TYPE(FieldBrouwerLyddanePropagator);

        class t_FieldBrouwerLyddanePropagator {
        public:
          PyObject_HEAD
          FieldBrouwerLyddanePropagator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldBrouwerLyddanePropagator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldBrouwerLyddanePropagator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldBrouwerLyddanePropagator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
