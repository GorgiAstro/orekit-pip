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
  namespace orekit {
    namespace orbits {
      class Orbit;
      class OrbitType;
      class PositionAngleType;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace forces {
      class ForceModel;
    }
    namespace utils {
      class AbsolutePVCoordinates;
      class TimeStampedPVCoordinates;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        class NumericalPropagator : public ::org::orekit::propagation::integration::AbstractIntegratedPropagator {
         public:
          enum {
            mid_init$_bb1ae62b5d826baa,
            mid_init$_f44f1f23922eb43b,
            mid_addForceModel_e37f41a34246ae45,
            mid_getAllForceModels_0d9551367f7ecdef,
            mid_getOrbitType_2cea2a2cb3e02091,
            mid_getPVCoordinates_17742a9a6655bdb1,
            mid_getPositionAngleType_f4984aee71df4c19,
            mid_removeForceModels_0640e6acf969ed28,
            mid_resetInitialState_8655761ebf04b503,
            mid_setIgnoreCentralAttraction_ed2afdb8506b9742,
            mid_setInitialState_8655761ebf04b503,
            mid_setMu_10f281d777284cea,
            mid_setOrbitType_6ccfc646a24c9722,
            mid_setPositionAngleType_44c283653315b1a7,
            mid_tolerances_c9e850ea52a2bc82,
            mid_tolerances_bdf312e7fcba78d5,
            mid_tolerances_fe3b8e7f346d7253,
            mid_createHarvester_5f0409a66c29e9c1,
            mid_createMapper_31b084497c320ed2,
            mid_beforeIntegration_0472264ad6f40bc2,
            mid_getMainStateEquations_4a2f137b7a0c1747,
            mid_setUpStmAndJacobianGenerators_0640e6acf969ed28,
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
