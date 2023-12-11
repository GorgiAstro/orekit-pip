#ifndef org_orekit_propagation_semianalytical_dsst_DSSTPropagator_H
#define org_orekit_propagation_semianalytical_dsst_DSSTPropagator_H

#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class PropagationType;
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            class ShortPeriodTerms;
            class DSSTForceModel;
          }
        }
      }
      class SpacecraftState;
    }
    namespace orbits {
      class Orbit;
      class OrbitType;
      class PositionAngleType;
    }
    namespace attitudes {
      class AttitudeProvider;
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
    class Collection;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {

          class DSSTPropagator : public ::org::orekit::propagation::integration::AbstractIntegratedPropagator {
           public:
            enum {
              mid_init$_bb1ae62b5d826baa,
              mid_init$_f9a0f6f49e4bc2f0,
              mid_init$_f7aec771cf5adae1,
              mid_addForceModel_2a559dedc6480c51,
              mid_computeMeanState_0df22e98a56f8617,
              mid_computeMeanState_13b37fa0f1290791,
              mid_computeOsculatingState_0df22e98a56f8617,
              mid_getAllForceModels_0d9551367f7ecdef,
              mid_getOrbitType_2cea2a2cb3e02091,
              mid_getPositionAngleType_f4984aee71df4c19,
              mid_getSatelliteRevolution_412668abc8d889e9,
              mid_getSelectedCoefficients_2dfcbd371d62f4e1,
              mid_getShortPeriodTerms_0d9551367f7ecdef,
              mid_getShortPeriodTermsValue_2a145999b8c9a41d,
              mid_initialIsOsculating_89b302893bdbe1f1,
              mid_removeForceModels_0640e6acf969ed28,
              mid_resetInitialState_8655761ebf04b503,
              mid_setAttitudeProvider_8fa6c0c067ead7b2,
              mid_setInitialState_8655761ebf04b503,
              mid_setInitialState_cd59a3a5d9eb366e,
              mid_setInterpolationGridToFixedNumberOfPoints_a3da1a935cb37f7b,
              mid_setInterpolationGridToMaxTimeGap_10f281d777284cea,
              mid_setMu_10f281d777284cea,
              mid_setSatelliteRevolution_a3da1a935cb37f7b,
              mid_setSelectedCoefficients_d05f6817e35222f6,
              mid_setShortPeriodTerms_4ccaedadb068bdeb,
              mid_tolerances_db41ee0d716a9319,
              mid_tolerances_191511155bca2c72,
              mid_getJacobiansColumnsNames_0d9551367f7ecdef,
              mid_createHarvester_5f0409a66c29e9c1,
              mid_createMapper_31b084497c320ed2,
              mid_getInitialIntegrationState_15e85d5301b90ef8,
              mid_beforeIntegration_0472264ad6f40bc2,
              mid_afterIntegration_0640e6acf969ed28,
              mid_getMainStateEquations_4a2f137b7a0c1747,
              mid_setUpStmAndJacobianGenerators_0640e6acf969ed28,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DSSTPropagator(jobject obj) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DSSTPropagator(const DSSTPropagator& obj) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(obj) {}

            DSSTPropagator(const ::org::hipparchus::ode::ODEIntegrator &);
            DSSTPropagator(const ::org::hipparchus::ode::ODEIntegrator &, const ::org::orekit::propagation::PropagationType &);
            DSSTPropagator(const ::org::hipparchus::ode::ODEIntegrator &, const ::org::orekit::propagation::PropagationType &, const ::org::orekit::attitudes::AttitudeProvider &);

            void addForceModel(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel &) const;
            static ::org::orekit::propagation::SpacecraftState computeMeanState(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::attitudes::AttitudeProvider &, const ::java::util::Collection &);
            static ::org::orekit::propagation::SpacecraftState computeMeanState(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::attitudes::AttitudeProvider &, const ::java::util::Collection &, jdouble, jint);
            static ::org::orekit::propagation::SpacecraftState computeOsculatingState(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::attitudes::AttitudeProvider &, const ::java::util::Collection &);
            ::java::util::List getAllForceModels() const;
            ::org::orekit::orbits::OrbitType getOrbitType() const;
            ::org::orekit::orbits::PositionAngleType getPositionAngleType() const;
            jint getSatelliteRevolution() const;
            ::java::util::Set getSelectedCoefficients() const;
            ::java::util::List getShortPeriodTerms() const;
            JArray< jdouble > getShortPeriodTermsValue(const ::org::orekit::propagation::SpacecraftState &) const;
            jboolean initialIsOsculating() const;
            void removeForceModels() const;
            void resetInitialState(const ::org::orekit::propagation::SpacecraftState &) const;
            void setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider &) const;
            void setInitialState(const ::org::orekit::propagation::SpacecraftState &) const;
            void setInitialState(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::PropagationType &) const;
            void setInterpolationGridToFixedNumberOfPoints(jint) const;
            void setInterpolationGridToMaxTimeGap(jdouble) const;
            void setMu(jdouble) const;
            void setSatelliteRevolution(jint) const;
            void setSelectedCoefficients(const ::java::util::Set &) const;
            void setShortPeriodTerms(const ::java::util::List &) const;
            static JArray< JArray< jdouble > > tolerances(jdouble, const ::org::orekit::orbits::Orbit &);
            static JArray< JArray< jdouble > > tolerances(jdouble, jdouble, const ::org::orekit::orbits::Orbit &);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          extern PyType_Def PY_TYPE_DEF(DSSTPropagator);
          extern PyTypeObject *PY_TYPE(DSSTPropagator);

          class t_DSSTPropagator {
          public:
            PyObject_HEAD
            DSSTPropagator object;
            static PyObject *wrap_Object(const DSSTPropagator&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
