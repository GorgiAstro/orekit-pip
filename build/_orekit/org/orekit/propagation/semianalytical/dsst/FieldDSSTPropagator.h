#ifndef org_orekit_propagation_semianalytical_dsst_FieldDSSTPropagator_H
#define org_orekit_propagation_semianalytical_dsst_FieldDSSTPropagator_H

#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator.h"

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
    class Field;
    namespace ode {
      class FieldODEIntegrator;
    }
    class CalculusFieldElement;
  }
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
              mid_init$_272d3b6a3360c8cc,
              mid_init$_fb107a39f80551b6,
              mid_init$_f6f035abb558a5c0,
              mid_init$_83e6faf9d20273f4,
              mid_addForceModel_868bb92ba9b91af7,
              mid_computeMeanState_419dafe52feda214,
              mid_computeMeanState_097dbc0442e5454b,
              mid_computeOsculatingState_419dafe52feda214,
              mid_getAllForceModels_a6156df500549a58,
              mid_getOrbitType_63ea5cd020bf7bf1,
              mid_getPositionAngleType_2571e8fe1cede425,
              mid_getSatelliteRevolution_f2f64475e4580546,
              mid_getSelectedCoefficients_e9e1a6780fe94297,
              mid_initialIsOsculating_e470b6d9e0d979db,
              mid_removeForceModels_7ae3461a92a43152,
              mid_resetInitialState_52154b94d63e10ed,
              mid_setAttitudeProvider_8109c1a27d4471d3,
              mid_setInitialState_52154b94d63e10ed,
              mid_setInitialState_7e8354b496e2a6c1,
              mid_setInterpolationGridToFixedNumberOfPoints_0a2a1ac2721c0336,
              mid_setInterpolationGridToMaxTimeGap_03a16642f77779e7,
              mid_setMu_03a16642f77779e7,
              mid_setSatelliteRevolution_0a2a1ac2721c0336,
              mid_setSelectedCoefficients_ef1b87702d7ae7b8,
              mid_tolerances_668d49e2109cbb89,
              mid_tolerances_c97c7886dbd53a2c,
              mid_beforeIntegration_acdd8180a5dc1a8d,
              mid_afterIntegration_7ae3461a92a43152,
              mid_getInitialIntegrationState_a553824829fc2514,
              mid_createMapper_b12e4020688f2d3a,
              mid_getMainStateEquations_9199626b9ad748bb,
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
