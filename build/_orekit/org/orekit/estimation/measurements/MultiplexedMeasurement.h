#ifndef org_orekit_estimation_measurements_MultiplexedMeasurement_H
#define org_orekit_estimation_measurements_MultiplexedMeasurement_H

#include "org/orekit/estimation/measurements/AbstractMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
        class MultiplexedMeasurement;
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
            mid_init$_65de9727799c5641,
            mid_getEstimatedMeasurements_a6156df500549a58,
            mid_getEstimatedMeasurementsWithoutDerivatives_a6156df500549a58,
            mid_getMeasurements_a6156df500549a58,
            mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5,
            mid_theoreticalEvaluation_9d5a7270ffb14a9e,
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
