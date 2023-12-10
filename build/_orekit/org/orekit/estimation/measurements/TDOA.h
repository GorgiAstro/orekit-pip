#ifndef org_orekit_estimation_measurements_TDOA_H
#define org_orekit_estimation_measurements_TDOA_H

#include "org/orekit/estimation/measurements/GroundReceiverMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class GroundStation;
        class ObservableSatellite;
        class TDOA;
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

        class TDOA : public ::org::orekit::estimation::measurements::GroundReceiverMeasurement {
         public:
          enum {
            mid_init$_3001df949fd9e0a4,
            mid_getPrimeStation_58e3efb0e9576916,
            mid_getSecondStation_58e3efb0e9576916,
            mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22,
            mid_theoreticalEvaluation_27ef5cc84ad0852b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TDOA(jobject obj) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TDOA(const TDOA& obj) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(obj) {}

          static ::java::lang::String *MEASUREMENT_TYPE;

          TDOA(const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);

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
        extern PyType_Def PY_TYPE_DEF(TDOA);
        extern PyTypeObject *PY_TYPE(TDOA);

        class t_TDOA {
        public:
          PyObject_HEAD
          TDOA object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TDOA *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TDOA&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TDOA&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
