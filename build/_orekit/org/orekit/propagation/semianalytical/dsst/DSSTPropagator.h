#ifndef org_orekit_propagation_semianalytical_dsst_DSSTPropagator_H
#define org_orekit_propagation_semianalytical_dsst_DSSTPropagator_H

#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class Orbit;
      class OrbitType;
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
              mid_init$_16720c819e7ee0c1,
              mid_init$_ab7da0e7cb0692d7,
              mid_init$_48f8035a5cda539d,
              mid_addForceModel_8788ca485d7d47e4,
              mid_computeMeanState_83170c771fb244f1,
              mid_computeMeanState_7e87a80fc0ee5537,
              mid_computeOsculatingState_83170c771fb244f1,
              mid_getAllForceModels_2afa36052df4765d,
              mid_getOrbitType_e29360d311dc0e20,
              mid_getPositionAngleType_8f17e83e5a86217c,
              mid_getSatelliteRevolution_570ce0828f81a2c1,
              mid_getSelectedCoefficients_015730311a5bacdc,
              mid_getShortPeriodTerms_2afa36052df4765d,
              mid_getShortPeriodTermsValue_cb44069ef445f941,
              mid_initialIsOsculating_b108b35ef48e27bd,
              mid_removeForceModels_0fa09c18fee449d5,
              mid_resetInitialState_0ee5c56004643a2e,
              mid_setAttitudeProvider_3cff7c75ea06698c,
              mid_setInitialState_0ee5c56004643a2e,
              mid_setInitialState_49bd3c28fa9b4521,
              mid_setInterpolationGridToFixedNumberOfPoints_99803b0791f320ff,
              mid_setInterpolationGridToMaxTimeGap_17db3a65980d3441,
              mid_setMu_17db3a65980d3441,
              mid_setSatelliteRevolution_99803b0791f320ff,
              mid_setSelectedCoefficients_d8e4bbe7420244b7,
              mid_setShortPeriodTerms_de3e021e7266b71e,
              mid_tolerances_a8c32749a23019c2,
              mid_tolerances_2339ca44155876e5,
              mid_beforeIntegration_826b4eda94da4e78,
              mid_afterIntegration_0fa09c18fee449d5,
              mid_getInitialIntegrationState_c6311115fea01a34,
              mid_createMapper_2bea84b26b1efc07,
              mid_getMainStateEquations_e1fa3ce287fe2655,
              mid_getJacobiansColumnsNames_2afa36052df4765d,
              mid_createHarvester_5cfd2a13971b74c7,
              mid_setUpStmAndJacobianGenerators_0fa09c18fee449d5,
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
