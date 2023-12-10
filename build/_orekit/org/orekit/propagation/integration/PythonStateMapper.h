#ifndef org_orekit_propagation_integration_PythonStateMapper_H
#define org_orekit_propagation_integration_PythonStateMapper_H

#include "org/orekit/propagation/integration/StateMapper.h"

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
            mid_init$_d148623dabbb09f7,
            mid_finalize_7ae3461a92a43152,
            mid_mapArrayToState_4ca0807e8dab0b83,
            mid_mapStateToArray_32d762d958cb6960,
            mid_pythonDecRef_7ae3461a92a43152,
            mid_pythonExtension_a27fc9afd27e559d,
            mid_pythonExtension_fefb08975c10f0a1,
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
