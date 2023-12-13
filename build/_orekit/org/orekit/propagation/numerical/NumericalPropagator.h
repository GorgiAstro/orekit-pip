#ifndef org_orekit_propagation_numerical_NumericalPropagator_H
#define org_orekit_propagation_numerical_NumericalPropagator_H

#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace forces {
      class ForceModel;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class AbsolutePVCoordinates;
    }
    namespace orbits {
      class Orbit;
      class PositionAngleType;
      class OrbitType;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
  namespace hipparchus {
    namespace ode {
      class ODEIntegrator;
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
      namespace numerical {

        class NumericalPropagator : public ::org::orekit::propagation::integration::AbstractIntegratedPropagator {
         public:
          enum {
            mid_init$_9bd4ec1fb1f57fec,
            mid_init$_8cb76235d98db22e,
            mid_addForceModel_43775e92e64180fc,
            mid_getAllForceModels_e62d3bb06d56d7e3,
            mid_getOrbitType_c7d4737d7afca612,
            mid_getPVCoordinates_e5d15ef236cd9ffe,
            mid_getPositionAngleType_c25055891f180348,
            mid_removeForceModels_a1fa5dae97ea5ed2,
            mid_resetInitialState_280c3390961e0a50,
            mid_setIgnoreCentralAttraction_fcb96c98de6fad04,
            mid_setInitialState_280c3390961e0a50,
            mid_setMu_8ba9fe7a847cecad,
            mid_setOrbitType_2fa1f3b8966f0286,
            mid_setPositionAngleType_778d09854443b806,
            mid_tolerances_5cc4ccb0751fcdce,
            mid_tolerances_317e36e0066b2cd6,
            mid_tolerances_fff282e93f6e84f2,
            mid_createHarvester_f85b53b28e0fe6bb,
            mid_createMapper_74f07e2c0845997b,
            mid_getMainStateEquations_8e0da39ae64099e8,
            mid_setUpStmAndJacobianGenerators_a1fa5dae97ea5ed2,
            mid_beforeIntegration_2d7f9a496c7e9781,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NumericalPropagator(jobject obj) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NumericalPropagator(const NumericalPropagator& obj) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(obj) {}

          NumericalPropagator(const ::org::hipparchus::ode::ODEIntegrator &);
          NumericalPropagator(const ::org::hipparchus::ode::ODEIntegrator &, const ::org::orekit::attitudes::AttitudeProvider &);

          void addForceModel(const ::org::orekit::forces::ForceModel &) const;
          ::java::util::List getAllForceModels() const;
          ::org::orekit::orbits::OrbitType getOrbitType() const;
          ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
          ::org::orekit::orbits::PositionAngleType getPositionAngleType() const;
          void removeForceModels() const;
          void resetInitialState(const ::org::orekit::propagation::SpacecraftState &) const;
          void setIgnoreCentralAttraction(jboolean) const;
          void setInitialState(const ::org::orekit::propagation::SpacecraftState &) const;
          void setMu(jdouble) const;
          void setOrbitType(const ::org::orekit::orbits::OrbitType &) const;
          void setPositionAngleType(const ::org::orekit::orbits::PositionAngleType &) const;
          static JArray< JArray< jdouble > > tolerances(jdouble, const ::org::orekit::utils::AbsolutePVCoordinates &);
          static JArray< JArray< jdouble > > tolerances(jdouble, const ::org::orekit::orbits::Orbit &, const ::org::orekit::orbits::OrbitType &);
          static JArray< JArray< jdouble > > tolerances(jdouble, jdouble, const ::org::orekit::orbits::Orbit &, const ::org::orekit::orbits::OrbitType &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        extern PyType_Def PY_TYPE_DEF(NumericalPropagator);
        extern PyTypeObject *PY_TYPE(NumericalPropagator);

        class t_NumericalPropagator {
        public:
          PyObject_HEAD
          NumericalPropagator object;
          static PyObject *wrap_Object(const NumericalPropagator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
