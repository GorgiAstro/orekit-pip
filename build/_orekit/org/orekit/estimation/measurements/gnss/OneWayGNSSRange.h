#ifndef org_orekit_estimation_measurements_gnss_OneWayGNSSRange_H
#define org_orekit_estimation_measurements_gnss_OneWayGNSSRange_H

#include "org/orekit/estimation/measurements/AbstractMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        namespace gnss {
          class OneWayGNSSRange;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinatesProvider;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class OneWayGNSSRange : public ::org::orekit::estimation::measurements::AbstractMeasurement {
           public:
            enum {
              mid_init$_fda3b241682bc710,
              mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2,
              mid_theoreticalEvaluation_eda25b8c88791d9a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OneWayGNSSRange(jobject obj) : ::org::orekit::estimation::measurements::AbstractMeasurement(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OneWayGNSSRange(const OneWayGNSSRange& obj) : ::org::orekit::estimation::measurements::AbstractMeasurement(obj) {}

            static ::java::lang::String *MEASUREMENT_TYPE;

            OneWayGNSSRange(const ::org::orekit::utils::PVCoordinatesProvider &, jdouble, const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);
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
        namespace gnss {
          extern PyType_Def PY_TYPE_DEF(OneWayGNSSRange);
          extern PyTypeObject *PY_TYPE(OneWayGNSSRange);

          class t_OneWayGNSSRange {
          public:
            PyObject_HEAD
            OneWayGNSSRange object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_OneWayGNSSRange *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const OneWayGNSSRange&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const OneWayGNSSRange&, PyTypeObject *);
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
