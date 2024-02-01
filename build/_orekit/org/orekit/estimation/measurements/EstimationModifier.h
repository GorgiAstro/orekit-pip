#ifndef org_orekit_estimation_measurements_EstimationModifier_H
#define org_orekit_estimation_measurements_EstimationModifier_H

#include "org/orekit/utils/ParameterDriversProvider.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
      }
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
    namespace estimation {
      namespace measurements {

        class EstimationModifier : public ::org::orekit::utils::ParameterDriversProvider {
         public:
          enum {
            mid_modify_0f0ae9411e47b72e,
            mid_modifyWithoutDerivatives_ecce216dce506020,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EstimationModifier(jobject obj) : ::org::orekit::utils::ParameterDriversProvider(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EstimationModifier(const EstimationModifier& obj) : ::org::orekit::utils::ParameterDriversProvider(obj) {}

          void modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement &) const;
          void modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase &) const;
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
        extern PyType_Def PY_TYPE_DEF(EstimationModifier);
        extern PyTypeObject *PY_TYPE(EstimationModifier);

        class t_EstimationModifier {
        public:
          PyObject_HEAD
          EstimationModifier object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_EstimationModifier *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const EstimationModifier&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const EstimationModifier&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
