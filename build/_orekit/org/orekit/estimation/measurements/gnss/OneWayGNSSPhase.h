#ifndef org_orekit_estimation_measurements_gnss_OneWayGNSSPhase_H
#define org_orekit_estimation_measurements_gnss_OneWayGNSSPhase_H

#include "org/orekit/estimation/measurements/AbstractMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class OneWayGNSSPhase;
        }
        class ObservableSatellite;
      }
    }
    namespace utils {
      class ParameterDriver;
      class PVCoordinatesProvider;
    }
    namespace time {
      class AbsoluteDate;
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

          class OneWayGNSSPhase : public ::org::orekit::estimation::measurements::AbstractMeasurement {
           public:
            enum {
              mid_init$_995f210f8a7d7954,
              mid_getAmbiguityDriver_4194657b5e280ddc,
              mid_getWavelength_557b8123390d8d0c,
              mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7,
              mid_theoreticalEvaluation_eae039ee8c8a4a4d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OneWayGNSSPhase(jobject obj) : ::org::orekit::estimation::measurements::AbstractMeasurement(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OneWayGNSSPhase(const OneWayGNSSPhase& obj) : ::org::orekit::estimation::measurements::AbstractMeasurement(obj) {}

            static ::java::lang::String *AMBIGUITY_NAME;
            static ::java::lang::String *MEASUREMENT_TYPE;

            OneWayGNSSPhase(const ::org::orekit::utils::PVCoordinatesProvider &, jdouble, const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);

            ::org::orekit::utils::ParameterDriver getAmbiguityDriver() const;
            jdouble getWavelength() const;
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
          extern PyType_Def PY_TYPE_DEF(OneWayGNSSPhase);
          extern PyTypeObject *PY_TYPE(OneWayGNSSPhase);

          class t_OneWayGNSSPhase {
          public:
            PyObject_HEAD
            OneWayGNSSPhase object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_OneWayGNSSPhase *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const OneWayGNSSPhase&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const OneWayGNSSPhase&, PyTypeObject *);
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
