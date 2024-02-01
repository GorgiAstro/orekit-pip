#ifndef org_orekit_propagation_semianalytical_dsst_FieldDSSTPropagator_H
#define org_orekit_propagation_semianalytical_dsst_FieldDSSTPropagator_H

#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator.h"

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
          }
        }
      }
      class PropagationType;
      class FieldSpacecraftState;
    }
    namespace orbits {
      class PositionAngleType;
      class FieldOrbit;
      class OrbitType;
    }
  }
  namespace hipparchus {
    class Field;
    namespace ode {
      class FieldODEIntegrator;
    }
    class CalculusFieldElement;
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
              mid_init$_b353d6632be7c963,
              mid_init$_70cf68a139c55cb1,
              mid_init$_883560a039191ab2,
              mid_init$_0696b66b91219eca,
              mid_addForceModel_a0575630e19e1e5c,
              mid_computeMeanState_c525cc6962fd7087,
              mid_computeMeanState_6570fb3d6e747bd9,
              mid_computeOsculatingState_c525cc6962fd7087,
              mid_getAllForceModels_d751c1a57012b438,
              mid_getOrbitType_495f818d3570b7f5,
              mid_getPositionAngleType_a6db4e6edefda4be,
              mid_getSatelliteRevolution_d6ab429752e7c267,
              mid_getSelectedCoefficients_6b191a9b12c1004b,
              mid_initialIsOsculating_eee3de00fe971136,
              mid_removeForceModels_ff7cb6c242604316,
              mid_resetInitialState_8062511934471166,
              mid_setAttitudeProvider_fddd0a7d9f33bafa,
              mid_setInitialState_8062511934471166,
              mid_setInitialState_b193ef1b0d3797c6,
              mid_setInterpolationGridToFixedNumberOfPoints_8fd427ab23829bf5,
              mid_setInterpolationGridToMaxTimeGap_f63ca9e3185c722e,
              mid_setMu_f63ca9e3185c722e,
              mid_setSatelliteRevolution_8fd427ab23829bf5,
              mid_setSelectedCoefficients_26a98b9ee89414c5,
              mid_tolerances_6fbe6f88edd8fdc8,
              mid_tolerances_e42a4f399e60df68,
              mid_beforeIntegration_357211ab77703f3f,
              mid_afterIntegration_ff7cb6c242604316,
              mid_getInitialIntegrationState_a74be2e38786f3b6,
              mid_createMapper_ebf7e979efef9b20,
              mid_getMainStateEquations_3bc41c7526b7eb7c,
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
