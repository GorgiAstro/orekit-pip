#ifndef org_orekit_estimation_measurements_gnss_InterSatellitesPhase_H
#define org_orekit_estimation_measurements_gnss_InterSatellitesPhase_H

#include "org/orekit/estimation/measurements/AbstractMeasurement.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriver;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        namespace gnss {
          class InterSatellitesPhase;
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

          class InterSatellitesPhase : public ::org::orekit::estimation::measurements::AbstractMeasurement {
           public:
            enum {
              mid_init$_0576086b2ba83da9,
              mid_getAmbiguityDriver_a59daa5e273117e1,
              mid_getWavelength_b74f83833fdad017,
              mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a,
              mid_theoreticalEvaluation_d598991c5cac8ab0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit InterSatellitesPhase(jobject obj) : ::org::orekit::estimation::measurements::AbstractMeasurement(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            InterSatellitesPhase(const InterSatellitesPhase& obj) : ::org::orekit::estimation::measurements::AbstractMeasurement(obj) {}

            static ::java::lang::String *AMBIGUITY_NAME;
            static ::java::lang::String *MEASUREMENT_TYPE;

            InterSatellitesPhase(const ::org::orekit::estimation::measurements::ObservableSatellite &, const ::org::orekit::estimation::measurements::ObservableSatellite &, const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, jdouble);

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
          extern PyType_Def PY_TYPE_DEF(InterSatellitesPhase);
          extern PyTypeObject *PY_TYPE(InterSatellitesPhase);

          class t_InterSatellitesPhase {
          public:
            PyObject_HEAD
            InterSatellitesPhase object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_InterSatellitesPhase *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const InterSatellitesPhase&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const InterSatellitesPhase&, PyTypeObject *);
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
