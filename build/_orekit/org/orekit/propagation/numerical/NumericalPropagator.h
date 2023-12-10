#ifndef org_orekit_propagation_numerical_NumericalPropagator_H
#define org_orekit_propagation_numerical_NumericalPropagator_H

#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEIntegrator;
    }
  }
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace forces {
      class ForceModel;
    }
    namespace orbits {
      class Orbit;
      class PositionAngleType;
      class OrbitType;
    }
    namespace propagation {
      class SpacecraftState;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class AbsolutePVCoordinates;
    }
    namespace time {
      class AbsoluteDate;
    }
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
            mid_init$_8b1272a4b400cfb6,
            mid_init$_c465532ab551a8d9,
            mid_addForceModel_beaeb16a38eea9d3,
            mid_getAllForceModels_a6156df500549a58,
            mid_getOrbitType_63ea5cd020bf7bf1,
            mid_getPVCoordinates_20557c175f7cd899,
            mid_getPositionAngleType_2571e8fe1cede425,
            mid_removeForceModels_7ae3461a92a43152,
            mid_resetInitialState_2b88003f931f70a7,
            mid_setIgnoreCentralAttraction_50a2e0b139e80a58,
            mid_setInitialState_2b88003f931f70a7,
            mid_setMu_77e0f9a1f260e2e5,
            mid_setOrbitType_bbd02639b41d4055,
            mid_setPositionAngleType_07350e8db766ef51,
            mid_tolerances_9aec8b8a0c23a281,
            mid_tolerances_cd8f761b7b3ebe3a,
            mid_tolerances_d6ab85fc066957e5,
            mid_createHarvester_d3d4ea925a699046,
            mid_setUpStmAndJacobianGenerators_7ae3461a92a43152,
            mid_beforeIntegration_3d13474d79f5e7bc,
            mid_createMapper_083e2bc1612e9def,
            mid_getMainStateEquations_9c7da9606951e4f0,
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
