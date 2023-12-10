#ifndef org_orekit_propagation_semianalytical_dsst_FieldDSSTPropagator_H
#define org_orekit_propagation_semianalytical_dsst_FieldDSSTPropagator_H

#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class FieldOrbit;
      class OrbitType;
    }
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            class DSSTForceModel;
          }
        }
      }
      class PropagationType;
      class FieldSpacecraftState;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
    namespace ode {
      class FieldODEIntegrator;
    }
    class Field;
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

          class FieldDSSTPropagator : public ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator {
           public:
            enum {
              mid_init$_bb6ed468e0500083,
              mid_init$_fd706f9f174d8023,
              mid_init$_b659cdfea9340f48,
              mid_init$_aa1947ee6105f29f,
              mid_addForceModel_8788ca485d7d47e4,
              mid_computeMeanState_95a39c01c9339818,
              mid_computeMeanState_2028ff7746183b5f,
              mid_computeOsculatingState_95a39c01c9339818,
              mid_getAllForceModels_2afa36052df4765d,
              mid_getOrbitType_e29360d311dc0e20,
              mid_getPositionAngleType_8f17e83e5a86217c,
              mid_getSatelliteRevolution_570ce0828f81a2c1,
              mid_getSelectedCoefficients_015730311a5bacdc,
              mid_initialIsOsculating_b108b35ef48e27bd,
              mid_removeForceModels_0fa09c18fee449d5,
              mid_resetInitialState_1463d3d0d52f94dd,
              mid_setAttitudeProvider_3cff7c75ea06698c,
              mid_setInitialState_1463d3d0d52f94dd,
              mid_setInitialState_c0db61abf5db836e,
              mid_setInterpolationGridToFixedNumberOfPoints_99803b0791f320ff,
              mid_setInterpolationGridToMaxTimeGap_072c8635f2164db9,
              mid_setMu_072c8635f2164db9,
              mid_setSatelliteRevolution_99803b0791f320ff,
              mid_setSelectedCoefficients_d8e4bbe7420244b7,
              mid_tolerances_b660a2aeb97c6859,
              mid_tolerances_6b50e92c502fa786,
              mid_beforeIntegration_8e8de2be1664674a,
              mid_afterIntegration_0fa09c18fee449d5,
              mid_getInitialIntegrationState_02cea343d9f71933,
              mid_createMapper_16c8184497a1d794,
              mid_getMainStateEquations_75bae68924620d17,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldDSSTPropagator(jobject obj) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldDSSTPropagator(const FieldDSSTPropagator& obj) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(obj) {}

            FieldDSSTPropagator(const ::org::hipparchus::Field &, const ::org::hipparchus::ode::FieldODEIntegrator &);
            FieldDSSTPropagator(const ::org::hipparchus::Field &, const ::org::hipparchus::ode::FieldODEIntegrator &, const ::org::orekit::propagation::PropagationType &);
            FieldDSSTPropagator(const ::org::hipparchus::Field &, const ::org::hipparchus::ode::FieldODEIntegrator &, const ::org::orekit::attitudes::AttitudeProvider &);
            FieldDSSTPropagator(const ::org::hipparchus::Field &, const ::org::hipparchus::ode::FieldODEIntegrator &, const ::org::orekit::propagation::PropagationType &, const ::org::orekit::attitudes::AttitudeProvider &);

            void addForceModel(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel &) const;
            static ::org::orekit::propagation::FieldSpacecraftState computeMeanState(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::attitudes::AttitudeProvider &, const ::java::util::Collection &);
            static ::org::orekit::propagation::FieldSpacecraftState computeMeanState(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::attitudes::AttitudeProvider &, const ::java::util::Collection &, jdouble, jint);
            static ::org::orekit::propagation::FieldSpacecraftState computeOsculatingState(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::attitudes::AttitudeProvider &, const ::java::util::Collection &);
            ::java::util::List getAllForceModels() const;
            ::org::orekit::orbits::OrbitType getOrbitType() const;
            ::org::orekit::orbits::PositionAngleType getPositionAngleType() const;
            jint getSatelliteRevolution() const;
            ::java::util::Set getSelectedCoefficients() const;
            jboolean initialIsOsculating() const;
            void removeForceModels() const;
            void resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState &) const;
            void setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider &) const;
            void setInitialState(const ::org::orekit::propagation::FieldSpacecraftState &) const;
            void setInitialState(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::PropagationType &) const;
            void setInterpolationGridToFixedNumberOfPoints(jint) const;
            void setInterpolationGridToMaxTimeGap(const ::org::hipparchus::CalculusFieldElement &) const;
            void setMu(const ::org::hipparchus::CalculusFieldElement &) const;
            void setSatelliteRevolution(jint) const;
            void setSelectedCoefficients(const ::java::util::Set &) const;
            static JArray< JArray< jdouble > > tolerances(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::orbits::FieldOrbit &);
            static JArray< JArray< jdouble > > tolerances(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::orbits::FieldOrbit &);
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
          extern PyType_Def PY_TYPE_DEF(FieldDSSTPropagator);
          extern PyTypeObject *PY_TYPE(FieldDSSTPropagator);

          class t_FieldDSSTPropagator {
          public:
            PyObject_HEAD
            FieldDSSTPropagator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldDSSTPropagator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldDSSTPropagator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldDSSTPropagator&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
