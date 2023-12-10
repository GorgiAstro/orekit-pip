#ifndef org_orekit_propagation_numerical_NumericalPropagator_H
#define org_orekit_propagation_numerical_NumericalPropagator_H

#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class Orbit;
      class OrbitType;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class AbsolutePVCoordinates;
      class TimeStampedPVCoordinates;
    }
    namespace forces {
      class ForceModel;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace attitudes {
      class AttitudeProvider;
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
            mid_init$_16720c819e7ee0c1,
            mid_init$_5b526ccff1bb4b90,
            mid_addForceModel_690f9b27ef4d22fe,
            mid_getAllForceModels_2afa36052df4765d,
            mid_getOrbitType_e29360d311dc0e20,
            mid_getPVCoordinates_cfeec55f7c63ec64,
            mid_getPositionAngleType_8f17e83e5a86217c,
            mid_removeForceModels_0fa09c18fee449d5,
            mid_resetInitialState_0ee5c56004643a2e,
            mid_setIgnoreCentralAttraction_bd04c9335fb9e4cf,
            mid_setInitialState_0ee5c56004643a2e,
            mid_setMu_17db3a65980d3441,
            mid_setOrbitType_48a062bf972c4ab5,
            mid_setPositionAngleType_4ca1644ed7c72fe3,
            mid_tolerances_a306924d8981b7d2,
            mid_tolerances_76a035e28bb473a2,
            mid_tolerances_562bbe4c6c808876,
            mid_beforeIntegration_826b4eda94da4e78,
            mid_createMapper_2bea84b26b1efc07,
            mid_getMainStateEquations_e1fa3ce287fe2655,
            mid_createHarvester_5cfd2a13971b74c7,
            mid_setUpStmAndJacobianGenerators_0fa09c18fee449d5,
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
