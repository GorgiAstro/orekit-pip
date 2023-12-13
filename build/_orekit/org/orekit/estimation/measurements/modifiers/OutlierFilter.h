#ifndef org_orekit_estimation_measurements_modifiers_OutlierFilter_H
#define org_orekit_estimation_measurements_modifiers_OutlierFilter_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
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
        namespace modifiers {

          class OutlierFilter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_d5322b8b512aeb26,
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_modifyWithoutDerivatives_308087fabc1d7f66,
              mid_getWarmup_55546ef6a647f39b,
              mid_getMaxSigma_b74f83833fdad017,
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
