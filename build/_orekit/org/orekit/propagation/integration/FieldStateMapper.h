#ifndef org_orekit_propagation_integration_FieldStateMapper_H
#define org_orekit_propagation_integration_FieldStateMapper_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
    }
    namespace frames {
      class Frame;
    }
    namespace propagation {
      class PropagationType;
      class FieldSpacecraftState;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
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
            mid_getAttitudeProvider_a904f3d015a354a0,
            mid_getFrame_b86f9f61d97a7244,
            mid_getMu_eba8e72a22c984ac,
            mid_getOrbitType_e29360d311dc0e20,
            mid_getPositionAngleType_8f17e83e5a86217c,
            mid_getReferenceDate_51da00d5b8a3b5df,
            mid_mapArrayToState_2bc4466f5de6b26b,
            mid_mapArrayToState_4538da74350c9224,
            mid_mapDateToDouble_2a5f05be83ff251d,
            mid_mapDoubleToDate_1975a0ad09e731d5,
            mid_mapDoubleToDate_dc6ab73d9602ecfc,
            mid_mapStateToArray_e85151cf356bb2fe,
            mid_setPositionAngleType_0fa09c18fee449d5,
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
