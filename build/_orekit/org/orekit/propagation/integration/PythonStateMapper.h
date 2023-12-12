#ifndef org_orekit_propagation_integration_PythonStateMapper_H
#define org_orekit_propagation_integration_PythonStateMapper_H

#include "org/orekit/propagation/integration/StateMapper.h"

namespace org {
  namespace orekit {
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
    namespace attitudes {
      class AttitudeProvider;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        class PythonStateMapper : public ::org::orekit::propagation::integration::StateMapper {
         public:
          enum {
            mid_init$_f250d8aaa74478ce,
            mid_finalize_0640e6acf969ed28,
            mid_mapArrayToState_f38e2174d37ac0d2,
            mid_mapStateToArray_c6e78d5a2304799f,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonStateMapper(jobject obj) : ::org::orekit::propagation::integration::StateMapper(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonStateMapper(const PythonStateMapper& obj) : ::org::orekit::propagation::integration::StateMapper(obj) {}

          PythonStateMapper(const ::org::orekit::time::AbsoluteDate &, jdouble, const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::frames::Frame &);

          void finalize() const;
          ::org::orekit::propagation::SpacecraftState mapArrayToState(const ::org::orekit::time::AbsoluteDate &, const JArray< jdouble > &, const JArray< jdouble > &, const ::org::orekit::propagation::PropagationType &) const;
          void mapStateToArray(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &, const JArray< jdouble > &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonStateMapper);
        extern PyTypeObject *PY_TYPE(PythonStateMapper);

        class t_PythonStateMapper {
        public:
          PyObject_HEAD
          PythonStateMapper object;
          static PyObject *wrap_Object(const PythonStateMapper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
