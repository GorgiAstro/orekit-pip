#ifndef org_orekit_propagation_integration_FieldStateMapper_H
#define org_orekit_propagation_integration_FieldStateMapper_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      class PropagationType;
      class FieldSpacecraftState;
    }
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        class FieldStateMapper : public ::java::lang::Object {
         public:
          enum {
            mid_getAttitudeProvider_5cce95036ae870ba,
            mid_getFrame_c8fe21bcdac65bf6,
            mid_getMu_e6d4d3215c30992a,
            mid_getOrbitType_63ea5cd020bf7bf1,
            mid_getPositionAngleType_2571e8fe1cede425,
            mid_getReferenceDate_09b0a926600dfc14,
            mid_mapArrayToState_1d69a30d154b40a6,
            mid_mapArrayToState_62065ba7f82f6745,
            mid_mapDateToDouble_7bc0fd76ee915b72,
            mid_mapDoubleToDate_b179475577cb34cc,
            mid_mapDoubleToDate_49e30ae22838fba7,
            mid_mapStateToArray_f420296d747d4672,
            mid_setPositionAngleType_7ae3461a92a43152,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldStateMapper(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldStateMapper(const FieldStateMapper& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::attitudes::AttitudeProvider getAttitudeProvider() const;
          ::org::orekit::frames::Frame getFrame() const;
          ::org::hipparchus::CalculusFieldElement getMu() const;
          ::org::orekit::orbits::OrbitType getOrbitType() const;
          ::org::orekit::orbits::PositionAngleType getPositionAngleType() const;
          ::org::orekit::time::FieldAbsoluteDate getReferenceDate() const;
          ::org::orekit::propagation::FieldSpacecraftState mapArrayToState(const ::org::orekit::time::FieldAbsoluteDate &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::orekit::propagation::PropagationType &) const;
          ::org::orekit::propagation::FieldSpacecraftState mapArrayToState(const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::orekit::propagation::PropagationType &) const;
          ::org::hipparchus::CalculusFieldElement mapDateToDouble(const ::org::orekit::time::FieldAbsoluteDate &) const;
          ::org::orekit::time::FieldAbsoluteDate mapDoubleToDate(const ::org::hipparchus::CalculusFieldElement &) const;
          ::org::orekit::time::FieldAbsoluteDate mapDoubleToDate(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::time::FieldAbsoluteDate &) const;
          void mapStateToArray(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          void setPositionAngleType() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        extern PyType_Def PY_TYPE_DEF(FieldStateMapper);
        extern PyTypeObject *PY_TYPE(FieldStateMapper);

        class t_FieldStateMapper {
        public:
          PyObject_HEAD
          FieldStateMapper object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldStateMapper *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldStateMapper&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldStateMapper&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
