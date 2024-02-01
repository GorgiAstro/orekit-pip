#ifndef org_orekit_propagation_numerical_FieldNumericalPropagator_H
#define org_orekit_propagation_numerical_FieldNumericalPropagator_H

#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace orbits {
      class PositionAngleType;
      class FieldOrbit;
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
    namespace forces {
      class ForceModel;
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
            mid_init$_b353d6632be7c963,
            mid_init$_883560a039191ab2,
            mid_addForceModel_33ce7dbdc1ed7751,
            mid_getAllForceModels_d751c1a57012b438,
            mid_getOrbitType_495f818d3570b7f5,
            mid_getPVCoordinates_1b1a4229447f7bf7,
            mid_getPositionAngleType_a6db4e6edefda4be,
            mid_removeForceModels_ff7cb6c242604316,
            mid_resetInitialState_8062511934471166,
            mid_setIgnoreCentralAttraction_b35db77cae58639e,
            mid_setInitialState_8062511934471166,
            mid_setMu_f63ca9e3185c722e,
            mid_setOrbitType_faf186fbb93ad060,
            mid_setPositionAngleType_266be23fd67cbce4,
            mid_tolerances_193db9de8c584870,
            mid_tolerances_975f5a72b849d315,
            mid_createMapper_ebf7e979efef9b20,
            mid_getMainStateEquations_3bc41c7526b7eb7c,
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
