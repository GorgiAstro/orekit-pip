#ifndef org_orekit_propagation_integration_StateMapper_H
#define org_orekit_propagation_integration_StateMapper_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
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
    namespace frames {
      class Frame;
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
            mid_getAttitudeProvider_331f12bb6017243b,
            mid_getFrame_2c51111cc6894ba1,
            mid_getMu_b74f83833fdad017,
            mid_getOrbitType_c7d4737d7afca612,
            mid_getPositionAngleType_c25055891f180348,
            mid_getReferenceDate_c325492395d89b24,
            mid_mapArrayToState_99fed456829e6a47,
            mid_mapArrayToState_f59d6c4cec8d64b7,
            mid_mapDateToDouble_fd347811007a6ba3,
            mid_mapDoubleToDate_f359a0110559347a,
            mid_mapDoubleToDate_b68cf37667e0f101,
            mid_mapStateToArray_915c7d1930588394,
            mid_setAttitudeProvider_8e4d3ea100bc0095,
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
