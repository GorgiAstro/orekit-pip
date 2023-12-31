#ifndef org_orekit_forces_empirical_PythonAccelerationModel_H
#define org_orekit_forces_empirical_PythonAccelerationModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {
        class AccelerationModel;
      }
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
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
            mid_init$_a1fa5dae97ea5ed2,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_getParametersDrivers_e62d3bb06d56d7e3,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
            mid_signedAmplitude_8e86371c61460f23,
            mid_signedAmplitude_f867476668f8eb00,
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
