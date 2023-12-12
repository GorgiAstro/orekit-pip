#ifndef org_orekit_estimation_measurements_PythonEstimationModifier_H
#define org_orekit_estimation_measurements_PythonEstimationModifier_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
        class EstimationModifier;
      }
    }
    namespace utils {
      class ParameterDriver;
    }
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
    namespace estimation {
      namespace measurements {

        class PythonEstimationModifier : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_finalize_0640e6acf969ed28,
            mid_getParametersDrivers_0d9551367f7ecdef,
            mid_modify_0054a497255e8220,
            mid_modifyWithoutDerivatives_e471490df8741b73,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
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
