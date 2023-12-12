#ifndef org_orekit_propagation_integration_PythonFieldStateMapper_H
#define org_orekit_propagation_integration_PythonFieldStateMapper_H

#include "org/orekit/propagation/integration/FieldStateMapper.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      class PropagationType;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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

        class PythonFieldStateMapper : public ::org::orekit::propagation::integration::FieldStateMapper {
         public:
          enum {
            mid_init$_f3905784aefbdce6,
            mid_finalize_0640e6acf969ed28,
            mid_mapArrayToState_90cbab6bce028b0d,
            mid_mapStateToArray_b5f12a51288f780a,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonFieldStateMapper(jobject obj) : ::org::orekit::propagation::integration::FieldStateMapper(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonFieldStateMapper(const PythonFieldStateMapper& obj) : ::org::orekit::propagation::integration::FieldStateMapper(obj) {}

          PythonFieldStateMapper(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::frames::Frame &);

          void finalize() const;
          ::org::orekit::propagation::FieldSpacecraftState mapArrayToState(const ::org::orekit::time::FieldAbsoluteDate &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::orekit::propagation::PropagationType &) const;
          void mapStateToArray(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonFieldStateMapper);
        extern PyTypeObject *PY_TYPE(PythonFieldStateMapper);

        class t_PythonFieldStateMapper {
        public:
          PyObject_HEAD
          PythonFieldStateMapper object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PythonFieldStateMapper *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PythonFieldStateMapper&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PythonFieldStateMapper&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
