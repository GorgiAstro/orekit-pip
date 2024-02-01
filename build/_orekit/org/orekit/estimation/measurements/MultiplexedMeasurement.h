#ifndef org_orekit_estimation_measurements_MultiplexedMeasurement_H
#define org_orekit_estimation_measurements_MultiplexedMeasurement_H

#include "org/orekit/estimation/measurements/AbstractMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class MultiplexedMeasurement;
        class EstimatedMeasurement;
        class ObservedMeasurement;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class MultiplexedMeasurement : public ::org::orekit::estimation::measurements::AbstractMeasurement {
         public:
          enum {
            mid_init$_aa335fea495d60e0,
            mid_getEstimatedMeasurements_d751c1a57012b438,
            mid_getEstimatedMeasurementsWithoutDerivatives_d751c1a57012b438,
            mid_getMeasurements_d751c1a57012b438,
            mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2,
            mid_theoreticalEvaluation_eda25b8c88791d9a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiplexedMeasurement(jobject obj) : ::org::orekit::estimation::measurements::AbstractMeasurement(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiplexedMeasurement(const MultiplexedMeasurement& obj) : ::org::orekit::estimation::measurements::AbstractMeasurement(obj) {}

          static ::java::lang::String *MEASUREMENT_TYPE;

          MultiplexedMeasurement(const ::java::util::List &);

          ::java::util::List getEstimatedMeasurements() const;
          ::java::util::List getEstimatedMeasurementsWithoutDerivatives() const;
          ::java::util::List getMeasurements() const;
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
        extern PyType_Def PY_TYPE_DEF(MultiplexedMeasurement);
        extern PyTypeObject *PY_TYPE(MultiplexedMeasurement);

        class t_MultiplexedMeasurement {
        public:
          PyObject_HEAD
          MultiplexedMeasurement object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MultiplexedMeasurement *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MultiplexedMeasurement&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MultiplexedMeasurement&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
