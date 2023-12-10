#ifndef org_orekit_propagation_numerical_FieldNumericalPropagator_H
#define org_orekit_propagation_numerical_FieldNumericalPropagator_H

#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class FieldOrbit;
      class OrbitType;
    }
    namespace frames {
      class Frame;
    }
    namespace forces {
      class ForceModel;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
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
            mid_init$_bb6ed468e0500083,
            mid_init$_b659cdfea9340f48,
            mid_addForceModel_690f9b27ef4d22fe,
            mid_getAllForceModels_2afa36052df4765d,
            mid_getOrbitType_e29360d311dc0e20,
            mid_getPVCoordinates_2cdae1c350dc3e9a,
            mid_getPositionAngleType_8f17e83e5a86217c,
            mid_removeForceModels_0fa09c18fee449d5,
            mid_resetInitialState_1463d3d0d52f94dd,
            mid_setIgnoreCentralAttraction_bd04c9335fb9e4cf,
            mid_setInitialState_1463d3d0d52f94dd,
            mid_setMu_072c8635f2164db9,
            mid_setOrbitType_48a062bf972c4ab5,
            mid_setPositionAngleType_4ca1644ed7c72fe3,
            mid_tolerances_538ee42154b42493,
            mid_tolerances_3d9429449a451b38,
            mid_createMapper_16c8184497a1d794,
            mid_getMainStateEquations_75bae68924620d17,
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
