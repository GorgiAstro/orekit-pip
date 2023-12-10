#ifndef org_orekit_propagation_integration_StateMapper_H
#define org_orekit_propagation_integration_StateMapper_H

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
      class SpacecraftState;
    }
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_getAttitudeProvider_5cce95036ae870ba,
            mid_getFrame_c8fe21bcdac65bf6,
            mid_getMu_456d9a2f64d6b28d,
            mid_getOrbitType_63ea5cd020bf7bf1,
            mid_getPositionAngleType_2571e8fe1cede425,
            mid_getReferenceDate_aaa854c403487cf3,
            mid_mapArrayToState_4ca0807e8dab0b83,
            mid_mapArrayToState_934fdcb956880b35,
            mid_mapDateToDouble_e912d21057defe63,
            mid_mapDoubleToDate_a76f1ca2cc1b76e5,
            mid_mapDoubleToDate_cb1bb8e47dbf2caf,
            mid_mapStateToArray_32d762d958cb6960,
            mid_setAttitudeProvider_8109c1a27d4471d3,
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
