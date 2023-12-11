#ifndef org_orekit_propagation_numerical_FieldNumericalPropagator_H
#define org_orekit_propagation_numerical_FieldNumericalPropagator_H

#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedFieldPVCoordinates;
    }
    namespace propagation {
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace orbits {
      class OrbitType;
      class PositionAngleType;
      class FieldOrbit;
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace forces {
      class ForceModel;
    }
  }
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
    namespace ode {
      class FieldODEIntegrator;
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
            mid_init$_68cc2850ac8c3b8a,
            mid_init$_5fd536ebd2e543f8,
            mid_addForceModel_e37f41a34246ae45,
            mid_getAllForceModels_0d9551367f7ecdef,
            mid_getOrbitType_2cea2a2cb3e02091,
            mid_getPVCoordinates_4ac52e75113a03db,
            mid_getPositionAngleType_f4984aee71df4c19,
            mid_removeForceModels_0640e6acf969ed28,
            mid_resetInitialState_b66c84a5711243d5,
            mid_setIgnoreCentralAttraction_ed2afdb8506b9742,
            mid_setInitialState_b66c84a5711243d5,
            mid_setMu_1ee4bed350fde589,
            mid_setOrbitType_6ccfc646a24c9722,
            mid_setPositionAngleType_44c283653315b1a7,
            mid_tolerances_89f225076cfe8a9a,
            mid_tolerances_f1caea89d67ed2a2,
            mid_createMapper_ad7c2ac9dfe2008b,
            mid_getMainStateEquations_c822d3b1a2fa150a,
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
