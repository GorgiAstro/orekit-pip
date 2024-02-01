#ifndef org_orekit_estimation_measurements_modifiers_OutlierFilter_H
#define org_orekit_estimation_measurements_modifiers_OutlierFilter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class EstimationModifier;
        class ObservedMeasurement;
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
              mid_init$_4320462275d66e78,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_modifyWithoutDerivatives_ecce216dce506020,
              mid_getWarmup_d6ab429752e7c267,
              mid_getMaxSigma_9981f74b2d109da6,
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
