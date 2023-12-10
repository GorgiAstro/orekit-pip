#ifndef org_orekit_estimation_measurements_gnss_Phase_H
#define org_orekit_estimation_measurements_gnss_Phase_H

#include "org/orekit/estimation/measurements/GroundReceiverMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class Phase;
        }
        class GroundStation;
        class ObservableSatellite;
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
              mid_init$_ddde37795a589131,
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
