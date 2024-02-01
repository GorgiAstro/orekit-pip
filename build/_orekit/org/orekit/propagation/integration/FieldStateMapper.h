#ifndef org_orekit_propagation_integration_FieldStateMapper_H
#define org_orekit_propagation_integration_FieldStateMapper_H

#include "java/lang/Object.h"

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
      class OrbitType;
    }
    namespace propagation {
      class PropagationType;
      class FieldSpacecraftState;
    }
    namespace frames {
      class Frame;
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
            mid_getAttitudeProvider_2f73d1f4460b8d6c,
            mid_getFrame_cb151471db4570f0,
            mid_getMu_08d37e3f77b7239d,
            mid_getOrbitType_495f818d3570b7f5,
            mid_getPositionAngleType_a6db4e6edefda4be,
            mid_getReferenceDate_1fea28374011eef5,
            mid_mapArrayToState_0dd5c63fffcaab3c,
            mid_mapArrayToState_6dd6cd4ddfbb19d2,
            mid_mapDateToDouble_cf010978f3c5a913,
            mid_mapDoubleToDate_7e3a2932d2ce0a9d,
            mid_mapDoubleToDate_41b4f1e9c37882e9,
            mid_mapStateToArray_0924dbbee225355c,
            mid_setPositionAngleType_ff7cb6c242604316,
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
