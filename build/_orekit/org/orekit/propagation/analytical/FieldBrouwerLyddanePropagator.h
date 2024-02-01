#ifndef org_orekit_propagation_analytical_FieldBrouwerLyddanePropagator_H
#define org_orekit_propagation_analytical_FieldBrouwerLyddanePropagator_H

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
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace orbits {
      class FieldKeplerianOrbit;
      class FieldOrbit;
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

        class FieldBrouwerLyddanePropagator : public ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator {
         public:
          enum {
            mid_init$_6d3e5f987a830a3b,
            mid_init$_539acfe2e5f6ae1b,
            mid_init$_93669897f2f7c3ab,
            mid_init$_8394801004611be0,
            mid_init$_b3dcad27f626eef5,
            mid_init$_50c5d81ea750571b,
            mid_init$_c265b32b1769c9e2,
            mid_init$_9627b0b9a9290bd8,
            mid_init$_516817cd6ce61a98,
            mid_init$_73d8738a0663d568,
            mid_init$_13e083b192b89480,
            mid_init$_a687bf3ab3b85a69,
            mid_init$_042321266dc0d7a4,
            mid_init$_7eeadcd63d1294c8,
            mid_computeMeanOrbit_7a3143cae3046017,
            mid_computeMeanOrbit_def5f45776007919,
            mid_computeMeanOrbit_1c0a31ba9556e12f,
            mid_getM2_9981f74b2d109da6,
            mid_getM2_209f08246d708042,
            mid_getParametersDrivers_d751c1a57012b438,
            mid_propagateOrbit_1f755a1c628f7fb8,
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
