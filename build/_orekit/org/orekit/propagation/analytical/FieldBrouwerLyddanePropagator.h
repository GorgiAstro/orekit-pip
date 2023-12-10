#ifndef org_orekit_propagation_analytical_FieldBrouwerLyddanePropagator_H
#define org_orekit_propagation_analytical_FieldBrouwerLyddanePropagator_H

#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class FieldKeplerianOrbit;
      class FieldOrbit;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;
          class UnnormalizedSphericalHarmonicsProvider;
        }
      }
    }
    namespace propagation {
      class FieldSpacecraftState;
      class PropagationType;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace attitudes {
      class AttitudeProvider;
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

        class FieldBrouwerLyddanePropagator : public ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator {
         public:
          enum {
            mid_init$_e7cd2ef2420d1594,
            mid_init$_3c3e85df13e3351b,
            mid_init$_90f2cc506ebfa134,
            mid_init$_85270cfa4cce05cb,
            mid_init$_41fc38cfd1c91d93,
            mid_init$_15911629bfdf8c58,
            mid_init$_844e097acddc5ee6,
            mid_init$_f2475f48f60e5e40,
            mid_init$_ca81bc3db3056d46,
            mid_init$_86281233528e311a,
            mid_init$_34a0dab3c03a36d1,
            mid_init$_0fc57aacdd580695,
            mid_init$_5c4212d79c973cfe,
            mid_init$_84e3b93e6a6da77c,
            mid_computeMeanOrbit_4be4dbea6fe8e776,
            mid_computeMeanOrbit_e3a434bff1818af6,
            mid_computeMeanOrbit_a3123543fdf24586,
            mid_getM2_dff5885c2c873297,
            mid_getM2_bf1d7732f1acb697,
            mid_getParametersDrivers_2afa36052df4765d,
            mid_propagateOrbit_3209fa9b92c0cbe8,
            mid_resetInitialState_1463d3d0d52f94dd,
            mid_resetInitialState_c0db61abf5db836e,
            mid_resetInitialState_25f988e2d639cbc3,
            mid_getMass_2a5f05be83ff251d,
            mid_resetIntermediateState_d141acdd230f09c3,
            mid_resetIntermediateState_33f1c56ea7775d4e,
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
