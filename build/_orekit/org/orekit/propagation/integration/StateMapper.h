#ifndef org_orekit_propagation_integration_StateMapper_H
#define org_orekit_propagation_integration_StateMapper_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class PropagationType;
      class SpacecraftState;
    }
    namespace orbits {
      class OrbitType;
      class PositionAngleType;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_getAttitudeProvider_6df6b78ab9377151,
            mid_getFrame_6c9bc0a928c56d4e,
            mid_getMu_557b8123390d8d0c,
            mid_getOrbitType_2cea2a2cb3e02091,
            mid_getPositionAngleType_f4984aee71df4c19,
            mid_getReferenceDate_7a97f7e149e79afb,
            mid_mapArrayToState_f38e2174d37ac0d2,
            mid_mapArrayToState_a19517204e94b95e,
            mid_mapDateToDouble_b0b988f941da47d8,
            mid_mapDoubleToDate_8ef471ef852a9678,
            mid_mapDoubleToDate_919074d9bf256a5d,
            mid_mapStateToArray_c6e78d5a2304799f,
            mid_setAttitudeProvider_8fa6c0c067ead7b2,
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
