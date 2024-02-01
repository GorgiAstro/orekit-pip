#ifndef org_orekit_propagation_integration_StateMapper_H
#define org_orekit_propagation_integration_StateMapper_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
    }
    namespace propagation {
      class PropagationType;
      class SpacecraftState;
    }
    namespace frames {
      class Frame;
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
            mid_getAttitudeProvider_2f73d1f4460b8d6c,
            mid_getFrame_cb151471db4570f0,
            mid_getMu_9981f74b2d109da6,
            mid_getOrbitType_495f818d3570b7f5,
            mid_getPositionAngleType_a6db4e6edefda4be,
            mid_getReferenceDate_80e11148db499dda,
            mid_mapArrayToState_b723a334e6cd3f92,
            mid_mapArrayToState_7629d8431d8fb922,
            mid_mapDateToDouble_209f08246d708042,
            mid_mapDoubleToDate_d2854c25a21df51f,
            mid_mapDoubleToDate_4b32f25aab0493dc,
            mid_mapStateToArray_c528401cf6a8f557,
            mid_setAttitudeProvider_fddd0a7d9f33bafa,
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
