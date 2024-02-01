#ifndef org_orekit_propagation_numerical_NumericalPropagator_H
#define org_orekit_propagation_numerical_NumericalPropagator_H

#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class AbsolutePVCoordinates;
      class TimeStampedPVCoordinates;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace orbits {
      class PositionAngleType;
      class Orbit;
      class OrbitType;
    }
    namespace frames {
      class Frame;
    }
    namespace propagation {
      class SpacecraftState;
    }
    namespace forces {
      class ForceModel;
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
            mid_init$_c17d99cd56eae8b6,
            mid_init$_76eafa66595c190d,
            mid_addForceModel_33ce7dbdc1ed7751,
            mid_getAllForceModels_d751c1a57012b438,
            mid_getOrbitType_495f818d3570b7f5,
            mid_getPVCoordinates_6236a35378ed47a5,
            mid_getPositionAngleType_a6db4e6edefda4be,
            mid_removeForceModels_ff7cb6c242604316,
            mid_resetInitialState_72b846eb87f3af9a,
            mid_setIgnoreCentralAttraction_b35db77cae58639e,
            mid_setInitialState_72b846eb87f3af9a,
            mid_setMu_1ad26e8c8c0cd65b,
            mid_setOrbitType_faf186fbb93ad060,
            mid_setPositionAngleType_266be23fd67cbce4,
            mid_tolerances_14229beb23f11c5c,
            mid_tolerances_f8917b89fe721e6e,
            mid_tolerances_dd7cd94dd65320be,
            mid_createHarvester_d0aee1b2c15f4d53,
            mid_setUpStmAndJacobianGenerators_ff7cb6c242604316,
            mid_beforeIntegration_14deaae988292d42,
            mid_createMapper_5f8935bd082b8966,
            mid_getMainStateEquations_97764934e3fe735c,
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
