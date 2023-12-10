#ifndef org_orekit_propagation_semianalytical_dsst_DSSTPropagator_H
#define org_orekit_propagation_semianalytical_dsst_DSSTPropagator_H

#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"

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
namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEIntegrator;
    }
  }
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
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
    namespace orbits {
      class PositionAngleType;
      class Orbit;
      class OrbitType;
    }
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
              mid_init$_8b1272a4b400cfb6,
              mid_init$_fad51e50ea7e824a,
              mid_init$_906f931497b667f3,
              mid_addForceModel_868bb92ba9b91af7,
              mid_computeMeanState_15ac77c6bb076e70,
              mid_computeMeanState_c4ce6d1e9b683ba5,
              mid_computeOsculatingState_15ac77c6bb076e70,
              mid_getAllForceModels_a6156df500549a58,
              mid_getOrbitType_63ea5cd020bf7bf1,
              mid_getPositionAngleType_2571e8fe1cede425,
              mid_getSatelliteRevolution_f2f64475e4580546,
              mid_getSelectedCoefficients_e9e1a6780fe94297,
              mid_getShortPeriodTerms_a6156df500549a58,
              mid_getShortPeriodTermsValue_137d7db4f3f987f7,
              mid_initialIsOsculating_e470b6d9e0d979db,
              mid_removeForceModels_7ae3461a92a43152,
              mid_resetInitialState_2b88003f931f70a7,
              mid_setAttitudeProvider_8109c1a27d4471d3,
              mid_setInitialState_2b88003f931f70a7,
              mid_setInitialState_dfbbbfbf78c55942,
              mid_setInterpolationGridToFixedNumberOfPoints_0a2a1ac2721c0336,
              mid_setInterpolationGridToMaxTimeGap_77e0f9a1f260e2e5,
              mid_setMu_77e0f9a1f260e2e5,
              mid_setSatelliteRevolution_0a2a1ac2721c0336,
              mid_setSelectedCoefficients_ef1b87702d7ae7b8,
              mid_setShortPeriodTerms_65de9727799c5641,
              mid_tolerances_dd1e294a07f13ec6,
              mid_tolerances_250ab7016fb7249f,
              mid_createHarvester_d3d4ea925a699046,
              mid_getJacobiansColumnsNames_a6156df500549a58,
              mid_setUpStmAndJacobianGenerators_7ae3461a92a43152,
              mid_beforeIntegration_3d13474d79f5e7bc,
              mid_afterIntegration_7ae3461a92a43152,
              mid_getInitialIntegrationState_dd3e4a8d51055f1f,
              mid_createMapper_083e2bc1612e9def,
              mid_getMainStateEquations_9c7da9606951e4f0,
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
