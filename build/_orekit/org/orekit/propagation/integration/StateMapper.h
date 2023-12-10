#ifndef org_orekit_propagation_integration_StateMapper_H
#define org_orekit_propagation_integration_StateMapper_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class PropagationType;
      class SpacecraftState;
    }
    namespace attitudes {
      class AttitudeProvider;
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

        class StateMapper : public ::java::lang::Object {
         public:
          enum {
            mid_getAttitudeProvider_a904f3d015a354a0,
            mid_getFrame_b86f9f61d97a7244,
            mid_getMu_dff5885c2c873297,
            mid_getOrbitType_e29360d311dc0e20,
            mid_getPositionAngleType_8f17e83e5a86217c,
            mid_getReferenceDate_85703d13e302437e,
            mid_mapArrayToState_618a7c03db72e57e,
            mid_mapArrayToState_827bebc97a37b62b,
            mid_mapDateToDouble_bf1d7732f1acb697,
            mid_mapDoubleToDate_149a9211a037d799,
            mid_mapDoubleToDate_4c50520a750977fa,
            mid_mapStateToArray_747d586861d6528b,
            mid_setAttitudeProvider_3cff7c75ea06698c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StateMapper(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StateMapper(const StateMapper& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::attitudes::AttitudeProvider getAttitudeProvider() const;
          ::org::orekit::frames::Frame getFrame() const;
          jdouble getMu() const;
          ::org::orekit::orbits::OrbitType getOrbitType() const;
          ::org::orekit::orbits::PositionAngleType getPositionAngleType() const;
          ::org::orekit::time::AbsoluteDate getReferenceDate() const;
          ::org::orekit::propagation::SpacecraftState mapArrayToState(const ::org::orekit::time::AbsoluteDate &, const JArray< jdouble > &, const JArray< jdouble > &, const ::org::orekit::propagation::PropagationType &) const;
          ::org::orekit::propagation::SpacecraftState mapArrayToState(jdouble, const JArray< jdouble > &, const JArray< jdouble > &, const ::org::orekit::propagation::PropagationType &) const;
          jdouble mapDateToDouble(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::time::AbsoluteDate mapDoubleToDate(jdouble) const;
          ::org::orekit::time::AbsoluteDate mapDoubleToDate(jdouble, const ::org::orekit::time::AbsoluteDate &) const;
          void mapStateToArray(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &, const JArray< jdouble > &) const;
          void setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider &) const;
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
        extern PyType_Def PY_TYPE_DEF(StateMapper);
        extern PyTypeObject *PY_TYPE(StateMapper);

        class t_StateMapper {
        public:
          PyObject_HEAD
          StateMapper object;
          static PyObject *wrap_Object(const StateMapper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
