#ifndef org_orekit_estimation_measurements_MultiplexedMeasurement_H
#define org_orekit_estimation_measurements_MultiplexedMeasurement_H

#include "org/orekit/estimation/measurements/AbstractMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class MultiplexedMeasurement;
        class ObservedMeasurement;
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
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
            mid_init$_4ccaedadb068bdeb,
            mid_getEstimatedMeasurements_0d9551367f7ecdef,
            mid_getEstimatedMeasurementsWithoutDerivatives_0d9551367f7ecdef,
            mid_getMeasurements_0d9551367f7ecdef,
            mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7,
            mid_theoreticalEvaluation_eae039ee8c8a4a4d,
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
