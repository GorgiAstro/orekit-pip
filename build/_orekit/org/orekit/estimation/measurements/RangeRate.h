#ifndef org_orekit_estimation_measurements_RangeRate_H
#define org_orekit_estimation_measurements_RangeRate_H

#include "org/orekit/estimation/measurements/GroundReceiverMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        class GroundStation;
        class RangeRate;
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

        class RangeRate : public ::org::orekit::estimation::measurements::GroundReceiverMeasurement {
         public:
          enum {
            mid_init$_971d5a3ddd07805d,
            mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5,
            mid_theoreticalEvaluation_9d5a7270ffb14a9e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RangeRate(jobject obj) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RangeRate(const RangeRate& obj) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(obj) {}

          static ::java::lang::String *MEASUREMENT_TYPE;

          RangeRate(const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, jboolean, const ::org::orekit::estimation::measurements::ObservableSatellite &);
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
        extern PyType_Def PY_TYPE_DEF(RangeRate);
        extern PyTypeObject *PY_TYPE(RangeRate);

        class t_RangeRate {
        public:
          PyObject_HEAD
          RangeRate object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_RangeRate *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const RangeRate&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const RangeRate&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif