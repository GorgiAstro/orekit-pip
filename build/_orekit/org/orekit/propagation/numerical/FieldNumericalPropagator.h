#ifndef org_orekit_propagation_numerical_FieldNumericalPropagator_H
#define org_orekit_propagation_numerical_FieldNumericalPropagator_H

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
    namespace forces {
      class ForceModel;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace orbits {
      class FieldOrbit;
      class PositionAngleType;
      class OrbitType;
    }
    namespace frames {
      class Frame;
    }
    namespace propagation {
      class FieldSpacecraftState;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        class FieldNumericalPropagator : public ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator {
         public:
          enum {
            mid_init$_b32dfc76ba0d0dfd,
            mid_init$_fb37e725b65dfde5,
            mid_addForceModel_43775e92e64180fc,
            mid_getAllForceModels_e62d3bb06d56d7e3,
            mid_getOrbitType_c7d4737d7afca612,
            mid_getPVCoordinates_294c5c99690f2356,
            mid_getPositionAngleType_c25055891f180348,
            mid_removeForceModels_a1fa5dae97ea5ed2,
            mid_resetInitialState_54d9efbf99822980,
            mid_setIgnoreCentralAttraction_fcb96c98de6fad04,
            mid_setInitialState_54d9efbf99822980,
            mid_setMu_f2b4bfa0af1007e8,
            mid_setOrbitType_2fa1f3b8966f0286,
            mid_setPositionAngleType_778d09854443b806,
            mid_tolerances_17b6398a327a83bc,
            mid_tolerances_0a58f8dda5b45b16,
            mid_createMapper_23e677752bbdcbdf,
            mid_getMainStateEquations_f48ddce9ae4b38bb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldNumericalPropagator(jobject obj) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldNumericalPropagator(const FieldNumericalPropagator& obj) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(obj) {}

          FieldNumericalPropagator(const ::org::hipparchus::Field &, const ::org::hipparchus::ode::FieldODEIntegrator &);
          FieldNumericalPropagator(const ::org::hipparchus::Field &, const ::org::hipparchus::ode::FieldODEIntegrator &, const ::org::orekit::attitudes::AttitudeProvider &);

          void addForceModel(const ::org::orekit::forces::ForceModel &) const;
          ::java::util::List getAllForceModels() const;
          ::org::orekit::orbits::OrbitType getOrbitType() const;
          ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
          ::org::orekit::orbits::PositionAngleType getPositionAngleType() const;
          void removeForceModels() const;
          void resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          void setIgnoreCentralAttraction(jboolean) const;
          void setInitialState(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          void setMu(const ::org::hipparchus::CalculusFieldElement &) const;
          void setOrbitType(const ::org::orekit::orbits::OrbitType &) const;
          void setPositionAngleType(const ::org::orekit::orbits::PositionAngleType &) const;
          static JArray< JArray< jdouble > > tolerances(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::orbits::OrbitType &);
          static JArray< JArray< jdouble > > tolerances(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::orbits::OrbitType &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        extern PyType_Def PY_TYPE_DEF(FieldNumericalPropagator);
        extern PyTypeObject *PY_TYPE(FieldNumericalPropagator);

        class t_FieldNumericalPropagator {
        public:
          PyObject_HEAD
          FieldNumericalPropagator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldNumericalPropagator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldNumericalPropagator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldNumericalPropagator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
