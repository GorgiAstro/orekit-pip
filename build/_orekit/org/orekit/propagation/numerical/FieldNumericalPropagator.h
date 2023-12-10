#ifndef org_orekit_propagation_numerical_FieldNumericalPropagator_H
#define org_orekit_propagation_numerical_FieldNumericalPropagator_H

#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
    }
    namespace forces {
      class ForceModel;
    }
    namespace orbits {
      class PositionAngleType;
      class FieldOrbit;
      class OrbitType;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace propagation {
      class FieldSpacecraftState;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        class FieldNumericalPropagator : public ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator {
         public:
          enum {
            mid_init$_272d3b6a3360c8cc,
            mid_init$_f6f035abb558a5c0,
            mid_addForceModel_beaeb16a38eea9d3,
            mid_getAllForceModels_a6156df500549a58,
            mid_getOrbitType_63ea5cd020bf7bf1,
            mid_getPVCoordinates_0e277b7d6a64b75a,
            mid_getPositionAngleType_2571e8fe1cede425,
            mid_removeForceModels_7ae3461a92a43152,
            mid_resetInitialState_52154b94d63e10ed,
            mid_setIgnoreCentralAttraction_50a2e0b139e80a58,
            mid_setInitialState_52154b94d63e10ed,
            mid_setMu_03a16642f77779e7,
            mid_setOrbitType_bbd02639b41d4055,
            mid_setPositionAngleType_07350e8db766ef51,
            mid_tolerances_bf5c278e5b478505,
            mid_tolerances_90835be83898efac,
            mid_createMapper_b12e4020688f2d3a,
            mid_getMainStateEquations_9199626b9ad748bb,
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
