#ifndef org_orekit_propagation_semianalytical_dsst_DSSTPropagator_H
#define org_orekit_propagation_semianalytical_dsst_DSSTPropagator_H

#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            class DSSTForceModel;
            class ShortPeriodTerms;
          }
        }
      }
      class PropagationType;
      class SpacecraftState;
    }
    namespace orbits {
      class OrbitType;
      class PositionAngleType;
      class Orbit;
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
              mid_init$_c17d99cd56eae8b6,
              mid_init$_9526e1a202c1b9c8,
              mid_init$_701625efdd6dd588,
              mid_addForceModel_a0575630e19e1e5c,
              mid_computeMeanState_ec4b975710cb23f6,
              mid_computeMeanState_04c94896b7fc0007,
              mid_computeOsculatingState_ec4b975710cb23f6,
              mid_getAllForceModels_d751c1a57012b438,
              mid_getOrbitType_495f818d3570b7f5,
              mid_getPositionAngleType_a6db4e6edefda4be,
              mid_getSatelliteRevolution_d6ab429752e7c267,
              mid_getSelectedCoefficients_6b191a9b12c1004b,
              mid_getShortPeriodTerms_d751c1a57012b438,
              mid_getShortPeriodTermsValue_e8a4ac02afc72623,
              mid_initialIsOsculating_eee3de00fe971136,
              mid_removeForceModels_ff7cb6c242604316,
              mid_resetInitialState_72b846eb87f3af9a,
              mid_setAttitudeProvider_fddd0a7d9f33bafa,
              mid_setInitialState_72b846eb87f3af9a,
              mid_setInitialState_3f94e7a0a2844a08,
              mid_setInterpolationGridToFixedNumberOfPoints_8fd427ab23829bf5,
              mid_setInterpolationGridToMaxTimeGap_1ad26e8c8c0cd65b,
              mid_setMu_1ad26e8c8c0cd65b,
              mid_setSatelliteRevolution_8fd427ab23829bf5,
              mid_setSelectedCoefficients_26a98b9ee89414c5,
              mid_setShortPeriodTerms_aa335fea495d60e0,
              mid_tolerances_b3a187e4032a64c6,
              mid_tolerances_900298746b09a8b2,
              mid_getJacobiansColumnsNames_d751c1a57012b438,
              mid_createHarvester_d0aee1b2c15f4d53,
              mid_setUpStmAndJacobianGenerators_ff7cb6c242604316,
              mid_beforeIntegration_14deaae988292d42,
              mid_afterIntegration_ff7cb6c242604316,
              mid_getInitialIntegrationState_8fbfa58855031235,
              mid_createMapper_5f8935bd082b8966,
              mid_getMainStateEquations_97764934e3fe735c,
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
