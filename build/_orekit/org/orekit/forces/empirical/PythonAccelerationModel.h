#ifndef org_orekit_forces_empirical_PythonAccelerationModel_H
#define org_orekit_forces_empirical_PythonAccelerationModel_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace forces {
      namespace empirical {
        class AccelerationModel;
      }
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        class PythonAccelerationModel : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_finalize_0640e6acf969ed28,
            mid_getParametersDrivers_0d9551367f7ecdef,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            mid_signedAmplitude_810dcb8f9f5d191a,
            mid_signedAmplitude_4ad317f7598a10a9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAccelerationModel(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAccelerationModel(const PythonAccelerationModel& obj) : ::java::lang::Object(obj) {}

          PythonAccelerationModel();

          void finalize() const;
          ::java::util::List getParametersDrivers() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          jdouble signedAmplitude(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          ::org::hipparchus::CalculusFieldElement signedAmplitude(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {
        extern PyType_Def PY_TYPE_DEF(PythonAccelerationModel);
        extern PyTypeObject *PY_TYPE(PythonAccelerationModel);

        class t_PythonAccelerationModel {
        public:
          PyObject_HEAD
          PythonAccelerationModel object;
          static PyObject *wrap_Object(const PythonAccelerationModel&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
