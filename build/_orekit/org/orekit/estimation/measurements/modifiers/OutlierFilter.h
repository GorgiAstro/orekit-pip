#ifndef org_orekit_estimation_measurements_modifiers_OutlierFilter_H
#define org_orekit_estimation_measurements_modifiers_OutlierFilter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
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
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          class OutlierFilter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_89aad365fb0ed8da,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_modifyWithoutDerivatives_e471490df8741b73,
              mid_getWarmup_412668abc8d889e9,
              mid_getMaxSigma_557b8123390d8d0c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OutlierFilter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OutlierFilter(const OutlierFilter& obj) : ::java::lang::Object(obj) {}

            OutlierFilter(jint, jdouble);

            ::java::util::List getParametersDrivers() const;
            void modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          extern PyType_Def PY_TYPE_DEF(OutlierFilter);
          extern PyTypeObject *PY_TYPE(OutlierFilter);

          class t_OutlierFilter {
          public:
            PyObject_HEAD
            OutlierFilter object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_OutlierFilter *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const OutlierFilter&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const OutlierFilter&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
