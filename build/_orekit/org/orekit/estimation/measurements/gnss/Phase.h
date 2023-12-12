#ifndef org_orekit_estimation_measurements_gnss_Phase_H
#define org_orekit_estimation_measurements_gnss_Phase_H

#include "org/orekit/estimation/measurements/GroundReceiverMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        class GroundStation;
        namespace gnss {
          class Phase;
        }
      }
    }
    namespace utils {
      class ParameterDriver;
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

          class Phase : public ::org::orekit::estimation::measurements::GroundReceiverMeasurement {
           public:
            enum {
              mid_init$_341933c95b79307d,
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

            explicit Phase(jobject obj) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Phase(const Phase& obj) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(obj) {}

            static ::java::lang::String *AMBIGUITY_NAME;
            static ::java::lang::String *MEASUREMENT_TYPE;

            Phase(const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);

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
          extern PyType_Def PY_TYPE_DEF(Phase);
          extern PyTypeObject *PY_TYPE(Phase);

          class t_Phase {
          public:
            PyObject_HEAD
            Phase object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Phase *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Phase&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Phase&, PyTypeObject *);
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
