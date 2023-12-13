#ifndef org_orekit_estimation_measurements_PythonEstimationModifier_H
#define org_orekit_estimation_measurements_PythonEstimationModifier_H

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
    namespace estimation {
      namespace measurements {
        class EstimationModifier;
        class EstimatedMeasurementBase;
        class ObservedMeasurement;
        class EstimatedMeasurement;
      }
    }
    namespace utils {
      class ParameterDriver;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class PythonEstimationModifier : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_getParametersDrivers_e62d3bb06d56d7e3,
            mid_modify_f784f7724d44a90a,
            mid_modifyWithoutDerivatives_308087fabc1d7f66,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonEstimationModifier(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonEstimationModifier(const PythonEstimationModifier& obj) : ::java::lang::Object(obj) {}

          PythonEstimationModifier();

          void finalize() const;
          ::java::util::List getParametersDrivers() const;
          void modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement &) const;
          void modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase &) const;
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
    namespace estimation {
      namespace measurements {
        extern PyType_Def PY_TYPE_DEF(PythonEstimationModifier);
        extern PyTypeObject *PY_TYPE(PythonEstimationModifier);

        class t_PythonEstimationModifier {
        public:
          PyObject_HEAD
          PythonEstimationModifier object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PythonEstimationModifier *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PythonEstimationModifier&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PythonEstimationModifier&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
