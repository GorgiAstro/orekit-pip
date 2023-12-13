#ifndef org_orekit_propagation_semianalytical_dsst_FieldDSSTPropagator_H
#define org_orekit_propagation_semianalytical_dsst_FieldDSSTPropagator_H

#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class FieldODEIntegrator;
    }
    class Field;
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
      class FieldOrbit;
      class PositionAngleType;
      class OrbitType;
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
              mid_init$_b32dfc76ba0d0dfd,
              mid_init$_85033171501dd1b3,
              mid_init$_fb37e725b65dfde5,
              mid_init$_e0343c2c388bd762,
              mid_addForceModel_d24de896ffe1d07a,
              mid_computeMeanState_042e6dd80dea32d3,
              mid_computeMeanState_45ec3e9f52e63efd,
              mid_computeOsculatingState_042e6dd80dea32d3,
              mid_getAllForceModels_e62d3bb06d56d7e3,
              mid_getOrbitType_c7d4737d7afca612,
              mid_getPositionAngleType_c25055891f180348,
              mid_getSatelliteRevolution_55546ef6a647f39b,
              mid_getSelectedCoefficients_7e8f11dd23d1142c,
              mid_initialIsOsculating_9ab94ac1dc23b105,
              mid_removeForceModels_a1fa5dae97ea5ed2,
              mid_resetInitialState_54d9efbf99822980,
              mid_setAttitudeProvider_8e4d3ea100bc0095,
              mid_setInitialState_54d9efbf99822980,
              mid_setInitialState_8d1259686cbbe3a1,
              mid_setInterpolationGridToFixedNumberOfPoints_44ed599e93e8a30c,
              mid_setInterpolationGridToMaxTimeGap_f2b4bfa0af1007e8,
              mid_setMu_f2b4bfa0af1007e8,
              mid_setSatelliteRevolution_44ed599e93e8a30c,
              mid_setSelectedCoefficients_4d8d93045ba4dc2c,
              mid_tolerances_725d262c7a2ce0e1,
              mid_tolerances_e9446c2dc4d08ee3,
              mid_createMapper_23e677752bbdcbdf,
              mid_getMainStateEquations_f48ddce9ae4b38bb,
              mid_getInitialIntegrationState_fba6d56f8dbc98d0,
              mid_beforeIntegration_96d019f392abf918,
              mid_afterIntegration_a1fa5dae97ea5ed2,
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
