#ifndef org_orekit_propagation_semianalytical_dsst_DSSTPropagator_H
#define org_orekit_propagation_semianalytical_dsst_DSSTPropagator_H

#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            class ShortPeriodTerms;
            class DSSTForceModel;
          }
        }
      }
      class PropagationType;
      class SpacecraftState;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace orbits {
      class Orbit;
      class PositionAngleType;
      class OrbitType;
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
              mid_init$_9bd4ec1fb1f57fec,
              mid_init$_f0d3d6e737d787ad,
              mid_init$_153d1681902fa55a,
              mid_addForceModel_d24de896ffe1d07a,
              mid_computeMeanState_a758179087969c11,
              mid_computeMeanState_25e2788c2a82293e,
              mid_computeOsculatingState_a758179087969c11,
              mid_getAllForceModels_e62d3bb06d56d7e3,
              mid_getOrbitType_c7d4737d7afca612,
              mid_getPositionAngleType_c25055891f180348,
              mid_getSatelliteRevolution_55546ef6a647f39b,
              mid_getSelectedCoefficients_7e8f11dd23d1142c,
              mid_getShortPeriodTerms_e62d3bb06d56d7e3,
              mid_getShortPeriodTermsValue_f227e5f48720b798,
              mid_initialIsOsculating_9ab94ac1dc23b105,
              mid_removeForceModels_a1fa5dae97ea5ed2,
              mid_resetInitialState_280c3390961e0a50,
              mid_setAttitudeProvider_8e4d3ea100bc0095,
              mid_setInitialState_280c3390961e0a50,
              mid_setInitialState_5cc6a7fd8ae54bf5,
              mid_setInterpolationGridToFixedNumberOfPoints_44ed599e93e8a30c,
              mid_setInterpolationGridToMaxTimeGap_8ba9fe7a847cecad,
              mid_setMu_8ba9fe7a847cecad,
              mid_setSatelliteRevolution_44ed599e93e8a30c,
              mid_setSelectedCoefficients_4d8d93045ba4dc2c,
              mid_setShortPeriodTerms_0e7c3032c7c93ed3,
              mid_tolerances_0f9017a4d6b57b54,
              mid_tolerances_a8d3338ffaa47864,
              mid_getJacobiansColumnsNames_e62d3bb06d56d7e3,
              mid_createHarvester_f85b53b28e0fe6bb,
              mid_createMapper_74f07e2c0845997b,
              mid_getMainStateEquations_8e0da39ae64099e8,
              mid_setUpStmAndJacobianGenerators_a1fa5dae97ea5ed2,
              mid_getInitialIntegrationState_9d155cc8314c99cf,
              mid_beforeIntegration_2d7f9a496c7e9781,
              mid_afterIntegration_a1fa5dae97ea5ed2,
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
