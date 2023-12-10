#ifndef org_orekit_propagation_integration_PythonFieldStateMapper_H
#define org_orekit_propagation_integration_PythonFieldStateMapper_H

#include "org/orekit/propagation/integration/FieldStateMapper.h"

namespace org {
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
            mid_init$_2312a9429af04dde,
            mid_finalize_0fa09c18fee449d5,
            mid_mapArrayToState_2bc4466f5de6b26b,
            mid_mapStateToArray_e85151cf356bb2fe,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
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
