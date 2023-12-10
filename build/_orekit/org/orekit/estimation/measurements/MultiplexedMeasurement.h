#ifndef org_orekit_estimation_measurements_MultiplexedMeasurement_H
#define org_orekit_estimation_measurements_MultiplexedMeasurement_H

#include "org/orekit/estimation/measurements/AbstractMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
        class ObservedMeasurement;
        class MultiplexedMeasurement;
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
            mid_init$_de3e021e7266b71e,
            mid_getEstimatedMeasurements_2afa36052df4765d,
            mid_getEstimatedMeasurementsWithoutDerivatives_2afa36052df4765d,
            mid_getMeasurements_2afa36052df4765d,
            mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22,
            mid_theoreticalEvaluation_27ef5cc84ad0852b,
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
