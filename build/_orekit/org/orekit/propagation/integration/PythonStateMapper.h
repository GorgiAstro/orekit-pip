#ifndef org_orekit_propagation_integration_PythonStateMapper_H
#define org_orekit_propagation_integration_PythonStateMapper_H

#include "org/orekit/propagation/integration/StateMapper.h"

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
            mid_init$_c132f5f186275355,
            mid_finalize_ff7cb6c242604316,
            mid_mapArrayToState_b723a334e6cd3f92,
            mid_mapStateToArray_c528401cf6a8f557,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
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
