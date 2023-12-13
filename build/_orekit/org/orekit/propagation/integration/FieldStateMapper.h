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
    namespace propagation {
      class PropagationType;
      class FieldSpacecraftState;
    }
    namespace orbits {
      class OrbitType;
      class PositionAngleType;
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
            mid_getAttitudeProvider_331f12bb6017243b,
            mid_getFrame_2c51111cc6894ba1,
            mid_getMu_81520b552cb3fa26,
            mid_getOrbitType_c7d4737d7afca612,
            mid_getPositionAngleType_c25055891f180348,
            mid_getReferenceDate_fa23a4301b9c83e7,
            mid_mapArrayToState_1b9bfe1085235c3b,
            mid_mapArrayToState_332029ddc6fecef1,
            mid_mapDateToDouble_140b8964300ddedf,
            mid_mapDoubleToDate_22e288de5d0d08a6,
            mid_mapDoubleToDate_ee4cabe6e15ddac3,
            mid_mapStateToArray_81a15f6754980fa1,
            mid_setPositionAngleType_a1fa5dae97ea5ed2,
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
