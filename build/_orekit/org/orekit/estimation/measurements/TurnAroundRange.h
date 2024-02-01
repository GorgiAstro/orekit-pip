#ifndef org_orekit_estimation_measurements_TurnAroundRange_H
#define org_orekit_estimation_measurements_TurnAroundRange_H

#include "org/orekit/estimation/measurements/GroundReceiverMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        class GroundStation;
        class TurnAroundRange;
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

        class TurnAroundRange : public ::org::orekit::estimation::measurements::GroundReceiverMeasurement {
         public:
          enum {
            mid_init$_e4f5e0763746f291,
            mid_getPrimaryStation_f8d3ef5d49da0d87,
            mid_getSecondaryStation_f8d3ef5d49da0d87,
            mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2,
            mid_theoreticalEvaluation_eda25b8c88791d9a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TurnAroundRange(jobject obj) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TurnAroundRange(const TurnAroundRange& obj) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(obj) {}

          static ::java::lang::String *MEASUREMENT_TYPE;

          TurnAroundRange(const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);

          ::org::orekit::estimation::measurements::GroundStation getPrimaryStation() const;
          ::org::orekit::estimation::measurements::GroundStation getSecondaryStation() const;
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
        extern PyType_Def PY_TYPE_DEF(TurnAroundRange);
        extern PyTypeObject *PY_TYPE(TurnAroundRange);

        class t_TurnAroundRange {
        public:
          PyObject_HEAD
          TurnAroundRange object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TurnAroundRange *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TurnAroundRange&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TurnAroundRange&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
