#ifndef org_orekit_propagation_integration_FieldStateMapper_H
#define org_orekit_propagation_integration_FieldStateMapper_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      class PropagationType;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace orbits {
      class OrbitType;
      class PositionAngleType;
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
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
            mid_getAttitudeProvider_6df6b78ab9377151,
            mid_getFrame_6c9bc0a928c56d4e,
            mid_getMu_613c8f46c659f636,
            mid_getOrbitType_2cea2a2cb3e02091,
            mid_getPositionAngleType_f4984aee71df4c19,
            mid_getReferenceDate_f1fe4daf77c66560,
            mid_mapArrayToState_90cbab6bce028b0d,
            mid_mapArrayToState_2d55a845b18a3006,
            mid_mapDateToDouble_b884068a2c99f6ca,
            mid_mapDoubleToDate_61a24ec56865ba5a,
            mid_mapDoubleToDate_3281eb2bff5217b3,
            mid_mapStateToArray_b5f12a51288f780a,
            mid_setPositionAngleType_0640e6acf969ed28,
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
