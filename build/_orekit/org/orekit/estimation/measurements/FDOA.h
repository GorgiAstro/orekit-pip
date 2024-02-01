#ifndef org_orekit_estimation_measurements_FDOA_H
#define org_orekit_estimation_measurements_FDOA_H

#include "org/orekit/estimation/measurements/GroundReceiverMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        class FDOA;
        class GroundStation;
      }
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

        class FDOA : public ::org::orekit::estimation::measurements::GroundReceiverMeasurement {
         public:
          enum {
            mid_init$_875b69f97a83cce2,
            mid_getPrimeStation_f8d3ef5d49da0d87,
            mid_getSecondStation_f8d3ef5d49da0d87,
            mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2,
            mid_theoreticalEvaluation_eda25b8c88791d9a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FDOA(jobject obj) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FDOA(const FDOA& obj) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(obj) {}

          static ::java::lang::String *MEASUREMENT_TYPE;

          FDOA(const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::estimation::measurements::GroundStation &, jdouble, const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);

          ::org::orekit::estimation::measurements::GroundStation getPrimeStation() const;
          ::org::orekit::estimation::measurements::GroundStation getSecondStation() const;
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
        extern PyType_Def PY_TYPE_DEF(FDOA);
        extern PyTypeObject *PY_TYPE(FDOA);

        class t_FDOA {
        public:
          PyObject_HEAD
          FDOA object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FDOA *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FDOA&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FDOA&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
