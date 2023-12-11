#ifndef org_orekit_propagation_semianalytical_dsst_FieldDSSTPropagator_H
#define org_orekit_propagation_semianalytical_dsst_FieldDSSTPropagator_H

#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      class PropagationType;
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            class DSSTForceModel;
          }
        }
      }
    }
    namespace orbits {
      class OrbitType;
      class PositionAngleType;
      class FieldOrbit;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
    namespace ode {
      class FieldODEIntegrator;
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

          class FieldDSSTPropagator : public ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator {
           public:
            enum {
              mid_init$_68cc2850ac8c3b8a,
              mid_init$_d00ce4881929b1dd,
              mid_init$_5fd536ebd2e543f8,
              mid_init$_ae4c2f2efe8d710a,
              mid_addForceModel_2a559dedc6480c51,
              mid_computeMeanState_187529c751235134,
              mid_computeMeanState_13d36b3f0ae97f91,
              mid_computeOsculatingState_187529c751235134,
              mid_getAllForceModels_0d9551367f7ecdef,
              mid_getOrbitType_2cea2a2cb3e02091,
              mid_getPositionAngleType_f4984aee71df4c19,
              mid_getSatelliteRevolution_412668abc8d889e9,
              mid_getSelectedCoefficients_2dfcbd371d62f4e1,
              mid_initialIsOsculating_89b302893bdbe1f1,
              mid_removeForceModels_0640e6acf969ed28,
              mid_resetInitialState_b66c84a5711243d5,
              mid_setAttitudeProvider_8fa6c0c067ead7b2,
              mid_setInitialState_b66c84a5711243d5,
              mid_setInitialState_9c62e0ce1624c4ca,
              mid_setInterpolationGridToFixedNumberOfPoints_a3da1a935cb37f7b,
              mid_setInterpolationGridToMaxTimeGap_1ee4bed350fde589,
              mid_setMu_1ee4bed350fde589,
              mid_setSatelliteRevolution_a3da1a935cb37f7b,
              mid_setSelectedCoefficients_d05f6817e35222f6,
              mid_tolerances_308f592d4493a9ec,
              mid_tolerances_77222708c227fa61,
              mid_createMapper_ad7c2ac9dfe2008b,
              mid_getInitialIntegrationState_381b3e011cde018d,
              mid_beforeIntegration_811e49dad2467b67,
              mid_afterIntegration_0640e6acf969ed28,
              mid_getMainStateEquations_c822d3b1a2fa150a,
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
