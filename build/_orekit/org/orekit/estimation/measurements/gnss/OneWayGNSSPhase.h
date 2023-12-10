#ifndef org_orekit_estimation_measurements_gnss_OneWayGNSSPhase_H
#define org_orekit_estimation_measurements_gnss_OneWayGNSSPhase_H

#include "org/orekit/estimation/measurements/AbstractMeasurement.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriver;
      class PVCoordinatesProvider;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        namespace gnss {
          class OneWayGNSSPhase;
        }
      }
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
              mid_init$_27e5ca9a3c7c8ec0,
              mid_getAmbiguityDriver_a25ed222178aa59f,
              mid_getWavelength_dff5885c2c873297,
              mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22,
              mid_theoreticalEvaluation_27ef5cc84ad0852b,
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
